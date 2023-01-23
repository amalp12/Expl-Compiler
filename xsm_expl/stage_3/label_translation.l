%{

#include "label_translation.h"
#include "label_translation.c"
#include <string.h>

struct labelNode *labelLinkedList = NULL;
int firstParse = 1;
FILE * out  ;
%}

label_decl [_a-zA-Z][_a-zA-Z0-9]+:\n
label_ref [_a-zA-Z][_a-zA-Z0-9]+\n
%%

{label_decl} {
    //removing unessesary characters
    if(firstParse)
    {
        labelLinkedList = labelListAppend(labelLinkedList, getLineNumber(), yytext,2);
    }
}
{label_ref} {
    if(firstParse)
    {
        incrementLineNumber();

    }
    else
    {
     
        int address = getLabelAddress(labelLinkedList, yytext, 1);
        if(address!=_NONE)fprintf(out, "%d\n", address);
        else fprintf(out, "%s", yytext);


    }
    
}
[\n] {
    if(firstParse)
    {
        incrementLineNumber();
    }
    else
    {
        fprintf(out, "%s", yytext);
    }
}
. {
    if(!firstParse)
    {
        fprintf(out, "%s", yytext);
    }
}   

%%

int yywrap(void){
    if(firstParse)
    {
        yyin =fopen("untranslated_assembly.xsm", "r");
        firstParse = 0;
        
        return 0;
    }
    return 1;
}

int main(){
    yyin = fopen("untranslated_assembly.xsm", "r");
    out = fopen("assemblycode.xsm", "w");
    yylex();
    printLabelList(labelLinkedList);
    fclose(out);
    
    return 0;
}