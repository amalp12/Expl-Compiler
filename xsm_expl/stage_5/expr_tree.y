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


%token INT MUL DIV PLUS MINUS  ID READ WRITE SEMICOLON START END EQUALS STRING MOD
%token GT LT GE LE NE EQ 
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE REPEAT UNTIL
%token DECL ENDDECL INT_DECL STRING_DECL 
%token BREAK BREAKPOINT CONTINUE 
%token RETURN 
%type <node> expr program
%left GT LT 
%left NE EQ
%left GE LE
%left PLUS MINUS
%left MUL DIV MOD


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

Program : 
    GDeclBlock FDefBlock MainBlock
  | GDeclBlock MainBlock
  | MainBlock
;

MainBlock :
    START Slist ReturnStmt END SEMICOLON 
  | START ReturnStmt END SEMICOLON
;

GDeclBlock :
    DECL GDeclList ENDDECL 
  | DECL ENDDECL
;

GDeclList : 
    GDeclList GDecl 
  | GDecl
;

GDecl : 
    Type GidList 
;

GidList : 
    GidList ',' Gid 
  | Gid
;

Gid :
     ID 
    {
      $<node>$ = $<node>1;
    }
  | ID '[' INT ']' 
    {
        $<node>1->left = $<node>3;
        $<node>$ = $<node>1;
    }
  | ID '[' INT ']' '[' INT ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']' '[' INT ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' INT ']' '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']' '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>$ = $<node>1;
    }
  
  | ID '(' ParamList ')'
    {
      
    }
;



   
// --------------------------------------------------------------------------------------

FDefBlock :
    FDefBlock FDef 
    | FDef
;

FDef :
    Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
;

Body :
    START Slist ReturnStmt END SEMICOLON 
  | START ReturnStmt END SEMICOLON
;

ParamList :
    ParamList ',' Param 
  | Param
  | 
;

Param :
  Type ID
;
Type : 
    INT_DECL
  | STRING_DECL
;
// -----------------------------------------------------------------------------------------
LDeclBlock :
    DECL LDecList ENDDECL 
  | DECL ENDDECL
;

LDecList : 
    LDecList LDecl 
  | LDecl
;
LDecl :
    Type IdList 
;

IdList : 
    IdList ',' ID 
  | ID
;

// Since a function call is treated as an expression (whose value is the return value of the function), the following rules must be added:


ArgList : 
    ArgList ',' expr
  | expr
;
// -----------------------------------------------------------------------------------------

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
  | ReturnStmt
;
ReturnStmt : 
    RETURN expr SEMICOLON 
    {
      $<node>$ = makeReturnNode($<node>2);
    }
  | RETURN SEMICOLON 
    {
      $<node>$ = makeReturnNode(NULL);
    }
;

DeclStmt : 
    DECL DeclList ENDDECL  
  | DECL ENDDECL ;
DeclList : 
    DeclList Decl 
  | Decl
;
Decl : 
    Type VarList SEMICOLON {popAllGlobalDeclarationsAndCreateEntry($<integer>1);}
;
Type : 
    INT_DECL
  | STRING_DECL
;
VarList : 
    VarList ',' identifierDecl {pushGlobalDeclaration($<node>3);} 
  | identifierDecl {pushGlobalDeclaration($<node>1);}  
;

identifierDecl : 
    ID 
    {
      $<node>$ = $<node>1;
    }
  | ID '[' INT ']' 
    {
        $<node>1->left = $<node>3;
        $<node>$ = $<node>1;
    }
  | ID '[' INT ']' '[' INT ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']' '[' INT ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' INT ']' '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']' '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>1->right = $<node>6; 
      $<node>$ = $<node>1;
    }
  | ID '[' ID ']'
    { 

      $<node>1->left = $<node>3; 
      $<node>$ = $<node>1;
    }
  

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
    READ '(' identifierDecl ')' SEMICOLON {$<node>$ = makeReadNode($<node>3);}
;
OutputStmt : 
    WRITE '(' expr ')' SEMICOLON {$<node>$ = makeWriteNode($<node>3);}
; 
AsgStmt :  
    identifierDecl EQUALS expr SEMICOLON {$<node>$ = makeOperatorNode(_NODE_TYPE_EQUALS,$<node>1,$<node>3) ;}
;
expr : 
    expr PLUS expr  {$<node>$ = makeOperatorNode(_NODE_TYPE_PLUS,$<node>1,$<node>3);}
  | expr MINUS expr  { $<node>$ = makeOperatorNode(_NODE_TYPE_MINUS,$<node>1,$<node>3);}
  | expr MUL expr {$<node>$ = makeOperatorNode(_NODE_TYPE_MUL,$<node>1,$<node>3);}
  | expr DIV expr {$<node>$ = makeOperatorNode(_NODE_TYPE_DIV,$<node>1,$<node>3);}
  | expr MOD expr {$<node>$ = makeOperatorNode(_NODE_TYPE_MOD,$<node>1,$<node>3);}
  |'(' expr ')' {$<node>$ = $<node>2;}
  | INT {$<node>$ = $<node>1;}
  | identifierDecl {$<node>$ = $<node>1;}
  | STRING {$<node>$ = $<node>1;}
  | expr LT expr {$<node>$ = makeRelopNode(_NODE_TYPE_LT,$<node>1,$<node>3);}
  | expr GT expr {$<node>$ = makeRelopNode(_NODE_TYPE_GT,$<node>1,$<node>3);}
  | expr LE expr  {$<node>$ = makeRelopNode(_NODE_TYPE_LE,$<node>1,$<node>3);}
  | expr GE expr {$<node>$ = makeRelopNode(_NODE_TYPE_GE,$<node>1,$<node>3);}
  | expr NE expr {$<node>$ = makeRelopNode(_NODE_TYPE_NE,$<node>1,$<node>3);}
  | expr EQ expr {$<node>$ = makeRelopNode(_NODE_TYPE_EQ,$<node>1,$<node>3);}
  | ID '(' ')' {$<node>$ = makeFuncCallNode($<node>1,NULL);}
  | ID '(' ArgList ')' {$<node>$ = makeFuncCallNode($<node>1,$<node>3);}
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