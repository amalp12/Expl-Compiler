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

#ifndef _EXPR_TREE_H
#define _EXPR_TREE_H
#include "expr_tree.h"
#endif

#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif


#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif


struct loopStack{
    int startLabel;
    int endLabel;
    struct loopStack * prev;
};


int LAST_USED_REGISTER = -1;
int LAST_USED_LABEL = -1;
struct  loopStack * LOOP_STACK= NULL;



int getFreeReg(); // Allocate a free register


void freeLastReg(); // Free the last used register

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) ;

// int getVarAddress(char * varname);

void printInfix(struct expr_tree_node * t);

void printNode(struct expr_tree_node * t);

void explInit(FILE * target_file);

void explEnd(FILE * target_file);

int evaluate( struct expr_tree_node *t, int * identifier) ;

int getNewLabel(); // Get a new label number