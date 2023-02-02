#ifndef TYPEDEF_H
#define TYPEDEF_H
#include "typedef.h"
#endif


#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

struct expr_tree_node{

    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct expr_tree_node * left, * right;     // left and right branches

};

struct expr_tree_node * makeNode(int val, int nodetype, int type,  char* c, struct expr_tree_node *l, struct expr_tree_node *r);
struct expr_tree_node * makeConnectorNode( struct expr_tree_node *l, struct expr_tree_node *r);

struct expr_tree_node * makeReadNode(struct expr_tree_node *id);

struct expr_tree_node * makeWriteNode(struct expr_tree_node *expr);

struct expr_tree_node * makeIdNode(char * varname);

struct expr_tree_node * makeNumberNode(int num );

struct expr_tree_node * makeStringNode(char * string, int offset);

struct expr_tree_node * makeOperatorNode(int nodetype,struct expr_tree_node *l,struct expr_tree_node *r);

struct expr_tree_node * makeRelopNode(int nodetype, struct expr_tree_node *l,struct expr_tree_node *r);

struct expr_tree_node * makeIfElseNode( struct expr_tree_node *cond, struct expr_tree_node *thenCode, struct expr_tree_node * elseCode);

struct expr_tree_node * makeWhileNode( struct expr_tree_node *cond, struct expr_tree_node *body);

struct expr_tree_node * makeBreakNode();

struct expr_tree_node * makeContinueNode();

struct expr_tree_node * makeBreakpointNode();

struct expr_tree_node * makeDoWhileNode( struct expr_tree_node *body, struct expr_tree_node *cond);