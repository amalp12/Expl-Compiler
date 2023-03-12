struct expr_tree_node * makeNode(int val, int nodetype, struct TypeTable * type, char* varname, struct GlobalSymbolTable * GSTEntry, struct expr_tree_node *l, struct expr_tree_node *r)
{
    

    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->left = l;
    new_node->right = r;
    new_node->nodetype = nodetype;
    new_node->type = type;
    new_node->val = val;
    new_node->varname =varname;
    new_node->GSTEntry = GSTEntry;

    return new_node;

}
struct expr_tree_node * makeNewNode(char * className )
{
    struct expr_tree_node * node = makeNode(-1,_NODE_TYPE_NEW, NULL, strdup(className), NULL, NULL,NULL);
    // set the class type
    node->classType = classLookup(className);
    // return node
    return node;

}


struct expr_tree_node * makeClassNode(char * className, struct FieldList *fields, struct expr_tree_node * methodDefinitions)
{
        // get the class type entry
        struct ClassTable * classEntry = classLookup(className);

        // if class does not exist throw error and exit]
        if(classEntry == NULL)
        {
            printf("Error: Class %s not defined\n", className);
            exit(1);
        }

        // install fields in the class
        classEntry->memberFields = fields;

        // validate fields
        validateFields(classEntry);

        // makenode
        return makeNode(-1,_NODE_TYPE_CLASS, NULL, strdup(className), NULL, methodDefinitions, NULL);

  
}
        
