#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

struct expr_tree_node{

    int value;
    char * operator;
    struct expr_tree_node * left, * right;
};

struct  expr_tree_node * makeLeafNode(int value);

struct expr_tree_node * makeOperatorNode(char op,struct expr_tree_node * l, struct expr_tree_node * r);

int evaluate(struct expr_tree_node * t);

void printPrefix(struct expr_tree_node * t);

void printPostfix(struct expr_tree_node * t);
