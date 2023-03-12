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
int _INIT_STATE ;

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
    TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock
    {
      exit(1);
    }
  |  TypeDefBlock GDeclBlock FDefBlock MainBlock
    {
    
      exit(1);
    }
  | TypeDefBlock GDeclBlock MainBlock
    {
    
      exit(1);
    }
  | TypeDefBlock FDefBlock MainBlock
    {
    
      exit(1);
    }
  | TypeDefBlock MainBlock
    {
    
      exit(1);
    }
  | GDeclBlock FDefBlock MainBlock
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
      struct expr_tree_node * funcNode = makeFunctionDefinitionNode($<string>1, "main", NULL, $<node>7);
      defineFunction(funcNode, target_file);
      $<node>$ = funcNode;

    
      explEnd(target_file);
      printf("Complete \n");

      if(target_file) fclose(target_file);


    
    }

;
// ------------------- ClassDeclBlock ---------------------------------------------

ClassDefBlock : 
    CLASS ClassDefList ENDCLASS
;
ClassDefList : 
    ClassDefList ClassDef
    {
      defineClass($<node>2, target_file);
    }
  | ClassDef
    {
      defineClass($<node>1, target_file);
    }
;

ClassDef  : 
    ClassName '{' DECL ClassFieldLists ClassMethodDeclList ENDDECL ClassMethodDefns '}'
    {
      popAllClassLocalDeclarationsAndCreateEntry($<string>1);

      
      // class name, class fields, class methods declarations, class methods definitions
      $<node>$ = makeClassNode($<string>1, $<typeField>4, $<node>7);
    }
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
    struct expr_tree_node * idNode = makeDeclareIdNode($<string>2, NULL);
    idNode->nodetype = _NODE_TYPE_FUNCTION_DEFINITION;
    idNode->left = $<node>4;
    idNode->type = typeLookup($<string>1);
    $<node>$ = idNode; 
  }
;
ClassParamList :
    ClassParamList ',' Param 
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

ClassMethodDefns:
    ClassMethodDefns ClassFunctionDef
    {
      insertIntoMethodTree($<node>1, $<node>2);
      $<node>$ = $<node>1;
    }
  | ClassFunctionDef
  {
    $<node>$ = makeConnectorNode(NULL, $<node>1);
  }
;


ClassFunctionDef :
    Type ID '(' ParamList ')' '{' LDeclBlock ClassFunctionBody '}'
    {

      struct expr_tree_node * funcNode = makeMethodDefinitionNode($<string>1, $<string>2, $<node>4, $<node>8);
      defineClassMethod(getCurrentClassBeingDefined(),funcNode, target_file);
      $<node>$ = funcNode;
    }
;

ClassFunctionBody :
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







ClassField  :
    SELF '.' ID 
    {
      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode($<string>3, NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode("self",rightFieldNode,NULL);
      leftFieldNode->classType = getCurrentClassBeingDefined();

      
 
      // get the type of the right field node
      struct FieldList * rightType = classFieldLookup(leftFieldNode->classType, rightFieldNode->varname);
      // if right type is null
      if(rightType == NULL)
      {
        yyerror("Field not found in class \n");
        exit(1);
      }
     
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      $<node>$ = leftFieldNode;


    }
  | ClassField '.' ID
    {
      insertIntoClassFieldTree($<node>1, makeFieldNode($<string>3, NULL, NULL));
      $<node>$ = $<node>1;

    }
;

ClassFieldFunction  :
    SELF '.' ID '(' ClassArgList ')'
  | ID '.' ID '(' ClassArgList ')'   //This will not occur inside a class.
  | ClassField '.' ID '(' ClassArgList ')'
;

ClassArgList: 
  ClassArgList ',' expr
  | expr
;
// ------------------- TypeDeclBlock ---------------------------------------------
TypeDefBlock :
    TYPE TypeDefList ENDTYPE
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
    } // check if typename is defined
;



TypeField : 
    TypeField '.' ID 
    { 
      insertIntoTypeFieldTree($<node>1, makeFieldNode($<string>3, NULL, NULL));
      $<node>$ = $<node>1;
      
    }
  | ID '.' ID 
    { 

      // make field nodes
      struct expr_tree_node * rightFieldNode  = makeFieldNode($<string>3, NULL,NULL);
      struct expr_tree_node * leftFieldNode  = makeFieldNode($<string>1,rightFieldNode,NULL);

      // get the LST entry for the variable
      struct LocalSymbolTable * lstEntry = LSTLookup($<string>1);
      // if lst entry is not null
      if(lstEntry != NULL)
      {
        // set the type of the left field node
        leftFieldNode->type = lstEntry->type;
      }
      else
      {
        // get the GST entry for the variable
        struct GlobalSymbolTable * gstEntry = GSTLookup($<string>1);
        // if gst entry is not null
        if(gstEntry != NULL)
        {
          // set the type of the left field node
          leftFieldNode->type = gstEntry->type;
        }
        else
        {
          // error
          printf("Error: Variable %s not declared \n", $<string>1);
          exit(1);
        }
      } 
      // get the type of the right field node
      struct FieldList * rightType = typeFieldLookup(leftFieldNode->type, $<string>3);
      // if right type is null throw error
      if(rightType == NULL)
      {
        printf("Error: Field %s not found in type %s \n", $<string>3, leftFieldNode->type->name);
        exit(1);
      }
      // set the type of the right field node
      rightFieldNode->type = rightType->type;
      $<node>$ = leftFieldNode;


    }
;
// ------------------- GDeclBlock ---------------------------------------------
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
  | TypeField {$<node>$ = $<node>1;}
  | ClassField {$<node>$ = $<node>1;}
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
  | NEW '(' ID ')' SEMICOLON
  {
    $<node>$ = makeNewNode($<string>3);
  }
  | ClassFieldFunction {$<node>$ = $<node>1;}
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
  | ClassDeleteStmt
;

ClassDeleteStmt :
  DELETE '(' ClassField ')' SEMICOLON
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
}

int main()
{

  FILE * input_file=fopen("input.expl","r");
  target_file = fopen("untranslated_assembly.xsm","w");
  // Initializing Type Table
  typeTableCreate();
  _INIT_STATE = _FALSE;
  // stack
  _STACK_POINTER = _INITIAL_STACK_POINTER;
  _BASE_POINTER = _STACK_POINTER+1;
  // heap
  _HEAP_POINTER = _INITIAL_HEAP_POINTER;
  yyin = input_file;
  yyparse(); 
  fclose(input_file);  
}