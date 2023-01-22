struct labelNode * labelListAppend(struct labelNode * head, int lineNumber, char * labelName, int offset) {
    struct labelNode * new_label = (struct labelNode *) malloc(sizeof(struct labelNode));
    new_label->address = _CODE_START_ADDRESS +2*(lineNumber-1);
    new_label->next = NULL;

    // copy label name
    new_label->labelName = (char *) malloc(sizeof(char) * (strlen(labelName)+1));
    strcpy(new_label->labelName, labelName);
    new_label->labelName[strlen(new_label->labelName)-offset] = '\0';

    if(head == NULL)
    {
        return new_label;
    }
   
    struct labelNode * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_label;
    
    return head;
}

int getLabelAddress( struct labelNode * head, char * labelName, int offset) {

    if (head == NULL)
    {
        return _NONE;
    }
    char * tempLabelName = (char *) malloc(sizeof(char) * (strlen(labelName)+1));
    strcpy(tempLabelName, labelName);
    tempLabelName[strlen(tempLabelName)-offset] = '\0';
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
    free(tempLabelName);
    return _NONE;
}


void printLabelList(struct labelNode * head) {
    if (head == NULL)
    {
        return;
    }
    struct labelNode * temp = head;
    while (temp != NULL)
    {
        printf("Label Name: %s, Address: %d, Line Number: %d\n",temp->labelName, temp->address, (temp->address-_CODE_START_ADDRESS)/2+1);
        temp = temp->next;
    }
}