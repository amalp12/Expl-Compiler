%{
#include "y.tab.h"
#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#include "expr_tree.c"

#endif

%}


%%

[0-9]+ {
    yylval.node = makeLeafNode(atoi((yytext)));
    return NUMBER;
    }
    
"+" {
    return PLUS;
    }
    
"-" {
    return MINUS;
    }
    
"*" {
    return MUL;
    }
    
"/" {
    return DIV;
    }
    
[\t] {}
    
[()] {
    return *yytext;
    }

[\n] {
    return NEWLINE;
    }
    

%%

int yywrap(void){
    return 1;
}