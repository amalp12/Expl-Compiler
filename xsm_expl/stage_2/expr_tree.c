

struct  expr_tree_node * makeLeafNode(int value)
{
    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;

}


struct expr_tree_node * makeOperatorNode(char op,struct expr_tree_node * l, struct expr_tree_node * r)
{

    struct expr_tree_node * new_node = (struct expr_tree_node *) malloc(sizeof(struct expr_tree_node));
    new_node->operator = (char *)malloc(sizeof(char));
    *(new_node->operator) = op;
    new_node->left = l;
    new_node->right = r;
    return new_node;


}




int evaluate(struct expr_tree_node *t){
    if(t->operator == NULL)
    {
        return t->value;
    }
    else{
        switch(*(t->operator)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}


void printPrefix(struct expr_tree_node * t)
{
    if(t==NULL) return;
    if(t->operator==NULL)
    {
        printf(" %d" ,t->value);
    }
    else 
    {
        printf(" %s", t->operator);
    }
    printPrefix(t->left);
    printPrefix(t->right);
}


void printPostfix(struct expr_tree_node * t)
{
    if(t==NULL) return;
    printPostfix(t->left);
    printPostfix(t->right);
    if(t->operator==NULL)
    {
        printf(" %d" ,t->value);
    }
    else 
    {
        printf(" %s", t->operator);
    }
}