%{
#ifndef YTAB_H
#define YTAB_H
#include "y.tab.h"
#endif


#ifndef EXPR_TREE_H
#define EXPR_TREE_H
#include "expr_tree.h"
#include "expr_tree.c"
#endif

%}


%%

[0-9]+ {
    yylval.node = makeNumberNode(atoi((yytext)));
    return NUMBER;
}
    
"+" {
    return PLUS;
}
    
"-" {
    return MINUS;
}
    
"*" {
    return MUL;
}
    
"/" {
    return DIV;
}

"=" {
    return EQUALS;
}

";" {
    return SEMICOLON;
}
    
"read" {
    return READ;
}

"write" {
    return WRITE;
}

"begin" {
    return START;
}

"end" {
    return END;
}
"if" {
    return IF;
}
"else" {
    return ELSE;
}
"then" {
    return THEN;
}
"endif" {
    return ENDIF;
}
"while" {
    return WHILE;
}
"do" {
    return DO;
}
"endwhile" {
    return ENDWHILE;
}
">" {
    return GT;
}
"<" {
    return LT;
}
"==" {
    return EQ;
}
"!=" {
    return NE;
}
">=" {
    return GE;
}
"<=" {
    return LE;
}  


[\t] {}
    
[()] {
    return *yytext;
}

[\n] {
    
}
    
[a-z] {
    yylval.node = makeIdNode(*yytext);
    return ID;
}

%%

int yywrap(void){
    return 1;
}