%{
#include <stdio.h>
#include <stdlib.h>

int yylex();
void yyerror(char  *s);

%}

%union
{
    char * s;
    int integer;
    char c;
}

%token   DIGIT NEWLINE ID

%left '+' '-'
%left '*' '/'
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
    |
    expr '*' expr {
                    printf("* ");
    }
    | 
    expr '/' expr {
                    printf("/ ");
    }
    | 
     '(' expr ')' 
    | DIGIT {
        printf("%d ", $<integer>1);
    }

    ;
    | ID {
        printf("%s ", $<s>1);
    }
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


