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

%token   DIGIT NEWLINE ID OP

%left '+' '-'
%left '*' '/'
%%

start : expr NEWLINE    { 
 
    printf("Complete \n");
    exit(1);
    }
    ;
expr : expr OP expr {
        strcpy($<s>$ , strcat($<s>2,strcat($<s>1,#<s>3))); 
    }
    | ID {
        $<s>$=$<s>1;
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


