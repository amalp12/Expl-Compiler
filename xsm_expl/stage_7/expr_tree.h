#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif

#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#endif


#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif

#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

#ifndef _TYPE_TABLE_C
#define _TYPE_TABLE_C
#include "typeTable.c"
#endif


struct expr_tree_node
{

    int val;  // value of a number for NUM nodes.
    struct TypeTable * type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct GlobalSymbolTable * GSTEntry;     // pointer to GST entry for global variables and functions
    struct expr_tree_node * left, * right;     // left and right branches
    struct ClassTable * classType; // for field list

};

struct expr_tree_node * makeNode(int val, int nodetype, struct TypeTable * type, struct ClassTable * classType, char* varname, struct GlobalSymbolTable * GSTEntry, struct expr_tree_node *l, struct expr_tree_node *r);

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

struct expr_tree_node * makeFunctionCallNode(char * name, struct expr_tree_node *parameters);

struct expr_tree_node * makeReturnNode (struct expr_tree_node *expr);

struct expr_tree_node * makeParameterNode(char * typeName, char * name);

void defineFunction(struct expr_tree_node* node, FILE * target_file);

void declareMain();

struct expr_tree_node * makeLocalIdNode(char * varname);

struct expr_tree_node * makeFunctionDefinitionNode(char * typeName, char * name, struct expr_tree_node *parameters, struct expr_tree_node *body);

void insertIntoTypeFieldTree(struct expr_tree_node * root, struct expr_tree_node * node);

void insertIntoClassFieldTree(struct expr_tree_node * root, struct expr_tree_node * node);

struct expr_tree_node * makeHeapInitNode();

struct expr_tree_node * makeHeapAllocateNode();

struct expr_tree_node * makeHeapFreeNode(struct expr_tree_node *l);

struct expr_tree_node * makeNewNode(char * className );

void fieldCall(struct expr_tree_node * leftFieldNode, struct expr_tree_node * rightFieldNode);

struct expr_tree_node * makeMethodCallNode(char * name, struct expr_tree_node * afterDotNode, struct expr_tree_node *parameters);