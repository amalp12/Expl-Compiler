struct expr_tree_node{

    int value;
    char * operator;
    struct expr_tree_node * left, * right;
};

struct  expr_tree_node * makeLeafNode(int value);

struct expr_tree_node * makeOperatorNode(char op,struct expr_tree_node * l, struct expr_tree_node * r);

int evaluate(struct expr_tree_node * t);