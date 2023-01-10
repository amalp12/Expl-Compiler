%{
#include <stdio.h>
#include <stdlib.h>
int yylex();
void yyerror(char const *s);
int count=0;
%}

%token IF ENDIF ID NUMBER RELOP EMPTY

%%
statement   : if_statement {printf("Number of IF statements are : %d \n",count);
                            exit(0);}
            ;
if_statement : IF'('X RELOP X')''{'if_statement'}' {count++;}
            |
            EMPTY;
            ;
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

  yyparse();
  return 1;
}
