%{
    #include <stdio.h>
   #include "y.tab.h"
%}

%%

[0-9]+ {
          yylval.integer = atoi(yytext);
          return DIGIT;
        }
[a-zA-Z_][a-zA-Z0-9_]* {
        printf("\nLength %d \n", yyleng);

          yylval.s = strdup(yytext);
          return ID;
        }
[+-/*] {

  return OP;
}
[()]   return *yytext;
[\n]  {  
    return NEWLINE;
    }

%%

int yywrap()
{
 return 1;
}