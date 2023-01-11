%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(char const *s);
extern FILE* yyin;
int count=0;
%}

%token IF ENDIF ID NUMBER RELOP EMPTY

%%

statement: if_statement {printf("Number of nested IF statements are : %d \n",count);
                            exit(0);}
            ;
if_statement: IF '(' X RELOP X ')' EMPTY if_statement ENDIF {count++;}
            |IF '(' X RELOP X ')' EMPTY ENDIF {count++;};

X           : ID | NUMBER
            ;
%%


void yyerror(char const *s)
{
    printf("yyerror  %s\n",s);
    
    return ;
}



int main()
{
  yyin=fopen("input.txt","r");
  yyparse();
  return 1;
}
