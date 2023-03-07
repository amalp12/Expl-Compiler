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
    struct parameter_node * temp2 = GSTEntry -> paramList;

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
        printf("Error: Function %s not declared", name);
        exit(1);
    }

    // typechecking parameters
    struct expr_tree_node * temp = parameters;
    struct parameter_node * temp2 = GSTEntry -> paramList;

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
    struct parameter_node * temp2 = GSTEntry -> paramList;
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

// insert into field tree
void insertIntoFieldTree(struct expr_tree_node * root, struct expr_tree_node * node)
{
    // nullcheck
    if(root == NULL)
    {
        // print error message
        printf("Error: Null root node in insertIntoFieldTree\n");
        exit(1);
    }
    if(node == NULL)
    {
        // print error message
        printf("Error: Null node in insertIntoFieldTree\n");
        exit(1);
    }
    
    struct expr_tree_node * temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    temp->left = node;

    // getting the type of the new node inserted
    struct Fieldlist * typeEntry = typeFieldLookup(temp->type, node->varname);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared field %s in type %s\n", node->varname, temp->type->name);
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


