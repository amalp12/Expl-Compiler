struct expr_tree_node{

    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct expr_tree_node * left, * right;     // left and right branches

};

struct  expr_tree_node *  createTree(int val, int type, char* c, struct tnode *l, struct tnode *r);


struct  expr_tree_node * makeLeafNode(int value);

struct expr_tree_node * makeOperatorNode(char op,struct expr_tree_node * l, struct expr_tree_node * r);

int evaluate(struct expr_tree_node * t);

void printPrefix(struct expr_tree_node * t);

void printPostfix(struct expr_tree_node * t);
