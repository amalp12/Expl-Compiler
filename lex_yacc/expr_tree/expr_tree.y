%{
#include <stdio.h>
#include <expr_tree.h>

%}

%token NUMBER PLUS MINUS MUL DIV

%%

expr : expr "+" expr {
                        $$ = $1+$3;
                    }
                    
     | expr "-" expr {
                        $$ = $1-$3;
                    }
                    ;                    
