%{
#include "y.tab.h"
%}

%%

"if" { return IF; }
"endif" {return ENDIF;}
"<" | ">" | "<=" | ">=" | "==" | "!=" | "&&" | "||" {return RELOP;}
[0-9]+ {return NUMBER;}
\n {;}
[()] {return *yytext;}
. {return EMPTY;}

%%

int yywrap()
{
	return 1;
}

