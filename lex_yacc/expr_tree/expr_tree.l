%{
#include <stdio.h>
#include <stdlib.h>
#include "expr_tree.h"
#include "y.tab.c"

int number = 0;
%}


%%

[0-9]+ {
    number = atoi(*yytext);
    yyval.no = makeLeafNode(number);
    return NUMBER;
    }
    ;
"+" {
    return PLUS;
    }
    ;
"-" {
    return MINUS;
    }
    ;
"*" {
    return MUL;
    }
    ;
"/" {
    return DIV;
    }
    ;
[\t] {}
    ;
[()] {
    return *yytext;
    };
[\n] {
    return END;
    }
    ;

%%

int yywrap(void){
    return 1;
}