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

#ifndef TYPEDEF_H
#define TYPE_DEF_H
#include "typedef.h"
#endif

%}

identifier ([a-zA-Z]|_[a-zA-Z])[a-zA-Z0-9_]*
strings \"((\\\")|[^"])*\"
numbers [0-9]+

%%


{numbers} {
    yylval.node = makeNumberNode(atoi((yytext)));
    return INT;
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
"breakpoint" {
    return BREAKPOINT;
}
"break" {
    return BREAK;
}
"continue" {
    return CONTINUE;
}
"repeat" {
    return REPEAT;
}
"until" {
    return UNTIL;
}
"decl" {
    return DECL;
}
"enddecl" {
    return ENDDECL;
}
"int" {
    yylval.integer = _TYPE_INT;
    return INT_DECL;
}
"str" {
    yylval.integer = _TYPE_STRING;
    return STRING_DECL;
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
"%" {
    return MOD;
}


[\t] {}
    
[(),\[\]%] {
    return *yytext;
}

[\n] {
    
}
    
{identifier} {
    yylval.node = makeIdNode(yytext);
    return ID;
}
{strings} {
    // removing double quotes at either end
    yylval.node = makeStringNode(yytext+1,1);
    return STRING;
}

%%

int yywrap(void){
    return 1;
}