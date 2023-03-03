%{  

#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _STRING_H
#define _STRING_H
#include <string.h>
#endif

#ifndef _CODEGEN_H
#define _CODEGEN_H
#include "codegen.h"
#endif

#ifndef _CODEGEN_C
#define _CODEGEN_C
#include "codegen.c"
#endif

#ifndef _EXPR_TREE_H
#define _EXPR_TREE_H
#include "expr_tree.h"
#endif

#ifndef _EXPR_TREE_C
#define _EXPR_TREE_C
#include "expr_tree.c"
#endif

#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H
#include "symbolTable.h"
#endif

#ifndef _SYMBOL_TABLE_C
#define _SYMBOL_TABLE_C
#include "symbolTable.c"
#endif

#ifndef _DECLARATIONS_H
#define _DECLARATIONS_H
#include "declarations.h"
#endif

#ifndef _DECLARATIONS_C
#define _DECLARATIONS_C
#include "declarations.c"
#endif




void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
FILE * target_file ;
int _INIT_STATE ;

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
%token RETURN MAIN
%token AND OR NOT
%type <node> expr Program
%left AND OR NOT
%left GT LT 
%left NE EQ
%left GE LE
%left PLUS MINUS
%left MUL DIV MOD
%left STRING_DECL INT_DECL

%%

// start : 
/*
Each node can be opertator node or a leaf Node
*/


// program : 
//     START Slist END SEMICOLON 
//     {
//       FILE * target_file = fopen("untranslated_assembly.xsm","w");
      
//       // printInfix($<node>2);

//       printf("Generating Assembly Code... \n");
//       explInit(target_file);
//       codeGen($<node>2, target_file);
//       // evaluate($<node>2, identifiers);
//       explEnd(target_file);
//       printf("Complete \n");

//       if(target_file) fclose(target_file);

//       exit(1);

//     }
//   | START END SEMICOLON
//     {
//         exit(1);
//     }
// ;

Program : 
    GDeclBlock FDefBlock MainBlock
    {
    
      exit(1);
    }
  | GDeclBlock MainBlock
    {

      exit(1);
    }
  | MainBlock
    {
      exit(1);
    }

;

MainBlock :
    Type MAIN '(' ')' '{' LDeclBlock Body '}'
    {
  
      // printGST();
      // declare main function
      printf("Generating Assembly Code... \n");
      declareMain();
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode($<integer>1, "main", NULL, $<node>7);
      defineFunction(funcNode, target_file);
      $<node>$ = funcNode;

    
      
      // printInfix($<node>2);

      // codeGen($<node>2, target_file);
      // evaluate($<node>2, identifiers);
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);


    
    }

;

GDeclBlock :
    DECL GDeclList ENDDECL 
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
  | DECL ENDDECL
    {
      // if init state is false initialze
      if(_INIT_STATE == _FALSE){
        explInit(target_file);
        _INIT_STATE = _TRUE;
      }
    }
;

GDeclList : 
    GDeclList GDecl 
  | GDecl
;

GDecl : 
    Type GidList SEMICOLON
    {
      popAllGlobalDeclarationsAndCreateEntry($<integer>1);
    }
;

GidList : 
    GidList ',' Gid 
    {
      pushGlobalDeclaration($<node>3);
    }
  | Gid
    {
      pushGlobalDeclaration($<node>1);
    }
;

Gid :
    identifierDecl {$<node>$ = $<node>1;}
  | ID '(' GParamList ')'
    {
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = $<node>3;
      $<node>$ = idNode; 
    }

;
GParamList :
    GParamList ',' Param 
    {

      $<node>1->left = $<node>3;
      $<node>$ = $<node>1;
    }
  | Param
    {
      $<node>$ = $<node>1;
    }
  | 
    {
      $<node>$ = NULL;
    }
;
identifierDecl:
     ID 
    {
      $<node>$ = makeDeclareIdNode($<string>1, _NONE);
    }
  | ID '[' INT ']' 
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
        idNode->left = $<node>3;
        $<node>$ = idNode;
    }
  | ID '[' INT ']' '[' INT ']'
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']' '[' INT ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' INT ']' '[' ID ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']' '[' ID ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']'
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, _NONE);
      idNode->left = $<node>3; 
      $<node>$ = idNode;
    }
  
;


identifierUse:
     ID 
    {
      $<node>$ = makeIdNode($<string>1);
    }
  | ID '[' expr ']' 
    {
        struct expr_tree_node * idNode = makeIdNode($<string>1);
        idNode->left = $<node>3;
        $<node>$ = idNode;
    }
  | ID '[' expr ']' '[' expr ']'
    { 
      struct expr_tree_node * idNode = makeIdNode($<string>1);
      idNode->left = $<node>3;
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  
;


   
// --------------------------------------------------------------------------------------

FDefBlock :
      FDefBlock FDef 
      {

      }
    | FDef
      {
      }
;

FDef :
    Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode($<integer>1, $<string>2, $<node>4, $<node>8);
      defineFunction(funcNode, target_file);
      $<node>$ = funcNode;
    }

  
;

