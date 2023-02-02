#ifndef TYPEDEF_H
#define TYPE_DEF_H
#include "typedef.h"
#endif

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbolTable.h"
#include "symbolTable.c"
#endif

struct declaration_node {
    char *varname;
    struct declaration_node *next;
};

struct declaration_node * _DECLARATION_STACK_HEAD = NULL;

void pushDeclaration( char *varname);

struct declaration_node * popDeclaration();

int isDeclarationStackEmpty();

void popAllAndCreateEntry(int type, int array_size);
