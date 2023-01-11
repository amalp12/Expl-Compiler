%{
    #include <stdio.h>
   #include "y.tab.h"
%}

%%


[a-zA-Z0-9_][a-zA-Z0-9_]* {

          yylval.s = strdup(yytext);
          return ID;
        }
[+-/*] {
  yylval.s = strdup(yytext);

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