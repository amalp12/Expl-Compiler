struct expr_tree_node * makeNode(int val, int nodetype, struct TypeTable * type, struct ClassTable * classType, char* varname, struct GlobalSymbolTable * GSTEntry, struct expr_tree_node *l, struct expr_tree_node *r)
{
    

    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->left = l;
    new_node->right = r;
    new_node->nodetype = nodetype;
    new_node->type = type;
    new_node->val = val;
    new_node->varname =varname;
    new_node->GSTEntry = GSTEntry;
    new_node->classType = classType;
    return new_node;

}
struct expr_tree_node * makeNewNode(char * className )
{
    // lookup class
    struct ClassTable * classEntry = classLookup(className);
    // if class entry is null throw error
    if(classEntry == NULL)
    {
        printf("Error: Class %s not defined\n", className);
        exit(1);
    }
    // make node
    return makeNode(-1,_NODE_TYPE_NEW, NULL,classEntry, strdup(className), NULL, NULL,NULL);

}


     
struct expr_tree_node * makeNullNode()
{
    return makeNode(0,_NODE_TYPE_NULL, typeLookup("null"), NULL, strdup("null"), NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapInitNode()
{
    return makeNode(-1,_NODE_TYPE_HEAP_INIT, NULL, NULL, NULL, NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapAllocateNode()
{
    return makeNode(-1,_NODE_TYPE_HEAP_ALLOC, NULL, NULL, NULL, NULL, NULL, NULL);
}
struct expr_tree_node * makeHeapFreeNode(struct expr_tree_node *l)
{
    return makeNode(-1,_NODE_TYPE_HEAP_FREE, NULL, NULL, NULL, NULL, l, NULL);
}
struct expr_tree_node * makeDeleteNode(struct expr_tree_node *l)
{
    return makeNode(-1,_NODE_TYPE_DELETE, NULL, NULL, NULL, NULL, l, NULL);
}



struct expr_tree_node* makeFieldNode(char * fieldName, struct expr_tree_node *l,struct expr_tree_node *r){
        
             
        return makeNode(-1,_NODE_TYPE_FIELD, NULL, NULL, strdup(fieldName),NULL, l, r);
}

struct expr_tree_node* makeOperatorNode(int nodetype, struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, typeLookup("int"), NULL, NULL, NULL, l, r);
}


struct expr_tree_node * makeRelopNode(int nodetype,struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, typeLookup("bool"), NULL, NULL, NULL, l, r);
}


struct expr_tree_node * makeIdNode(char * varname)
{
    // check if the variable is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup(varname);
    
    struct LocalSymbolTable * LSTEntry = LSTLookup(varname);

    struct TypeTable * typeEntry = NULL ;
    struct ClassTable * classEntry = NULL;

    

    if(LSTEntry != NULL)
    {
        typeEntry = LSTEntry->type;
        classEntry = LSTEntry->classType;
    }
    else if(GSTEntry != NULL)
    {
        typeEntry = GSTEntry->type;
        classEntry = GSTEntry->classType;
    }
    else
    {
        printf("Error: Undeclared variable %s\n", varname);
        exit(1);
    }

    char * dupString = strdup(varname);   
    return makeNode(_NONE, _NODE_TYPE_ID,typeEntry,classEntry, dupString, GSTEntry, NULL, NULL);
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


    return makeNode(_NONE, _NODE_TYPE_ID,NULL,NULL ,strdup(varname), NULL, NULL, NULL);
}

// decare id node
struct expr_tree_node * makeDeclareIdNode(char * varname, char *  typeName)
{
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    struct ClassTable * classEntry = classLookup(typeName);


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
    return makeNode(_NONE, _NODE_TYPE_ID,typeEntry, classEntry, dupString, NULL, NULL, NULL);
}
struct expr_tree_node * makeStringNode(char * string, int offset)
{
    char * dupString = strndup(string, strlen(string)-1);
    return makeNode(_NONE, _NODE_TYPE_STRING, typeLookup("str"), NULL, dupString, NULL, NULL, NULL);

}

struct expr_tree_node * makeNumberNode(int num )
{

    return makeNode(num, _NODE_TYPE_NUM, typeLookup("int"), NULL, NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeWriteNode(struct expr_tree_node *expr)
{
    return makeNode(_NONE, _NODE_TYPE_WRITE, typeLookup("int"), NULL, NULL, NULL, expr,NULL);
}

struct expr_tree_node * makeReadNode(struct expr_tree_node *id)
{
    return makeNode(_NONE, _NODE_TYPE_READ,typeLookup("int"), NULL, NULL, NULL, id,NULL);
}

struct expr_tree_node * makeConnectorNode( struct expr_tree_node *l, struct expr_tree_node *r)
{
    return makeNode(_NONE, _NODE_TYPE_CONNECTOR,NULL, NULL, NULL, NULL, l,r);
}

struct expr_tree_node * makeIfElseNode( struct expr_tree_node *cond, struct expr_tree_node *thenCode, struct expr_tree_node * elseCode)
{
    struct expr_tree_node * thenNode =  makeNode(_NONE, _NODE_TYPE_THEN,NULL, NULL,NULL, NULL, thenCode,elseCode);
    struct expr_tree_node * ifNode =  makeNode(_NONE, _NODE_TYPE_IF_ELSE,NULL, NULL, NULL, NULL, cond,thenNode);
    
    return ifNode;
}

struct expr_tree_node * makeWhileNode( struct expr_tree_node *cond, struct expr_tree_node *body)
{
    return makeNode(_NONE, _NODE_TYPE_WHILE,NULL, NULL, NULL, NULL, cond,body);
}

struct expr_tree_node * makeBreakNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAK, NULL, NULL, NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeContinueNode()
{
    return makeNode(_NONE, _NODE_TYPE_CONTINUE,NULL, NULL, NULL, NULL, NULL,NULL);
}

struct expr_tree_node * makeBreakpointNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAKPOINT,NULL, NULL, NULL, NULL, NULL,NULL);
}

// make do while node
struct expr_tree_node * makeDoWhileNode( struct expr_tree_node *body, struct expr_tree_node *cond)
{
    return makeNode(_NONE, _NODE_TYPE_DO_WHILE,NULL, NULL, NULL, NULL, body,cond);
}

struct expr_tree_node * makeSelfDotFunctionNode(char * idName, struct expr_tree_node * argNode )
{

    struct expr_tree_node * idNode = makeIdNode("self");
    // get current class being defined
    struct ClassTable * currentClass = getCurrentClassBeingDefined();
    // if current class is null
    if(currentClass == NULL)
    {
      printf("Self can only be used inside a class \n");
      exit(1);
    }

    return makeMethodCallNode(idName, idNode, argNode);
}

struct expr_tree_node * makeSelfDotIdFieldNode(char * idName)
{
    // make field nodes
    struct expr_tree_node * rightFieldNode  = makeFieldNode(idName, NULL,NULL);
    struct expr_tree_node * finalTypeNode = makeFieldNode("finalType",NULL,NULL);
    struct expr_tree_node * leftFieldNode  = makeFieldNode("self",rightFieldNode,finalTypeNode);
    leftFieldNode->classType = getCurrentClassBeingDefined();

    // if left class type is null
    if(leftFieldNode->classType == NULL)
    {
        printf("Self not declared. Self can only be used inside classes.\n");
        exit(1);
    }



    // get the type of the right field node
    struct FieldList * rightType = classFieldLookup(leftFieldNode->classType, rightFieldNode->varname);
    // if right type is null
    if(rightType == NULL)
    {
        printf("Field not found in class \n");
        exit(1);
    }

    // set the type of the right field node
    rightFieldNode->type = rightType->type;
    // set the class type of the right field node
    rightFieldNode->classType = rightType->classType;


    // set the types of final type node
    finalTypeNode->type = rightFieldNode->type;
    finalTypeNode->classType = rightFieldNode->classType;

    return leftFieldNode;

}
struct expr_tree_node * makeIdDotFunctionNode(char * idNameBeforeDot, char *idNameAfterDot, struct expr_tree_node * argNode )
{
    struct expr_tree_node * idNode = makeIdNode(idNameBeforeDot);
    // search the id in the local symbol table
    struct LocalSymbolTable * LSTEntry = LSTLookup(idNode->varname);

    // search the id in the global symbol table
    struct GlobalSymbolTable * GSTEntry = GSTLookup(idNode->varname);

    // if both not found
    if(GSTEntry == NULL && LSTEntry == NULL)
    {
      printf("Variable %s not declared \n", idNode->varname);
      exit(1);
    }
    // if found in local symbol table
    if(LSTEntry != NULL)
    {
      idNode->classType = LSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }    
    // if found in global symbol table
    if(GSTEntry != NULL)
    {
      idNode->classType = GSTEntry->classType;
      // variable the id is not a class thow error
      if(idNode->classType == NULL)
      {
        printf("Variable %s is not a class \n", idNode->varname);
        exit(1);
      }
    }

    return makeMethodCallNode(idNameAfterDot, idNode, argNode);

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
            printf("Function Call Node Error: Type mismatch in function call %s\n", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->prev;
    }
    // if the number of parameters in the function call does not match the number of parameters in the function definition
    if(temp != NULL || temp2 != NULL)
    {
        printf("Error: Number of parameters in function call %s does not match the number of parameters in function definition\n", name);
        exit(1);
    }
    return makeNode(_NONE, _NODE_TYPE_FUNCTION_CALL,GSTEntry->type, GSTEntry->classType,name , GSTEntry, parameters,NULL);

}
struct expr_tree_node * makeMethodDeclareNode(char * name, char * typeName, struct expr_tree_node * parameters)
{
    struct expr_tree_node * idNode = makeDeclareIdNode(name, NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = parameters;
    idNode->type = typeLookup(typeName);
    return idNode;

}

struct expr_tree_node * makeMethodCallNode(char * name, struct expr_tree_node * beforeDotNode, struct expr_tree_node *parameters)
{
    
    // get the type of the left node
    // left node can only be a class
    struct expr_tree_node * nodeJustBeforeMethod = beforeDotNode;
    // go to the left most node
    while(nodeJustBeforeMethod->left != NULL)
    {
        nodeJustBeforeMethod = nodeJustBeforeMethod->left;
    }
    
    struct ClassTable * classEntry = nodeJustBeforeMethod->classType;

    // if class entry is null then it is not a class
    if(classEntry == NULL)
    {
        printf("Method Call Node Error: %s is not a class variable\n", name);
        exit(1);
    }
    

    // lookup the method in the class
    struct ClassMemberFunctionList * methodEntry = classMethodLookup(classEntry, name);

    // typechecking parameters
    struct expr_tree_node * temp = parameters;
    // next because first entry is self
    struct ParameterNode * temp2 = methodEntry -> paramList->next;

    // get the last parameter from the parameter list of gst
    // to check in reverse order cuz in the node tree it is stored in reverse order
    while(temp2 != NULL && temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    
    while(temp != NULL && temp2 != NULL)
    {
        if(temp->right->type != temp2->type)
        {
            printf("Function Call Node Error: Type mismatch in function call %s\n", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->prev;
    }
    // if the number of parameters do not match
    if(temp != NULL || temp2 != NULL)
    {
        printf("Error: Number of parameters in method call %s does not match the number of parameters in method definition\n", name);
        exit(1);
    }
    // for now methods do not reuturn class types
    return makeNode(_NONE, _NODE_TYPE_METHOD_CALL, methodEntry->type, NULL,name , NULL, parameters, beforeDotNode);

}

struct expr_tree_node * makeFunctionDefinitionNode( char * typeName, char * name, struct expr_tree_node *parameters, struct expr_tree_node *body)
{
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    // lookup class if that is the return type
    struct ClassTable * classEntry = classLookup(typeName);

    if(typeEntry == NULL && classEntry == NULL)
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
        if((temp->type != temp2->type)|| (temp->classType != temp2->classType))
        {
            printf("Function Definition Error: Type mismatch in function call %s", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }
    // if the number of parameters do not match
    if(temp != NULL || temp2 != NULL)
    {
        printf("Error: Number of parameters in function definition %s does not match the number of parameters in function declaration\n", name);
        exit(1);
    }
    return makeNode(_NONE, _NODE_TYPE_FUNCTION_DEFINITION,typeEntry, classEntry, name, GSTEntry, parameters,body);

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
    struct ParameterNode * temp2 = method -> paramList->next; // next beacuse the first parameter would be self
   
    while(temp != NULL && temp2 != NULL){
        if(temp->type != temp2->type)
        {
            printf("Method Definition  Error: Type mismatch in method call %s", name);
            exit(1);
        }
        temp = temp->left;
        temp2 = temp2->next;
    }

    // if the number of parameters in the method call is not equal to the number of parameters in the method definition
    if(temp != NULL || temp2 != NULL)
    {
        printf("Error: Number of parameters in method definition %s does not match the number of parameters in method declaration\n", name);
        exit(1);
    }
   
    return makeNode(_NONE, _NODE_TYPE_FUNCTION_DEFINITION,typeEntry, currentClass,name, NULL, parameters,body);


}



struct expr_tree_node * makeReturnNode (struct expr_tree_node *expr)
{
    return makeNode(_NONE, _NODE_TYPE_RETURN,NULL, NULL, NULL, NULL, expr,NULL);
}


//  make parameter node
struct expr_tree_node * makeParameterNode(char * typeName, char * name)
{
  
    // lookup type
    struct TypeTable * typeEntry = typeLookup(typeName);
    // lookup class
    struct ClassTable * classEntry = classLookup(typeName);
    if(typeEntry == NULL)
    {
        printf("Error: Undeclared type %s\n", typeName);
        exit(1);
    }  
    
    return makeNode(_NONE, _NODE_TYPE_PARAMETER,typeEntry,classEntry, name, NULL, NULL,NULL);
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
    struct ParameterNode * temp2 = method -> paramList ->next;
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



// insert into field tree
void insertIntoFieldTree(struct expr_tree_node * root, struct expr_tree_node * node)
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
    struct expr_tree_node * finalTypeNode = root->right;

    // if the final type node is null then throw error
    if(finalTypeNode == NULL)
    {
        // print error message
        printf("Error: Null final type node in insertIntoTypeFieldTree\n");
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
        node->classType = feildEntry->classType;
        node->type = NULL;

    }
    else if (temp->type!=NULL)
    {
        // if its type is a struct type then search in the type fields for the field 
        struct FieldList * fieldEntry = typeFieldLookup(temp->type, node->varname);

        // if the field is not declared
        if(fieldEntry == NULL)
        {
            printf("Error: Undeclared field %s in type %s\n", node->varname, temp->type->name);
            exit(1);
        }
        node->type = fieldEntry->type;
        node->classType = NULL;

    }
    else
    {
        // temp is not a class or a struct type
        printf("Error: %s is not a class or a struct type\n", temp->varname);
        exit(1);

    }

    // set final node types 
    finalTypeNode->type = node->type;
    finalTypeNode->classType = node->classType;





    
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
struct expr_tree_node * declareAndDefineMain(char * typeName, struct expr_tree_node * mainBodyNode, FILE * target_file)
{
    // check if main is declared
    struct GlobalSymbolTable * GSTEntry = GSTLookup("main");
    if(GSTEntry != NULL)
    {
        printf("Error: Main function already declared!\n");
        exit(1);
    }

    // declare main in Global Symbol Table
    GSTInstall("main", typeLookup("int"),NULL, _NODE_TYPE_FUNCTION_DEFINITION, 0,0, 0);


    // if init state is false initialze
    compilerInit(target_file);

    // make function definition node for main
    struct expr_tree_node * funcNode = makeFunctionDefinitionNode(typeName, "main", NULL, mainBodyNode);

    // define function main
    defineFunction(funcNode, target_file);

    // end expl code 
    explEnd(target_file);

    // close target file
    if(target_file) fclose(target_file);
    
    // return function node
    return funcNode;

}

struct expr_tree_node * makeIdDotIdFieldNode(char * leftIdName, char * rightIdName)
{
    // make field nodes
    struct expr_tree_node * rightFieldNode  = makeFieldNode(rightIdName, NULL,NULL);
    struct expr_tree_node * finalTypeNode = makeFieldNode("finalType",NULL,NULL);
    struct expr_tree_node * leftFieldNode  = makeFieldNode(leftIdName,rightFieldNode,finalTypeNode);

    // get the LST entry for the variable
    struct LocalSymbolTable * lstEntry = LSTLookup(leftFieldNode->varname);
    // if lst entry is not null
    if(lstEntry != NULL)
    {
        // set the type of the left field node
        leftFieldNode->type = lstEntry->type;
        leftFieldNode->classType = lstEntry->classType;

    }
    else
    {
        // get the GST entry for the variable
        struct GlobalSymbolTable * gstEntry = GSTLookup(leftFieldNode->varname);
        // if gst entry is not null
        if(gstEntry != NULL)
        {
            // set the type of the left field node
            leftFieldNode->type = gstEntry->type;
            leftFieldNode->classType = gstEntry->classType;
        }
        else
        {
            // error
            printf("Error: Variable %s not declared \n", leftFieldNode->varname);
            exit(1);
        }
    } 

    // check if left feilds is a struct or a class
    if(leftFieldNode->type == NULL && leftFieldNode->classType == NULL)
    {
        printf("Error: Variable %s is not a struct or a class\n", leftFieldNode->varname);
        exit(1);
    }
    // get the type of the right field node if type field is not empty
    if(leftFieldNode->type != NULL)
    {
        struct FieldList * rightType = typeFieldLookup(leftFieldNode->type, rightFieldNode->varname);
        // if right type is null throw error
        if(rightType == NULL)
        {
        printf("Error: Field %s not found in type %s \n",  rightFieldNode->varname, leftFieldNode->type->name);
        exit(1);
        }
        // set the type of the right field node
        rightFieldNode->type = rightType->type;
        rightFieldNode->classType = rightType->classType;

    }
    else if (leftFieldNode->classType != NULL)
    {
        struct FieldList * rightType = classFieldLookup(leftFieldNode->classType, rightFieldNode->varname);
        // if right type is null throw error
        if(rightType == NULL)
        {
            printf("Error: Field %s not found in class %s \n",  rightFieldNode->varname, leftFieldNode->classType->name);
            exit(1);
        }
        // set the type of the right field node
        rightFieldNode->type = rightType->type;
        rightFieldNode->classType = rightType->classType;

    }
    else
    {
        printf("Error: %s is not a struct or a class\n", leftFieldNode->varname);
        exit(1);
    }
    // set the final type of the left field node
    finalTypeNode->type = rightFieldNode->type;
    finalTypeNode->classType = rightFieldNode->classType;

    return leftFieldNode;
}


void classFieldCall(struct expr_tree_node * leftFieldNode, struct expr_tree_node * rightFieldNode)
{
      // get the LST entry for the variable
      struct LocalSymbolTable * lstEntry = LSTLookup(leftFieldNode->varname);
      // if lst entry is not null
      if(lstEntry != NULL)
      {
        // set the type of the left field node
        leftFieldNode->type = lstEntry->type;
      }
      else
      {
        // get the GST entry for the variable
        struct GlobalSymbolTable * gstEntry = GSTLookup(leftFieldNode->varname);
        // if gst entry is not null
        if(gstEntry != NULL)
        {
          // set the type of the left field node
          leftFieldNode->type = gstEntry->type;
        }
        else
        {
          // error
          printf("Error: Variable %s not declared \n", leftFieldNode->varname);
          exit(1);
        }
      } 

      // check if left feilds is a struct
      if(leftFieldNode->type == NULL)
      {
        printf("Error: Variable %s is not a struct \n", leftFieldNode->varname);
        exit(1);
      }
      // get the type of the right field node
      struct FieldList * rightType = typeFieldLookup(leftFieldNode->type, rightFieldNode->varname);
      // if right type is null throw error
      if(rightType == NULL)
      {
        printf("Error: Field %s not found in type %s \n",  rightFieldNode->varname, leftFieldNode->type->name);
        exit(1);
      }
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
}

void compilerInit(FILE * target_file)
{
    // if init state is false initialze
    if(_INIT_STATE == _FALSE)
    {
        explInit(target_file);
        _INIT_STATE = _TRUE;
    }
}