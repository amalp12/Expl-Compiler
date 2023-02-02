%{  


#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

#ifndef CODEGEN_H
#define CODEGEN_H
#include "codegen.h"
#include "codegen.c"
#endif

#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#include "expr_tree.c"
#endif

#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "symbolTable.h"
#include "symbolTable.c"
#endif

#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include "declarations.h"
#include "declarations.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
int identifiers[26];

int yylex(void);

%}

%union{
  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
}


%token INT MUL DIV PLUS MINUS  ID READ WRITE SEMICOLON START END EQUALS STRING
%token GT LT GE LE NE EQ LTE GTE
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE REPEAT UNTIL
%token DECL ENDDECL  STR
%token BREAK BREAKPOINT CONTINUE 
%type <node> expr program
%left PLUS MINUS
%left MUL DIV
%left GTE LTE NE
%left GT LT EQ


%%

// start : 
/*
Each node can be opertator node or a leaf Node
*/


program : 
    START Slist END SEMICOLON 
    {
      FILE * target_file = fopen("untranslated_assembly.xsm","w");
      
      // printInfix($<node>2);

      printf("Generating Assembly Code... \n");
      explInit(target_file);
      codeGen($<node>2, target_file);
      // evaluate($<node>2, identifiers);
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);

      exit(1);

    }
  | START END SEMICOLON
    {
        exit(1);
    }
;


Slist : 
    Slist Stmt {$<node>$ = makeConnectorNode($<node>1,$<node>2);}
  | Stmt {$<node>$ = $<node>1;}
;
Stmt : 
    InputStmt 
  | OutputStmt 
  | AsgStmt 
  | Ifstmt 
  | Whilestmt 
  | brkStmt 
  | contStmt 
  | brkpointStmt 
  | RepeatStmt 
  | DoWhileStmt 
  | DeclStmt
;
DeclStmt : 
    DECL DeclList ENDDECL SEMICOLON 
  | DECL ENDDECL SEMICOLON;
DeclList : 
    DeclList Decl 
  | Decl
;
Decl : 
    Type VarList SEMICOLON {popAllAndCreateEntry($<integer>1, 1);}
;
Type : 
    INT
  | STR
;
VarList : 
    VarList ',' ID {pushDeclaration($<node>3->varname);} 
  | ID {pushDeclaration($<node>1->varname);}  
  | VarList ',' ID '[' INT ']'
  | ID '['INT ']'
;
brkStmt : 
    BREAK SEMICOLON {$<node>$ = makeBreakNode();}
;
contStmt : 
    CONTINUE SEMICOLON {$<node>$ = makeContinueNode();}
;
brkpointStmt :
    BREAKPOINT SEMICOLON {$<node>$ = makeBreakpointNode();}
;
Ifstmt : 
    IF '('expr')' THEN Slist ELSE Slist ENDIF SEMICOLON {$<node>$ = makeIfElseNode($<node>3,$<node>6,$<node>8);}
  | IF '('expr')' THEN Slist ENDIF SEMICOLON {$<node>$ = makeIfElseNode($<node>3,$<node>6,NULL);}
;
Whilestmt : 
    WHILE '('expr')' DO Slist ENDWHILE SEMICOLON{$<node>$ = makeWhileNode($<node>3,$<node>6);}
;
RepeatStmt : 
    REPEAT Slist UNTIL '('expr')' SEMICOLON {$<node>$ = makeDoWhileNode($<node>2,$<node>5);}
;
DoWhileStmt : 
    DO Slist WHILE '('expr')' SEMICOLON {$<node>$ = makeDoWhileNode($<node>2,$<node>5);}
;
InputStmt : 
    READ '(' ID ')' SEMICOLON {$<node>$ = makeReadNode($<node>3);}
;
OutputStmt : 
    WRITE '(' expr ')' SEMICOLON {$<node>$ = makeWriteNode($<node>3);}
; 
AsgStmt :  
    ID EQUALS expr SEMICOLON {$<node>$ = makeOperatorNode(_NODE_TYPE_EQUALS,$<node>1,$<node>3) ;}
;
expr : 
    expr PLUS expr  {$<node>$ = makeOperatorNode(_NODE_TYPE_PLUS,$<node>1,$<node>3);}
  | expr MINUS expr  { $<node>$ = makeOperatorNode(_NODE_TYPE_MINUS,$<node>1,$<node>3);}
  | expr MUL expr {$<node>$ = makeOperatorNode(_NODE_TYPE_MUL,$<node>1,$<node>3);}
  | expr DIV expr {$<node>$ = makeOperatorNode(_NODE_TYPE_DIV,$<node>1,$<node>3);}
  |'(' expr ')' {$<node>$ = $<node>2;}
  | INT {$<node>$ = $<node>1;}
  | ID {$<node>$ = $<node>1;}
  | expr LT expr {$<node>$ = makeRelopNode(_NODE_TYPE_LT,$<node>1,$<node>3);}
  | expr GT expr {$<node>$ = makeRelopNode(_NODE_TYPE_GT,$<node>1,$<node>3);}
  | expr LTE expr  {$<node>$ = makeRelopNode(_NODE_TYPE_LE,$<node>1,$<node>3);}
  | expr GTE expr {$<node>$ = makeRelopNode(_NODE_TYPE_GE,$<node>1,$<node>3);}
  | expr NE expr {$<node>$ = makeRelopNode(_NODE_TYPE_NE,$<node>1,$<node>3);}
  | expr EQ expr {$<node>$ = makeRelopNode(_NODE_TYPE_EQ,$<node>1,$<node>3);}
;

%%

void yyerror(char const *s)
{
    printf("yyerror %s",s);
}

int main()
{

  FILE * input_file=fopen("input.txt","r");
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}