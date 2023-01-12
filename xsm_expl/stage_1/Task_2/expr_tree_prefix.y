%{  
#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#endif

#ifndef CODEGEN_H
#define CODEGEN_H
#include "codegen.h"
#include "codegen.c"

#endif

#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#include "expr_tree.c"

#endif


void yyerror(char const *s);
extern FILE* yyin;

int yylex(void);

%}

%union{
    struct expr_tree_node * node;
    char c;
}


%token NUMBER MUL DIV PLUS MINUS NEWLINE
%type <node> expr  start 
%left PLUS MINUS
%left MUL DIV
%%

/*
Each node can be opertator node or a leaf Node
*/
start : expr NEWLINE {
    FILE * target_file = fopen("assemblycodefromprefix.xsm","w");
  
    printf("Generating Assembly Code From Prefix... \n");
    fprintf(target_file, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
    codeGen($<node>1, target_file);
    fprintf(target_file, "INT 10\n");
    printf("Complete \n");


    exit(1);
}
;

expr :  PLUS expr expr {
    $<node>$ = makeOperatorNode('+',$<node>2,$<node>3);
}
|
  MINUS expr expr {
    $<node>$ = makeOperatorNode('-',$<node>2,$<node>3);
}
|
  MUL expr  expr {
    $<node>$ = makeOperatorNode('*',$<node>2,$<node>3);
}
|
  DIV expr expr {
    $<node>$ = makeOperatorNode('/',$<node>2,$<node>3);
}
|
'(' expr ')' {
    $<node>$ = $<node>2;
}
|
NUMBER {
    $<node>$ = $<node>1;
}

;


%%

void yyerror(char const *s)
{
    printf("yyerror %s",s);
}
int main()
{

  yyin=fopen("input_prefix.txt","r");
  yyparse();   
}