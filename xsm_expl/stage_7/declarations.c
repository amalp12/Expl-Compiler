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
    // search type table for type
    struct TypeTable *typeEntry = typeLookup(typeName);

    // if type not found, throw error
    if (typeEntry == NULL) {
        printf("Error: Type %s not found\n", typeName);
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
        
        GSTInstall(temp->node->varname, typeEntry,temp->node->nodetype, 0,rows, cols);
        // getting the enty
        struct GlobalSymbolTable *entry = GSTLookup(temp->node->varname);
        // adding the parameters
        struct expr_tree_node *param = temp->node->left;

        while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
        {
            entry->paramList = AddToParameterList(entry->paramList, param->varname, param->type, rows, cols);
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
    // if class is being declared
    if(getCurrentClassBeingDefined()!=NULL)
    {
        // add self to the local symbol table
        LSTInstall("self", NULL, 0,0, 0);
        // get lst entry and add class type
        struct LocalSymbolTable *LSTEntry = LSTLookup("self");
        LSTEntry->classType = getCurrentClassBeingDefined();
    }
    
}


void popAllClassLocalDeclarationsAndCreateEntry(char * className)
{
    // search type table for type
    struct ClassTable *classEntry = classLookup(className);

    // if class not found, throw error
    if (classEntry == NULL) 
    {
        printf("Error: Class %s not found\n", className);
        exit(1);
    }
   


    struct declaration_node * temp = popLocalDeclaration();
    while(temp!=NULL)
    {
        // check if the node is function definition
        if(temp->node->nodetype == _NODE_TYPE_FUNCTION_DEFINITION)
        {
            // create parameter List for the function
            struct ParameterNode *paramList = NULL;
            struct expr_tree_node *param = temp->node->left;
            

            while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
            {
                paramList = AddToParameterList(paramList, param->varname, param->type, param->left->val, param->right->val);
                param = param->left;
            }


            classMethodInstall (classEntry, temp->node->varname, temp->node->type, paramList) ;
            LSTInstall(temp->node->varname, temp->node->type, 0,0, 0);

            // 

        }
        else // unknown node so throw error and exit
        {
            printf("Error: Unknown node type %d\n", temp->node->nodetype);
            exit(1);
        }
        
        free(temp);
        temp = popLocalDeclaration();

    }
    // create an LST entry for the self
    // if class is being declared
    if(getCurrentClassBeingDefined()!=NULL)
    {
        // add self to the local symbol table
        LSTInstall("self", NULL, 0,0, 0);
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
    // check if method already exists in class
    struct ClassMemberFunctionList *methodEntry = classMethodLookup(classEntry, node->varname);
    if (methodEntry != NULL) 
    {
        printf("Error: Method %s already exists in class %s\n", node->varname, classEntry->name);
        exit(1);
    }

    // create a method entry in the class
    struct ParameterNode *paramList = NULL;
    struct expr_tree_node *param = node->left;
    while (param != NULL && param->nodetype == _NODE_TYPE_PARAMETER)
    {
        paramList = AddToParameterList(paramList, param->varname, param->type, 0, 0);
        param = param->left;
    }
    classMethodInstall (classEntry, node->varname, node->type, paramList) ;

}
