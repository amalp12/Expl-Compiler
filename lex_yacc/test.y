
%{
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
int count=0;
int yylex();
int yyerror(char const *);
int yywrap();
int yyparse();
int yyerror();

%}


%token IF RELOP S NUMBER ID
%%
stmt : if_stmt { printf(“No of nested if statements=%d\n”,count); exit(0);}
 ;
if_stmt : IF '(' cond ')' if_stmt {count++;}
 | S;
 ;
cond : x RELOP x
 ;
x : ID
 | NUMBER
 ;
%%
int yyerror(char *msg)
{
 printf(“Invalid Expression\n”);
 exit(0);
}
main ()
{
 printf(“Enter the statement”);
 yyparse();
} 