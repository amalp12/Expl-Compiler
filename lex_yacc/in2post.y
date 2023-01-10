%{
#include <stdio.h>
#include <stdlib.h>

int yylex();
void yyerror(char  *s);

%}

%token DIGIT NEWLINE
%%

start : expr NEWLINE    { 
    printf("Complete \n");
    exit(1);
    }
    ;

expr : expr '+' expr {
                    printf("+ ");
    }
    |
    expr '-' expr {
                    printf("- ");
    }
    | '(' expr ')' 
    | DIGIT {
        printf("%d ", $1);
    }

    ;
%%

void yyerror(char *s) {
    printf("Error: %s)\n", s);
    return;
}

int main()
{
    yyparse();
    return 1;
}


