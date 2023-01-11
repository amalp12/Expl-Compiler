%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex();
void yyerror(char  *s);

%}

%union
{
    char * s;
}

%token   NEWLINE ID OP
%left OP 
%left ID
%left NEWLINE
%%

start : expr NEWLINE    { 
 
    
    printf("%s Complete \n", $<s>$);
    exit(1);
    }
    ;
expr : expr OP expr {
        strcpy($<s>$ , strcat($<s>2,strcat($<s>1,$<s>3))); 
    }
    | ID {
        strcpy($<s>$,$<s>1);
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


