

#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif



#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#endif

#ifndef TYPEDEF_H
#define TYPEDEF_H
#include "typedef.h"
#endif



int LAST_USED_REGISTER = -1;
int LAST_USED_LABEL = -1;


int getFreeReg(); // Allocate a free register


void freeLastReg(); // Free the last used register

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) ;

int getVarAddress(char c);

void printInfix(struct expr_tree_node * t);

void printNode(struct expr_tree_node * t);

void explInit(FILE * target_file);

void explEnd(FILE * target_file);

int evaluate( struct expr_tree_node *t, int * identifier) ;
int getNewLabel(); // Get a new label number