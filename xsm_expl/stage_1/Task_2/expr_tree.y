%{  
#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

#ifndef CODEGEN_H
#define CODEGEN_H
#include "codegen.h"
#endif

#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
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

    
   
    
    printf("Generating Assembly Code... \n");
    codeGen($<node>1, fopen("assemblycode.xsm","w"));
    exit(1);
}
;

expr :  expr PLUS expr {
    $<node>$ = makeOperatorNode('+',$<node>1,$<node>3);
}
|
  expr MINUS expr {
    $<node>$ = makeOperatorNode('-',$<node>1,$<node>3);
}
|
  expr MUL expr {
    $<node>$ = makeOperatorNode('*',$<node>1,$<node>3);
}
|
  expr DIV expr {
    $<node>$ = makeOperatorNode('/',$<node>1,$<node>3);
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

  yyin=fopen("input.txt","r");
  yyparse();   
}