struct expr_tree_node * makeNullNode()
{
    return makeNode(0,_NODE_TYPE_NULL, typeLookup("null"), strdup("null"), NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapInitNode()
{
    return makeNode(-1,_NODE_TYPE_HEAP_INIT, NULL, NULL, NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapAllocateNode()
{
    return makeNode(-1,_NODE_TYPE_HEAP_ALLOC, NULL, NULL, NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapFreeNode(struct expr_tree_node *l)
{
    return makeNode(-1,_NODE_TYPE_HEAP_FREE, NULL, NULL, NULL, l, NULL);
}


struct expr_tree_node* makeFieldNode(char * fieldName, struct expr_tree_node *l,struct expr_tree_node *r){
        
             
        return makeNode(-1,_NODE_TYPE_FIELD, NULL, strdup(fieldName),NULL, l, r);
}

struct expr_tree_node* makeOperatorNode(int nodetype, struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, typeLookup("int"), NULL, NULL, l, r);
}


struct expr_tree_node * makeRelopNode(int nodetype,struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, typeLookup("bool"), NULL, NULL, l, r);
}


struct expr_tree_node * makeIdNode(char * varname)
{
    // check if the variable is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup(varname);
    
    struct LocalSymbolTable * LSTEntry = LSTLookup(varname);

    struct TypeTable * typeEntry = NULL ;

    if(LSTEntry != NULL)
    {
        typeEntry = LSTEntry->type;
    }
    else if(GSTEntry != NULL)
    {
        typeEntry = GSTEntry->type;
    }
    else
    {
        printf("Error: Undeclared variable %s\n", varname);
        exit(1);
    }

    char * dupString = strdup(varname);   
    return makeNode(_NONE, _NODE_TYPE_ID,typeEntry, dupString, GSTEntry, NULL, NULL);
}

// make local id node
struct expr_tree_node * makeLocalIdNode(char * varname)
{
    // check if the variable is declared
    struct LocalSymbolTable * LSTEntry = LSTLookup(varname);
    struct GlobalSymbolTable * GSTEntry = GSTLookup(varname);

    if(LSTEntry != NULL || GSTEntry != NULL)
    {
        printf("Error: Redeclaration of variable %s\n", varname);
        exit(1);
    }

    char * dupString = strdup(varname);   
    return makeNode(_NONE, _NODE_TYPE_ID,NULL, dupString, NULL, NULL, NULL);
}

// decare id node
struct expr_tree_node * makeDeclareIdNode(char * varname, char *  typeName)
{
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);


    // check if the variable is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup(varname);
    struct LocalSymbolTable * LSTEntry = LSTLookup(varname);

    if(LSTEntry != NULL)
    {
        printf("Error: Redeclaration of variable %s\n", varname);
        exit(1);
    }
    else if(GSTEntry != NULL)
    {
        printf("Error: Redeclaration of variable %s\n", varname);
        exit(1);
    }

    char * dupString = strdup(varname);   
    return makeNode(_NONE, _NODE_TYPE_ID,typeEntry, dupString, NULL, NULL, NULL);
}
struct expr_tree_node * makeStringNode(char * string, int offset)
{
    char * dupString = strndup(string, strlen(string)-1);
    return makeNode(_NONE, _NODE_TYPE_STRING, typeLookup("str"), dupString, NULL, NULL, NULL);

}

struct expr_tree_node * makeNumberNode(int num )
{

    return makeNode(num, _NODE_TYPE_NUM, typeLookup("int"),NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeWriteNode(struct expr_tree_node *expr)
{
    return makeNode(_NONE, _NODE_TYPE_WRITE, typeLookup("int"),NULL, NULL, expr,NULL);
}

struct expr_tree_node * makeReadNode(struct expr_tree_node *id)
{
    return makeNode(_NONE, _NODE_TYPE_READ,typeLookup("int"),NULL, NULL, id,NULL);
}

struct expr_tree_node * makeConnectorNode( struct expr_tree_node *l, struct expr_tree_node *r)
{
    return makeNode(_NONE, _NODE_TYPE_CONNECTOR,NULL, NULL, NULL, l,r);
}

struct expr_tree_node * makeIfElseNode( struct expr_tree_node *cond, struct expr_tree_node *thenCode, struct expr_tree_node * elseCode)
{
    struct expr_tree_node * thenNode =  makeNode(_NONE, _NODE_TYPE_THEN,NULL, NULL, NULL, thenCode,elseCode);
    struct expr_tree_node * ifNode =  makeNode(_NONE, _NODE_TYPE_IF_ELSE,NULL, NULL, NULL, cond,thenNode);
    
    return ifNode;
}

struct expr_tree_node * makeWhileNode( struct expr_tree_node *cond, struct expr_tree_node *body)
{
    return makeNode(_NONE, _NODE_TYPE_WHILE,NULL, NULL, NULL, cond,body);
}

struct expr_tree_node * makeBreakNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAK,NULL, NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeContinueNode()
{
    return makeNode(_NONE, _NODE_TYPE_CONTINUE,NULL, NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeBreakpointNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAKPOINT,NULL, NULL, NULL, NULL,NULL);
}

// make do while node
struct expr_tree_node * makeDoWhileNode( struct expr_tree_node *body, struct expr_tree_node *cond)
{
    return makeNode(_NONE, _NODE_TYPE_DO_WHILE,NULL, NULL, NULL, body,cond);
}

struct expr_tree_node * makeFunctionCallNode(char * name, struct expr_tree_node *parameters)
{
    // check if the variable is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup(name);

    // typechecking parameters
    struct expr_tree_node * temp = parameters;
    struct ParameterNode * temp2 = GSTEntry -> paramList;

    // get the last parameter from the parameter list of gst
    // to check in reverse order cuz in the node tree it is stored in reverse order
    while(temp2 != NULL && temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    
    while(temp != NULL && temp2 != NULL){
        if(temp->right->type != temp2->type)
        {
            printf("Function Call Node Error: Type mismatch in function call %s", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->prev;
    }
   
    return makeNode(_NONE, _NODE_TYPE_FUNCTION_CALL,GSTEntry->type, name, GSTEntry, parameters,NULL);

}

struct expr_tree_node * makeFunctionDefinitionNode( char * typeName, char * name, struct expr_tree_node *parameters, struct expr_tree_node *body)
{
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared type %s\n", typeName);
        exit(1);
    }
    // check if the variable is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup(name);

    // if the function is not declared
    if(GSTEntry == NULL)
    {
        printf("Error: Function %s not declared\n", name);
        exit(1);
    }

    // typechecking parameters
    struct expr_tree_node * temp = parameters;
    struct ParameterNode * temp2 = GSTEntry -> paramList;

    while(temp != NULL && temp2 != NULL){
        if(temp->type != temp2->type)
        {
            printf("Function Definition Node Error: Type mismatch in function call %s", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }
   
    return makeNode(_NONE, _NODE_TYPE_FUNCTION_DEFINITION,typeEntry, name, GSTEntry, parameters,body);

}


struct expr_tree_node * makeMethodDefinitionNode( char * typeName, char * name, struct expr_tree_node *parameters, struct expr_tree_node *body)
{
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared type %s\n", typeName);
        exit(1);
    }
  
    // get the current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();

    // get method from class
    struct ClassMemberFunctionList * method = classMethodLookup(currentClass, name);

    // if method is not declared in the class throw error and exit
    if(method == NULL)
    {
        printf("Error: Method %s not declared in class %s \n", name, currentClass->name);
        exit(1);
    }
    // typechecking parameters
    struct expr_tree_node * temp = parameters;
    struct ParameterNode * temp2 = method -> paramList;

    while(temp != NULL && temp2 != NULL){
        if(temp->type != temp2->type)
        {
            printf("Function Definition Node Error: Type mismatch in function call %s", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }
   
    struct expr_tree_node * new_node =  makeNode(_NONE, _NODE_TYPE_FUNCTION_DEFINITION,typeEntry, name, NULL, parameters,body);
    new_node->classType = currentClass;
    return new_node;

}



struct expr_tree_node * makeReturnNode (struct expr_tree_node *expr)
{
    return makeNode(_NONE, _NODE_TYPE_RETURN,NULL, NULL, NULL, expr,NULL);
}


//  make parameter node
struct expr_tree_node * makeParameterNode(char * typeName, char * name)
{
  
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared type %s\n", typeName);
        exit(1);
    }  
    
    return makeNode(_NONE, _NODE_TYPE_PARAMETER,typeEntry, name, NULL, NULL,NULL);
}

// make function definition node
//    Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
void defineFunction(struct expr_tree_node* node, FILE * target_file)
{
   
    
    // get the GST entry
    struct GlobalSymbolTable * GSTEntry = node->GSTEntry;

    // if the function is not declared
    if(GSTEntry == NULL)
    {
        printf("Function Definition Error: Function %s not declared", node->varname);
        exit(1);
    }

    // compare if the parameters are same
    struct expr_tree_node * temp = node->left; // parameters
    struct ParameterNode * temp2 = GSTEntry -> paramList;
    while(temp != NULL && temp2 != NULL){
        if(temp->type != temp2->type)
        {
            printf("Function Definition Error: Type mismatch in function definition %s", node->varname);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }

    // calling function code generator
    funcCodegen(node, target_file);


  
}

 void defineClassMethod(struct ClassTable * classPtr, struct expr_tree_node* node, FILE * target_file)
{
    // node null check thow error
    if(node == NULL)
    {
        printf("Class Definition Error: Class method definition is null");
        exit(1);
    }
    
    
    if(classPtr == NULL)
    {
        printf("Class Definition Error: Class not declared forvFunction %s", node->varname);
        exit(1);
    }
    // search the method from the class 
    struct ClassMemberFunctionList * method = classMethodLookup(classPtr, node->varname);

    // if the function is not declared
    if(method == NULL)
    {
        printf("Function Definition Error: Function %s not declared", node->varname);
        exit(1);
    }

    // compare if the parameters are same
    struct expr_tree_node * temp = node->left; // parameters
    struct ParameterNode * temp2 = method -> paramList;
    while(temp != NULL && temp2 != NULL){
        if(temp->type != temp2->type)
        {
            printf("Function Definition Error: Type mismatch in function definition %s", node->varname);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }

    // calling function code generator
    classMethodCodegen(getCurrentClassBeingDefined(),node, target_file);


  
}



void defineClass(struct expr_tree_node* node, FILE * target_file)
{
   

    struct ClassTable * classEntry = classLookup(node->varname);
    if(classEntry == NULL)
    {
        printf("Class Definition Error: Class %s not declared", node->varname);
        exit(1);
    }
    // for each method in class validate parameters from the ClassTable
    struct expr_tree_node * methodDefinitionConnector = node->right; // connector of method 1 or null   
    while(methodDefinitionConnector!=NULL)
    {
        // look up the function in the 
        struct ClassMemberFunctionList * method = classMethodLookup(classEntry, methodDefinitionConnector->right->varname);

        // if the method is not declared
        if(method == NULL)
        {
            printf("Class Definition Error: Method %s of class %s not declared", methodDefinitionConnector->right->varname, node->varname);
            exit(1);
        }

        // compare if the parameters are same
        struct expr_tree_node * temp = methodDefinitionConnector->right->left; // parameters
        struct ParameterNode * temp2 = method -> paramList;
        while(temp != NULL && temp2 != NULL){
            if(temp->type != temp2->type)
            {
                printf("Class Definition Error: Type mismatch in method definition %s of class %s", methodDefinitionConnector->right->varname, node->varname);
                exit(1);
            }
            temp = temp->left;
            temp2 = temp2->next;
        }

        // if both not null throw error number of parameters don't match
        if(temp != NULL || temp2 != NULL)
        {
            printf("Class Definition Error: Number of parameters don't match in method definition %s of class %s", methodDefinitionConnector->right->varname, node->varname);
            exit(1);
        }

        // move to next method definition
        methodDefinitionConnector = methodDefinitionConnector->left;

    }    
    


    

    // calling function code generator
    classCodegen(node, target_file);


  
}


// insert into field tree
void insertIntoTypeFieldTree(struct expr_tree_node * root, struct expr_tree_node * node)
{
    // nullcheck
    if(root == NULL)
    {
        // print error message
        printf("Error: Null root node in insertIntoTypeFieldTree\n");
        exit(1);
    }
    if(node == NULL)
    {
        // print error message
        printf("Error: Null node in insertIntoTypeFieldTree\n");
        exit(1);
    }
    
    struct expr_tree_node * temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    temp->left = node;

    // getting the type of the new node inserted
    struct FieldList * typeEntry = typeFieldLookup(temp->type, node->varname);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared field %s in type %s\n", node->varname, temp->type->name);
        exit(1);
    }
    node->type = typeEntry->type;

    
}

// insert into field tree
void insertIntoClassFieldTree(struct expr_tree_node * root, struct expr_tree_node * node)
{
    // nullcheck
    if(root == NULL)
    {
        // print error message
        printf("Error: Null root node in insertIntoTypeFieldTree\n");
        exit(1);
    }
    if(node == NULL)
    {
        // print error message
        printf("Error: Null node in insertIntoTypeFieldTree\n");
        exit(1);
    }
    
    struct expr_tree_node * temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    temp->left = node;

    // if there is a dot after temp then that means temp node has to refer to either a class of a struct

    if(temp->classType!=NULL)
    {
        // if its a class type then search the class fields for the field
        struct FieldList * feildEntry = classFieldLookup(temp->classType, node->varname);

        // if the class field is not declared
        if(feildEntry == NULL)
        {
            printf("Error: Undeclared field %s in class %s\n", node->varname, temp->classType->name);
            exit(1);
        }
        node->classType = temp->classType;
        node->type = NULL;

    }
    else if (temp->type!=NULL)
    {
        // if its type is a struct type then search in the type fields for the field 
        struct FieldList * typeEntry = typeFieldLookup(temp->type, node->varname);

        // if the field is not declared
        if(typeEntry == NULL)
        {
            printf("Error: Undeclared field %s in type %s\n", node->varname, temp->type->name);
            exit(1);
        }
        node->type = typeEntry->type;
        node->classType = NULL;

    }
    else
    {
        // temp is not a class or a struct type
        printf("Error: %s is not a class or a struct type\n", temp->varname);
        exit(1);

    }





    
}

void insertIntoMethodTree(struct expr_tree_node * root, struct expr_tree_node * node)
{
    // nullcheck
    if(root == NULL)
    {
        // print error message
        printf("Error: Null root node in insertIntoMethodTree\n");
        exit(1);
    }
    if(node == NULL)
    {
        // print error message
        printf("Error: Null node in insertIntoMethodTree\n");
        exit(1);
    }
    
    struct expr_tree_node * temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    temp->left = node;

    // getting the type of the new node inserted
    struct FieldList * typeEntry = typeFieldLookup(temp->type, node->varname);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared method %s in type %s\n", node->varname, temp->type->name);
        exit(1);
    }
    node->type = typeEntry->type;

    
}

//declare main function
void declareMain()
{
    // check if main is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup("main");
    if(GSTEntry != NULL)
    {
        printf("Error: Main function already declared!\n");
        exit(1);
    }
    // declare main
    GSTInstall("main", typeLookup("int"), _NODE_TYPE_FUNCTION_DEFINITION, 0,0, 0);



}


