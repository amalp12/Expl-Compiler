%{  
#include "expr_tree.c"
void yyerror(char const *s);
extern FILE* yyin;

int yylex(void);

%}

%union{
    struct expr_tree_node * node;
    char c;
}


%token NUMBER MUL DIV PLUS MINUS NEWLINE
%type <node> expr  start 
%left PLUS MINUS
%left MUL DIV
%%

/*
Each node can be opertator node or a leaf Node
*/
start : expr NEWLINE {
    printf("Prefix :\n");
    printPrefix($<node>1);
    printf("\n");
    printf("Postfix :\n");
    printPostfix($<node>1);
    printf("\n");
    $<c>$ = $<c>2;
    printf("Answer : %d\n",evaluate($<node>1));

    exit(1);
}
;

expr :  expr PLUS expr {
    $<node>$ = makeOperatorNode('+',$<node>1,$<node>3);
}
|
  expr MINUS expr {
    $<node>$ = makeOperatorNode('-',$<node>1,$<node>3);
}
|
  expr MUL expr {
    $<node>$ = makeOperatorNode('*',$<node>1,$<node>3);
}
|
  expr DIV expr {
    $<node>$ = makeOperatorNode('/',$<node>1,$<node>3);
}
|
'(' expr ')' {
    $<node>$ = $<node>2;
}
|
NUMBER {
    $<node>$ = $<node>1;
}

;


%%

void yyerror(char const *s)
{
    printf("yyerror %s",s);
}
int main()
{

  yyin=fopen("input.txt","r");
  yyparse();   
}