%{

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int yylex();
int yyerror(char const *);

%}

/* YACC Declarations Section */
%token DIGIT
%left '+'
%left '*'

%%

/*Rules Section*/

start : expr '\n' {exit(1);}
    ;