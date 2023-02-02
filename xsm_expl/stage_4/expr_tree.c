struct expr_tree_node * makeNode(int val, int nodetype, int type, char* c, struct expr_tree_node *l, struct expr_tree_node *r)
{

    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->left = l;
    new_node->right = r;
    new_node->nodetype = nodetype;
    new_node->type = type;
    new_node->val = val;
    new_node->varname =c;

    return new_node;


}

struct expr_tree_node* makeOperatorNode(int nodetype, struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, _TYPE_INT, NULL, l, r);
}


struct expr_tree_node * makeRelopNode(int nodetype,struct expr_tree_node *l,struct expr_tree_node *r){
	

	return makeNode(-1,nodetype, _TYPE_BOOL, NULL, l, r);
}

struct expr_tree_node * makeIdNode(char * varname)
{
    char * dupString = strdup(varname);   
    return makeNode(_NONE, _NODE_TYPE_ID,_NONE, dupString, NULL, NULL);
}
struct expr_tree_node * makeStringNode(char * string, int offset)
{
    char * dupString = strndup(string, strlen(string)-1);
    return makeNode(_NONE, _NODE_TYPE_STRING, _TYPE_STRING, dupString, NULL, NULL);

}

struct expr_tree_node * makeNumberNode(int num )
{

    return makeNode(num, _NODE_TYPE_NUM, _TYPE_INT,NULL,NULL,NULL);
}

struct expr_tree_node * makeWriteNode(struct expr_tree_node *expr)
{
    return makeNode(_NONE, _NODE_TYPE_WRITE, _TYPE_INT,NULL,expr,NULL);
}

struct expr_tree_node * makeReadNode(struct expr_tree_node *id)
{
    return makeNode(_NONE, _NODE_TYPE_READ,_TYPE_INT,NULL,id,NULL);
}

struct expr_tree_node * makeConnectorNode( struct expr_tree_node *l, struct expr_tree_node *r)
{
    return makeNode(_NONE, _NODE_TYPE_CONNECTOR,_TYPE_CONNECTOR, NULL, l,r);
}

struct expr_tree_node * makeIfElseNode( struct expr_tree_node *cond, struct expr_tree_node *thenCode, struct expr_tree_node * elseCode)
{
    struct expr_tree_node * thenNode =  makeNode(_NONE, _NODE_TYPE_THEN,_TYPE_KEYWORD, NULL, thenCode,elseCode);
    struct expr_tree_node * ifNode =  makeNode(_NONE, _NODE_TYPE_IF_ELSE,_TYPE_KEYWORD, NULL, cond,thenNode);
    
    return ifNode;
}

struct expr_tree_node * makeWhileNode( struct expr_tree_node *cond, struct expr_tree_node *body)
{
    return makeNode(_NONE, _NODE_TYPE_WHILE,_TYPE_KEYWORD, NULL, cond,body);
}

struct expr_tree_node * makeBreakNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAK,_TYPE_KEYWORD, NULL, NULL,NULL);
}

struct expr_tree_node * makeContinueNode()
{
    return makeNode(_NONE, _NODE_TYPE_CONTINUE,_TYPE_KEYWORD, NULL, NULL,NULL);
}

struct expr_tree_node * makeBreakpointNode()
{
    return makeNode(_NONE, _NODE_TYPE_BREAKPOINT,_TYPE_KEYWORD, NULL, NULL,NULL);
}

// make do while node
struct expr_tree_node * makeDoWhileNode( struct expr_tree_node *body, struct expr_tree_node *cond)
{
    return makeNode(_NONE, _NODE_TYPE_DO_WHILE,_TYPE_KEYWORD, NULL, body,cond);
}