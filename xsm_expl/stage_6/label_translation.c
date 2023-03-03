int lineNumberFromAddress(int address)
{
    return (address-_CODE_START_ADDRESS)/2+1;
}
int addressFromLineNumber(int lineNumber)
{
    return _CODE_START_ADDRESS +2*(lineNumber-1);
}
void incrementLineNumber()
{
    _LINE_NUMBER++;
}
int getLineNumber()
{
    return _LINE_NUMBER;
}
struct labelNode * labelListAppend(struct labelNode * head, int lineNumber, char * labelName, int offset) { // offset decides how many charecters to delete from the end of the string 
    // create a new label node
    struct labelNode * new_label = (struct labelNode *) malloc(sizeof(struct labelNode));
    // generate the address from line number and then assign it to the label
    new_label->address = addressFromLineNumber(lineNumber);
    // set the next pointer to NULL
    new_label->next = NULL;

    // copy label name
    new_label->labelName = (char *) malloc(sizeof(char) * (strlen(labelName)+1));// allocating space to copy the label name
    strcpy(new_label->labelName, labelName); // copying name
    // removing useless charecters
    new_label->labelName[strlen(new_label->labelName)-offset] = '\0'; // deleting the offset number of  charecters from the end of label name

    // null check
    if(head == NULL)
    {
        return new_label;
    }
   
    // appending to the end of the linked list
    struct labelNode * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_label;
    
    return head;
}

int getLabelAddress( struct labelNode * head, char * labelName, int offset) {

    // null check
    if (head == NULL)
    {
        return _NONE;
    }
    // coping the label name to a temporary variable
    char * tempLabelName = (char *) malloc(sizeof(char) * (strlen(labelName)+1));
    strcpy(tempLabelName, labelName);
    // removing the offset number of charecters from the end of the label name (useless charecters that are not included in the label name)
    tempLabelName[strlen(tempLabelName)-offset] = '\0';

    // traversing the linked list to find the label if it exists return the address else return _NONE
    struct labelNode * temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->labelName, tempLabelName) == 0)
        {
            free(tempLabelName);
            return temp->address;
        }
        temp = temp->next;
    }
    // freeing the memory allocated to the temporary variable
    free(tempLabelName);
    return _NONE;
}


void printLabelList(struct labelNode * head) {
    // null check
    if (head == NULL)
    {
        return;
    }
    // printing the label table
    struct labelNode * temp = head;
    while (temp != NULL)
    {
        printf("Label Name: %s, Address: %d, Line Number: %d\n",temp->labelName, temp->address, lineNumberFromAddress(temp->address));
        temp = temp->next;
    }
}