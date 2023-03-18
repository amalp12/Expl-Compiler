void pushGlobalDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in GST
    struct GlobalSymbolTable *temp1 = GSTLookup(node->varname);
    if (temp1 != NULL) {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in GST stack
    struct declaration_node *temp2 = _GLOBAL_DECLARATION_STACK_HEAD;
    while (temp2 != NULL) {
        if (strcmp(temp2->node->varname, node->varname) == 0) {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _GLOBAL_DECLARATION_STACK_HEAD;
    _GLOBAL_DECLARATION_STACK_HEAD = newNode;
}


void pushClassDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in GST
    struct GlobalSymbolTable *temp1 = GSTLookup(node->varname);
    if (temp1 != NULL) {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in GST stack
    struct declaration_node *temp2 = _GLOBAL_DECLARATION_STACK_HEAD;
    while (temp2 != NULL) {
        if (strcmp(temp2->node->varname, node->varname) == 0) {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _GLOBAL_DECLARATION_STACK_HEAD;
    _GLOBAL_DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popGlobalDeclaration() 
{
    // null check
    if (_GLOBAL_DECLARATION_STACK_HEAD == NULL) {
        return NULL;
    }
    struct declaration_node *temp = _GLOBAL_DECLARATION_STACK_HEAD;
    _GLOBAL_DECLARATION_STACK_HEAD = _GLOBAL_DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isGlobalDeclarationStackEmpty() 
{
    return _GLOBAL_DECLARATION_STACK_HEAD == NULL;
}

void popAllGlobalDeclarationsAndCreateEntry(char * typeName)
{
    // search type table for stuct type
    struct TypeTable *typeEntry = typeLookup(typeName);

    
    // search if its a class 
    struct ClassTable *classEntry = classLookup(typeName);

    // if type not found, throw error
    if (typeEntry == NULL && classEntry == NULL) {
        printf("Error: %s not a class or a struct that is defined\n", typeName);
        exit(1);
    }

    struct declaration_node * temp = popGlobalDeclaration();
    while(temp!=NULL)
    {
        // void GSTInstall(char *name, int type, int size, int offset)   // Creates a local symbol table entry.
        // get rows and cols
        int rows = 0, cols = 0;
        if(temp->node->left != NULL) rows = temp->node->left->val;
        if(temp->node->right != NULL) cols = temp->node->right->val;
        
        GSTInstall(temp->node->varname, typeEntry, classEntry, temp->node->nodetype, 0,rows, cols);
        // getting the enty
        struct GlobalSymbolTable *entry = GSTLookup(temp->node->varname);
        // adding the parameters
        struct expr_tree_node *param = temp->node->left;

        while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
        {
            entry->paramList = addToParameterList(entry->paramList, param->varname, param->type, param->classType, rows, cols);
            param = param->left;
        }


        free(temp);
        temp = popGlobalDeclaration();

    }
}


void pushLocalDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in LST
    struct LocalSymbolTable *temp1 = LSTLookup(node->varname);
    if (temp1 != NULL) 
    {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in stack
    struct declaration_node *temp2 = _LOCAL_DECLARATION_STACK_HEAD;
    while (temp2 != NULL) 
    {
        if (strcmp(temp2->node->varname, node->varname) == 0) 
        {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _LOCAL_DECLARATION_STACK_HEAD;
    _LOCAL_DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popLocalDeclaration() 
{
    // null check
    if (_LOCAL_DECLARATION_STACK_HEAD == NULL) 
    {
        return NULL;
    }
    struct declaration_node *temp = _LOCAL_DECLARATION_STACK_HEAD;
    _LOCAL_DECLARATION_STACK_HEAD = _LOCAL_DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isLocalDeclarationStackEmpty() 
{
    return _LOCAL_DECLARATION_STACK_HEAD == NULL;
}


void popAllLocalDeclarationsAndCreateEntry(char * typeName)
{
    // search type table for type
    struct TypeTable *typeEntry = typeLookup(typeName);

   


    struct declaration_node * temp = popLocalDeclaration();
    while(temp!=NULL)
    {



        int rows = 0, cols = 0;
        if(temp->node->left != NULL) rows = temp->node->left->val;
        if(temp->node->right != NULL) cols = temp->node->right->val;

        // for arguements with types already declared
        if(temp->node->type!=NULL)
        {
            typeEntry = temp->node->type;
            
        }
        // if type not found, throw error
        if (typeEntry == NULL) 
        {
            printf("Error: Type %s not found\n", typeName);
            exit(1);
        }
        LSTInstall(temp->node->varname, typeEntry, 0,rows, cols);
    
        
        free(temp);
        temp = popLocalDeclaration();

    }
    // if class is being declared and self is not declared
    if(getCurrentClassBeingDefined()!=NULL && LSTLookup("self")==NULL)
    {
        // add self to the local symbol table
        LSTInstall("self", NULL, 0,0, 0);
        // intall it in class too
        struct ClassTable *classEntry = getCurrentClassBeingDefined();
        classFieldInstall(classEntry, "int", "self");
        // get lst entry and add class type
        struct LocalSymbolTable *LSTEntry = LSTLookup("self");
        LSTEntry->classType = getCurrentClassBeingDefined();
    }
    
}



void declareMethod( struct expr_tree_node * node)
{
   // get the current class being defined
    struct ClassTable *classEntry = getCurrentClassBeingDefined();
    // if class not found, throw error
    if (classEntry == NULL) 
    {
        printf("Error: Class not found\n");
        exit(1);
    }
    // check if method already exists in class but not the parent if it exists
    struct ClassMemberFunctionList *methodEntry = classMethodLookup(classEntry, node->varname);
    if (methodEntry != NULL ) 
    {
        // parent is null
        if(classEntry->parent==NULL)
        {
            printf("Error: Method %s already exists in class %s\n", node->varname, classEntry->name);
            exit(1);
        }
        else
        {
            // check if method already exists in ancestor class if no then throw error
            if(classMethodLookup(classEntry->parent, node->varname) == NULL)
            {
                printf("Error: Method %s already exists in class %s\n", node->varname, classEntry->name);
                exit(1);
            }
        }

        // check if the parameters name, type and classType are same
        struct ParameterNode *paramList = methodEntry->paramList->next; // skip self
        struct expr_tree_node *param = node->left;
        while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
        {
            // if paramList is null, throw error as the number of parameters are not same
            if(paramList==NULL)
            {
                printf("Error: The number of parameters in the overriden method %s in class %s are not same\n", node->varname, classEntry->name);
                exit(1);
            }
            // if the name, type or classType is not same, throw error
            if(strcmp(paramList->name, param->varname)!=0 || paramList->type!=param->type || paramList->classType!=param->classType)
            {
                printf("Error: The parameters in the overriden method %s in class %s are not same\n", node->varname, classEntry->name);
                exit(1);
            }
            paramList = paramList->next;
            param = param->left;
        }
        // if paramList is not null, throw error as the number of parameters are not same
        if(paramList!=NULL)
        {
            printf("Error: The number of parameters in the overriden method %s in class %s are not same\n", node->varname, classEntry->name);
            exit(1);
        }
        // get a new function label for the method
        int functionLabel = getNewFunctionLabel();
        // add the function label to the method entry
        methodEntry->functionLabel = functionLabel;

        
    }
    //or  if method doesn't exist in class
    else
    {
        // create a method entry in the class
        struct ParameterNode *paramList = NULL;
        struct expr_tree_node *param = node->left;
        while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
        {
            paramList = addToParameterList(paramList, param->varname, param->type, param->classType, 0, 0);
            param = param->left;
        }

        classMethodInstall(classEntry, node->varname, node->type, paramList) ;
    }

    

}
