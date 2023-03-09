#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif

#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif

#ifndef _SYMBOL_TABLE_C
#define _SYMBOL_TABLE_C
#include "symbolTable.c"
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include "functions.h"
#endif

#ifndef _FUNCTIONS_C
#define _FUNCTIONS_C
#include "functions.c"
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

void popAllGlobalDeclarationsAndCreateEntry(char * type);


// Local Declaration Helper Functions
void pushLocalDeclaration( struct expr_tree_node * node);

struct declaration_node * popLocalDeclaration();

int isLocalDeclarationStackEmpty();

void popAllLocalDeclarationsAndCreateEntry(char * type);
