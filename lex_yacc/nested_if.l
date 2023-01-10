%{
   #include "y.tab.h"
%}

%option noyywrap

%%

"if" {return IF;}
"<"|">"|"!="|"=="|"<="|">=" {return RELOP;}
[sS][0-9]* {return S;}
[0-9]+ {return NUMBER;}
[a-zA-Z][a-zA-Z0-9_]* {return ID;}
\n {;}
. {return yytext[0];}
%%
