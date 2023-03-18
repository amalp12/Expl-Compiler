%{  

#ifndef _STDIO_H
#define _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#define _STDLIB_H
#include <stdlib.h>
#endif

#ifndef _UNISTD_H
#define _UNISTD_H
#include <unistd.h>
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


#ifndef _TYPE_TABLE_H
#define _TYPE_TABLE_H
#include "typeTable.h"
#endif

#ifndef _TYPE_TABLE_C
#define _TYPE_TABLE_C
#include "typeTable.c"
#endif

#ifndef _CLASS_H
#define _CLASS_H
#include "class.h"
#endif

#ifndef _CLASS_C
#define _CLASS_C
#include "class.c"
#endif



void yyerror(char const *s);
extern FILE* yyin;
extern char * yytext;
extern int yylineno; 
FILE * target_file ;


int yylex(void);

%}

%union{
  struct expr_tree_node * node;
  char * string;
  int integer;
  struct declaration_node * decl_node;
  struct FieldList * typeField;
}


%token INT MUL DIV PLUS MINUS  ID READ WRITE SEMICOLON START END EQUALS STRING MOD
%token GT LT GE LE NE EQ 
%token IF THEN ELSE ENDIF WHILE DO ENDWHILE REPEAT UNTIL
%token DECL ENDDECL TYPE ENDTYPE
%token BREAK BREAKPOINT CONTINUE 
%token RETURN MAIN 
%token INITIALIZE ALLOC FREE NULLVAL
%token CLASS ENDCLASS EXTENDS NEW DELETE SELF
%token AND OR NOT
%type <node> expr Program
%left AND OR NOT
%left GT LT 
%left NE EQ
%left GE LE
%left PLUS MINUS
%left MUL DIV MOD


%%



Program : 

    TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock {}
    | TypeDefBlock ClassDefBlock GDeclBlock  MainBlock{}

;

MainBlock :
    Type MAIN '(' ')' '{' LDeclBlock Body '}'
    {

      // declare main function
      $<node>$ =  declareAndDefineMain($<string>1, $<node>7, target_file);

    }

;
// ------------------- ClassDeclBlock ---------------------------------------------

ClassDefBlock : 
    CLASS ClassDefList ENDCLASS
  |
;
ClassDefList : 
    ClassDefList ClassDef
    {
      // reset 
      resetCurrentClassBeingDefined();

    }
  | ClassDef
    {
      // reset
      resetCurrentClassBeingDefined();
    }
;

ClassDef  : 
    ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'
  |  ClassName '{' DECL ClassMethodDeclList ENDDECL ClassMethodDefns '}'
  |  ClassName '{' DECL ClassFieldLists ENDDECL ClassMethodDefns '}'


;


ClassName :
    ID         
    {
      classInstall($<string>1,NULL);
      $<string>$ = $<string>1;
    }
  | ID EXTENDS ID 
    {
      classInstall($<string>1,$<string>3);
      $<string>$ = $<string>1;
    }
;

ClassFieldLists :
    ClassFieldLists ClassFieldDecl
    {
      // make a linked list of fields
      $<typeField>2->next = $<typeField>1;
      $<typeField>$ = $<typeField>2;
    }
  | ClassFieldDecl
    {
      $<typeField>$ = $<typeField>1;
    }
;

ClassFieldDecl :
    Type ID SEMICOLON 
    {
      $<typeField>$ = createField($<string>1, $<string>2);
      classFieldInstall(getCurrentClassBeingDefined(), $<string>1, $<string>2);
    }
;

ClassMethodDeclList : 
    ClassMethodDeclList ClassMethodDecl
    {
      declareMethod($<node>2);
    }
  | ClassMethodDecl
    {
      declareMethod($<node>1);
    }
;

ClassMethodDecl :
    Type ID '(' ClassParamList ')' SEMICOLON // {Class_Minstall(Cptr,$2->Name,Tlookup($1->Name),$4);}//Installing the method to class
  {
    
    $<node>$ = makeMethodDeclareNode($<string>2, $<string>1, $<node>4);

  }
;
ClassParamList :
    ClassParamList ',' Param 
    {
      // make a tree of params such the left most is the first param
      insertIntoTree($<node>1, $<node>3);
      $<node>$ = $<node>1;
    }
  | Param
    {
      $<node>$ = $<node>1;
    }
  | 
    {
      // paramters can also be empty
      $<node>$ = NULL;
    }
;

ClassMethodDefns:
    ClassMethodDefns ClassFunctionDef
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
  | ClassFunctionDef
    {
      popAllLocalDeclarationsAndCreateEntry(NULL);
    }
;


ClassFunctionDef :
    Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
    {
      struct expr_tree_node * funcNode = makeMethodDefinitionNode($<string>1, $<string>2, $<node>4, $<node>8);
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
    }
;


ClassFieldFunction  :
    SELF '.' ID '(' ArgList ')'
  {
    $<node>$ = makeSelfDotFunctionNode($<string>3, $<node>5);
  }
  | SELF '.' ID '(' ')'
  {
    $<node>$ = makeSelfDotFunctionNode($<string>3, NULL);
  }
  | ID '.' ID '(' ArgList ')' // This will not occur inside a class
  {
    

    $<node>$ = makeIdDotFunctionNode($<string>1, $<string>3, $<node>5);

  }
  | ID '.' ID '(' ')' // This will not occur inside a class
  {
    $<node>$ = makeIdDotFunctionNode($<string>1, $<string>3, NULL);

  }
  | Field '.' ID '(' ArgList ')'
  {
    $<node>$ = makeMethodCallNode($<string>3, $<node>1, $<node>5);
  }
  | Field '.' ID '('  ')'
  {
    $<node>$ = makeMethodCallNode($<string>3, $<node>1, NULL);
  }
