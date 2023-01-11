%{
#include "y.tab.h"
%}

%%

"if" { return IF; }
"endif" {return ENDIF;}
"<"|">"|"!="|"=="|"<="|">=" {return RELOP;}
[sS][0-9]* {return EMPTY;}
[a-zA-Z][a-zA-Z0-9_]*  {return ID;}
[0-9]+ {return NUMBER;}
\n {;}
[()] {return *yytext;}
%%

int yywrap()
{
	return 1;
}

