%{

#include "label_translation.h"
#include "label_translation.c"
#include <string.h>

struct labelNode *labelLinkedList = NULL;
int firstParse = 1;
FILE * out  ;
%}

label_declaration [_a-zA-Z][_a-zA-Z0-9]+:\n
label_reference [_a-zA-Z][_a-zA-Z0-9]+\n
%%

{label_declaration} {

    // In the first parse we add all label declarations  to the linked list
    if(firstParse)
    {
        labelLinkedList = labelListAppend(labelLinkedList, getLineNumber(), yytext,2);
    }
    // Note that we do not increment the line number for the label declaration in the first parse
    // It is because in the final code we don't have the labels but the addresses of the labels in the Jump Instructions only
}
{label_reference} {
    // we increment the line number for the label reference in the first parse
    if(firstParse)
    {
        incrementLineNumber();

    }
    else
    {
        // in the second parse we search each text in  the code that resembles a label with the label list to check if it exists
        // if it exits then we get the address of the label and replce the label name with the address of the label
        int address = getLabelAddress(labelLinkedList, yytext, 1);
        if(address!=_NONE)fprintf(out, "%d\n", address);
        else fprintf(out, "%s", yytext);


    }
    
}
[\n] {
    // in the first parse we increment the line number for each new line
    if(firstParse)
    {

        incrementLineNumber();
    }
    else // in the second parse we print the new line to the code file
    {
        fprintf(out, "%s", yytext);
    }
}
. {
    if(!firstParse) // in the second pare we print the rest of the code to the code file
    {
        fprintf(out, "%s", yytext);
    }
}   

%%

int yywrap(void){
    // there are two parses, in the first parse we add all label declarations to the linked list and generate addresses for them
    // in the second parse we replace the label names with the addresses of the labels
    if(firstParse)
    {
        // we reset yyin to the beginning of the file for the next parse
        yyin =fopen("untranslated_assembly.xsm", "r");
        firstParse = 0;
        // return 0 to continue the parsing
        return 0;
    }
    // return 1 to stop the parsing
    return 1;
}

int main(){
    // open the file to be parsed
    yyin = fopen("untranslated_assembly.xsm", "r");
    // open the file to write the translated code
    out = fopen("assemblycode.xsm", "w");
    // parse the file
    yylex();
    // print the label list
    // printLabelList(labelLinkedList);
    fclose(out);
    
    return 0;
}