#include "typedef.h"

struct labelNode{
    int address;
    char * labelName;
    struct labelNode *next;
};

int LINE_NUMBER = 1;
int getLabelAddress( struct labelNode * head, char * labelName, int offset); // Get the address of a label
struct labelNode * labelListAppend(struct labelNode * head, int lineNumber, char * labelName, int offset); // Append a new label to the list
void printLabelList(struct labelNode * head);