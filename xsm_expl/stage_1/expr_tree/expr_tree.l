%{
#include "y.tab.h"
#include "expr_tree.h"

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