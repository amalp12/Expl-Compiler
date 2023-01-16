







// int evaluate(struct expr_tree_node *t){
//     if(t->operator == NULL)
//     {
//         return t->value;
//     }
//     else{
//         switch(*(t->operator)){
//             case '+' : return evaluate(t->left) + evaluate(t->right);
//                        break;
//             case '-' : return evaluate(t->left) - evaluate(t->right);
//                        break;
//             case '*' : return evaluate(t->left) * evaluate(t->right);
//                        break;
//             case '/' : return evaluate(t->left) / evaluate(t->right);
//                        break;
//         }
//     }
// }






struct expr_tree_node * makeNode(int val, int type, char* c, struct expr_tree_node *l, struct expr_tree_node *r)
{

    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->left = l;
    new_node->right = r;
    new_node->type = type;
    new_node->val = val;
    new_node->varname =c;

    return new_node;


}

struct expr_tree_node* makeOperatorNode(char c,struct expr_tree_node *l,struct expr_tree_node *r){
	int num;
	switch(c){
		case ('='):
        {
                num = _TYPE_EQUALS;
            	break;
        }
		case ('+'):
        {
                num = _TYPE_PLUS;
            	break;
        }
		case ('-'):
        {
                num = _TYPE_MINUS;
            	break;
        }
		case ('*'):
        {
                num = _TYPE_MUL;
            	break;
        }
		case ('/'):
        {
                num = _TYPE_DIV;
            	break;
        }
	}
	return makeNode(-1,num, NULL, l, r);
}
struct expr_tree_node * makeIdNode(char c)
{
    char * id = (char *)(malloc(sizeof(char)));
    (*id) = c;  

    return makeNode(_NONE, _TYPE_ID,id,NULL,NULL);
}

struct expr_tree_node * makeNumberNode(int num )
{

    return makeNode(num, _TYPE_NUM,NULL,NULL,NULL);
}

struct expr_tree_node * makeWriteNode(struct expr_tree_node *expr)
{
    return makeNode(_NONE, _TYPE_WRITE,NULL,expr,NULL);
}

struct expr_tree_node * makeReadNode(struct expr_tree_node *id)
{
    return makeNode(_NONE, _TYPE_READ,NULL,id,NULL);
}

struct expr_tree_node * makeConnectorNode( struct expr_tree_node *l, struct expr_tree_node *r)
{
    return makeNode(_NONE, _TYPE_CONNECTOR, NULL, l,r);
}