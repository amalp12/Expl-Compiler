#include <stdio.h>
#include <stdlib.h>
#include "expr_tree.h"


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