Body :
    START Slist ReturnStmt END  
    {
      $<node>$ = makeConnectorNode($<node>3,$<node>2);

    }
  | START ReturnStmt END 
    {
      $<node>$ = makeConnectorNode($<node>3,NULL);
      $<node>$ = NULL;
    }
;

ParamList :
    ParamList ',' Param 
    {
      pushLocalDeclaration($<node>3);

      $<node>1->left = $<node>3;
      $<node>$ = $<node>1;
    }
  | Param
    {
      pushLocalDeclaration($<node>1);
      $<node>$ = $<node>1;
    }
  | 
    {
      $<node>$ = NULL;
    }
;

Param :
  Type ID
  {
    $<node>$ = makeParameterNode($<integer>1, $<string>2);
  }
;

// -----------------------------------------------------------------------------------------
LDeclBlock :
    DECL LDecList ENDDECL 
  | DECL ENDDECL
  | 
  {      
    popAllLocalDeclarationsAndCreateEntry(_NONE);
  }

;

LDecList : 
    LDecList LDecl 
  | LDecl
;
LDecl :
    Type LIdList SEMICOLON
    {
      popAllLocalDeclarationsAndCreateEntry($<integer>1);
    }
;

LIdList : 
    LIdList ',' ID 
    {
      pushLocalDeclaration( makeLocalIdNode($<string>3));
      
    }
  | ID
    {
    
      pushLocalDeclaration( makeLocalIdNode($<string>1));
    }
;

// Since a function call is treated as an expression (whose value is the return value of the function), the following rules must be added:


ArgList : 
    ArgList ',' expr
    {
      $<node>$ = makeConnectorNode($<node>1,$<node>3);

    }
  | expr
    {
      $<node>$ =makeConnectorNode(NULL,$<node>1);
    }
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
    Type VarList SEMICOLON 
    {
      
      popAllGlobalDeclarationsAndCreateEntry($<integer>1);
     
    }
;
Type : 
    INT_DECL
  | STRING_DECL
;
VarList : 
    VarList ',' identifierDecl {pushGlobalDeclaration($<node>3);} 
  | identifierDecl {pushGlobalDeclaration($<node>1);}  
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
    READ '(' identifierUse ')' SEMICOLON {$<node>$ = makeReadNode($<node>3);}
;
OutputStmt : 
    WRITE '(' expr ')' SEMICOLON {$<node>$ = makeWriteNode($<node>3);}
; 
AsgStmt :  
    identifierUse EQUALS expr SEMICOLON {$<node>$ = makeOperatorNode(_NODE_TYPE_EQUALS,$<node>1,$<node>3) ;}
;
expr : 
    expr PLUS expr  {$<node>$ = makeOperatorNode(_NODE_TYPE_PLUS,$<node>1,$<node>3);}
  | expr MINUS expr  { $<node>$ = makeOperatorNode(_NODE_TYPE_MINUS,$<node>1,$<node>3);}
  | expr MUL expr {$<node>$ = makeOperatorNode(_NODE_TYPE_MUL,$<node>1,$<node>3);}
  | expr DIV expr {$<node>$ = makeOperatorNode(_NODE_TYPE_DIV,$<node>1,$<node>3);}
  | expr MOD expr {$<node>$ = makeOperatorNode(_NODE_TYPE_MOD,$<node>1,$<node>3);}
  |'(' expr ')' {$<node>$ = $<node>2;}
  | INT {$<node>$ = $<node>1;}
  | identifierUse {$<node>$ = $<node>1;}
  | STRING {$<node>$ = $<node>1;}
  | expr LT expr {$<node>$ = makeRelopNode(_NODE_TYPE_LT,$<node>1,$<node>3);}
  | expr GT expr {$<node>$ = makeRelopNode(_NODE_TYPE_GT,$<node>1,$<node>3);}
  | expr LE expr  {$<node>$ = makeRelopNode(_NODE_TYPE_LE,$<node>1,$<node>3);}
  | expr GE expr {$<node>$ = makeRelopNode(_NODE_TYPE_GE,$<node>1,$<node>3);}
  | expr NE expr {$<node>$ = makeRelopNode(_NODE_TYPE_NE,$<node>1,$<node>3);}
  | expr EQ expr {$<node>$ = makeRelopNode(_NODE_TYPE_EQ,$<node>1,$<node>3);}
  | expr AND expr {$<node>$ = makeRelopNode(_NODE_TYPE_AND,$<node>1,$<node>3);}
  | expr OR expr {$<node>$ = makeRelopNode(_NODE_TYPE_OR,$<node>1,$<node>3);}
  | NOT expr {$<node>$ = makeRelopNode(_NODE_TYPE_NOT,$<node>2,NULL);}
  | ID '(' ')' {$<node>$ = makeFunctionCallNode($<string>1,NULL);}
  | ID '(' ArgList ')' {$<node>$ = makeFunctionCallNode($<string>1,$<node>3);}
;

// makeFunctionCallNode(struct expr_tree_node *parameters,  struct expr_tree_node *code, char* name, int type)
%%

void yyerror(char const *s)
{
    printf("yyerror %s : %s\n",s, yytext);
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  _INIT_STATE = _FALSE;

  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}