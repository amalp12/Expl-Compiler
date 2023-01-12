

#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif


#ifndef COMPILER_H
#define COMPILER_H
#include "compiler.h"
#endif

#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#endif


#define reg_index int

reg_index codeGen( struct expr_tree_node *t, FILE * target_file) ;
