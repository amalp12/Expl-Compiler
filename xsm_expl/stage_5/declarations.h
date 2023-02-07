#ifndef TYPEDEF_H
#define TYPE_DEF_H
#include "typedef.h"
#endif

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbolTable.h"
#include "symbolTable.c"
#endif

struct declaration_node 
{
    struct expr_tree_node *node;
    struct declaration_node *next;
};

struct declaration_node * _GLOBAL_DECLARATION_STACK_HEAD = NULL;
struct declaration_node * _LOCAL_DECLARATION_STACK_HEAD = NULL;

// Global Declaration Helper Functions
void pushGlobalDeclaration( struct expr_tree_node * node); 

struct declaration_node * popGlobalDeclaration();

int isGlobalDeclarationStackEmpty();

void popAllGlobalDeclarationsAndCreateEntry(int type);


// Local Declaration Helper Functions
void pushLocalDeclaration( struct expr_tree_node * node);

struct declaration_node * popLocalDeclaration();

int isLocalDeclarationStackEmpty();

void popAllLocalDeclarationsAndCreateEntry(int type);
