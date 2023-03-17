#ifndef _TYPEDEF_H
#define _TYPEDEF_H
#include "typedef.h"
#endif

struct labelNode{
    int address; // address of the label in the code segment
    char * labelName; // name of the label
    struct labelNode *next; // pointer to the next label in the linked list
};
// Note that the header is 8 lines but it takes only half the space as a line of code hence we need to start from -7
int _LINE_NUMBER = -7; // private variable to keep track of the line number
int getLabelAddress( struct labelNode * head, char * labelName, int offset); // Get the address of a label
struct labelNode * labelListAppend(struct labelNode * head, int lineNumber, char * labelName, int offset); // Append a new label to the list
void printLabelList(struct labelNode * head); // Print the label table which is in the form of a linked list
int addressFromLineNumber(int lineNumber); // Get the address from the line number
int lineNumberFromAddress(int address); // Get the line number from the address
void incrementLineNumber(); // Increment the line number
int getLineNumber(); // Get the current line number