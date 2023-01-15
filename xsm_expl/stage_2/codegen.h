

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

int getFreeReg(); // Allocate a free register

void freeLastReg(); // Free the last used register

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) ;