;


;
// ------------------- TypeDeclBlock ---------------------------------------------
TypeDefBlock :
    TYPE TypeDefList ENDTYPE
  |
;

TypeDefList : 
    TypeDefList TypeDef
  | TypeDef
;

TypeDef: 
    ID '{' TypeFieldDeclList '}'   
    { 
        typeInstall($<string>1, $<typeField>3); 
    }
;

TypeFieldDeclList : 
    TypeFieldDeclList TypeFieldDecl 
    {
      $<typeField>2->next = $<typeField>1;
      $<typeField>$ = $<typeField>2;
    }
  | TypeFieldDecl
    {
      $<typeField>$ = $<typeField>1;
    }
;

TypeFieldDecl :
    Type ID SEMICOLON 
    {
      $<typeField>$ = createField($<string>1, $<string>2);
    } 
;


Field : 
    Field '.' ID 
    { 
      insertIntoFieldTree($<node>1, makeFieldNode($<string>3, NULL, NULL));
      $<node>$ = $<node>1;
    }

  | ID '.' ID 
    { 
      // set up the types of the nodes
      $<node>$ =  makeIdDotIdFieldNode($<string>1, $<string>3);
    }
  | SELF '.' ID 
    {
      $<node>$ = makeSelfDotIdFieldNode($<string>3);
    }
;
// ------------------- GDeclBlock ---------------------------------------------
GDeclBlock :
    DECL GDeclList ENDDECL 
    {

      compilerInit(target_file); // set up header and init code

    }
  | DECL ENDDECL
    {
      compilerInit(target_file); // set up header and init code

    }
  |
;

GDeclList : 
    GDeclList GDecl 
  | GDecl
;

GDecl : 
    Type GidList SEMICOLON
    {
      popAllGlobalDeclarationsAndCreateEntry($<string>1); // sending in type as arguement 
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
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
      idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
      idNode->left = $<node>3;
      $<node>$ = idNode; 
    }

;
GParamList :
    GParamList ',' Param 
    {

      insertIntoTree($<node>1, $<node>3);
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
      $<node>$ = makeDeclareIdNode($<string>1, NULL);
    }
  | ID '[' INT ']' 
    {  
        struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
        idNode->left = $<node>3;
        $<node>$ = idNode;
    }
  | ID '[' INT ']' '[' INT ']'
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']' '[' INT ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' INT ']' '[' ID ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']' '[' ID ']'
    { 

      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
      idNode->left = $<node>3; 
      idNode->right = $<node>6; 
      $<node>$ = idNode;
    }
  | ID '[' ID ']'
    { 
      struct expr_tree_node * idNode = makeDeclareIdNode($<string>1, NULL);
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
  | INITIALIZE '(' ')' 
    {
      $<node>$ = makeHeapInitNode();
    }
  | ALLOC '('  ')' 
    {
      $<node>$ = makeHeapAllocateNode();
    }
  | FREE '(' expr ')' 
    {
      $<node>$ = makeHeapFreeNode($<node>3);
    }
  | NEW '(' ID ')' 
  {
    $<node>$ = makeNewNode($<string>3);
  }
  | DELETE '(' identifierUse ')' 
  {
    $<node>$ = makeDeleteNode($<node>3);
  }
  | Field 
  {
    $<node>$ = $<node>1;
  }
  | ClassFieldFunction
  {
    $<node>$ = $<node>1;
  }

;


   
// --------------------------------------------------------------------------------------

FDefBlock :
      FDefBlock FDef 

    | FDef
    
;

FDef :
    Type ID '(' ParamList ')' '{' LDeclBlock Body '}'
    {
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode($<string>1, $<string>2, $<node>4, $<node>8);
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
      $<node>$ = makeConnectorNode($<node>2,NULL);
    }
;

ParamList :
    ParamList ',' Param 
    {
      pushLocalDeclaration($<node>3);

      insertIntoTree($<node>1, $<node>3);
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
    $<node>$ = makeParameterNode($<string>1, $<string>2);
  }
;

// -----------------------------------------------------------------------------------------
LDeclBlock :
    DECL LDecList ENDDECL 
  | DECL ENDDECL
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  }
  |
  {      
    popAllLocalDeclarationsAndCreateEntry(NULL); 
  } 

;

LDecList : 
    LDecList LDecl 
  | LDecl
;
LDecl :
    ID LIdList SEMICOLON
    {
      popAllLocalDeclarationsAndCreateEntry($<string>1);
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
      $<node>$ = makeConnectorNode(NULL,$<node>1);
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
      popAllGlobalDeclarationsAndCreateEntry($<string>1);
    }
;
Type : 
  ID
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
  | NULLVAL  {$<node>$ = makeNullNode();}

;

%%

void yyerror(char const *s)
{
    // print error and line number
    printf("yyerror %s : %s at line number %d\n",s, yytext, yylineno);
    exit(1);
}

int main(int argc, char **argv)
{
 

  FILE * input_file=fopen(argv[1],"r");
  // if input file not found
  if(input_file==NULL)
  {
    printf("Input file %s not found\n",argv[1]);
    exit(1);
  }

  target_file = fopen("untranslated_assembly.xsm","w+");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  // currentline
  _CURRENT_LINE = 1;
  // counting classes
  _GLOBAL_CLASS_COUNTER = 0;

  yyin = input_file; 
  yyparse(); 
  fclose(input_file);  
  exit(0);
}