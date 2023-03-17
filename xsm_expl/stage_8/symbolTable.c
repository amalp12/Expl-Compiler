struct GlobalSymbolTable * GSTLookup(char * name)            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
{
    struct GlobalSymbolTable *temp = _GLOBAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        if(strcmp(temp->name, name) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}

int min(int a, int b)
{
    if(a<b) return a;
    return b;
}
int max(int a, int b)
{
    if(a>b) return a;
    return b;
}

void GSTInstall(char * varname,struct TypeTable * type, struct ClassTable * classType, int nodetype, int offset, int rows, int cols)   // Creates a symbol table entry.
{
    // see if declaration already exists in GST
    struct GlobalSymbolTable *temp = GSTLookup(varname);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", varname);
        exit(1);
    }
    
    // create new entry in the GST
    struct GlobalSymbolTable * new_gst_entry = (struct GlobalSymbolTable *)malloc(sizeof(struct GlobalSymbolTable));


    new_gst_entry->name  = strndup(varname, strlen(varname)-offset);
    new_gst_entry->type = type;
    new_gst_entry->classType = classType;

    new_gst_entry->rows = rows;
    new_gst_entry->cols = cols;
    new_gst_entry->binding = _STACK_POINTER;
    new_gst_entry->size = max(rows*cols, max(rows, max(cols, _INT_SIZE)));
    new_gst_entry->paramList = NULL;
    new_gst_entry->functionLabelNumber = _NONE;

    if(nodetype == _NODE_TYPE_FUNCTION_DEFINITION && strcmp(varname, "main") == 0)
    {
        new_gst_entry->functionLabelNumber = _MAIN_FUNCTION_LABEL;
        new_gst_entry->size = 0;
    }

    else if(nodetype == _NODE_TYPE_FUNCTION_DEFINITION)
    {
        new_gst_entry->functionLabelNumber = getNewFunctionLabel();
        new_gst_entry->size = 0;
    }
   
    
    _STACK_POINTER += new_gst_entry->size;
    _BASE_POINTER += new_gst_entry->size;
    new_gst_entry->next = _GLOBAL_SYMBOL_TABLE;
    _GLOBAL_SYMBOL_TABLE = new_gst_entry;

    // if stack overflows thow error
    if(_STACK_POINTER >= _FINAL_STACK_POINTER)
    {
        printf("Stack Overflow\n");
        exit(1);
    }
}

void clearLST() // Clears the local symbol table
{
    // free all the memory allocated to the local symbol table
    struct LocalSymbolTable * temp = _LOCAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        struct LocalSymbolTable * temp2 = temp;
        temp = temp->next;
        free(temp2);
    }
    // set the head of the local symbol table to null
    _LOCAL_SYMBOL_TABLE = NULL;
}


struct LocalSymbolTable *LSTLookup(char * name)            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
{
    struct LocalSymbolTable *temp = _LOCAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        if(strcmp(temp->name, name) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}


void LSTInstall(char * varname, struct TypeTable * type , int offset, int rows, int cols)   // Creates a symbol table entry.
{
    struct LocalSymbolTable * LSTEntry = LSTLookup(varname);
    if(LSTEntry != NULL)
    {
        printf("Variable %s already declared\n", varname);
        exit(1);
    }
    free(LSTEntry);
    struct LocalSymbolTable  * new_node = (struct LocalSymbolTable *)malloc(sizeof(struct LocalSymbolTable));

    new_node->name  = strndup(varname, strlen(varname)-offset);

    new_node->type = type;
    new_node->paramList = NULL;
    new_node->functionLabelNumber = _NONE;


    
    new_node->rows = rows;
    new_node->cols = cols;
    new_node->size = max(rows*cols, max(rows, max(cols, _INT_SIZE)));
    new_node->binding = _NONE;
    
    if(_LOCAL_SYMBOL_TABLE == NULL)
    {
        _LOCAL_SYMBOL_TABLE = new_node;
        new_node->next = NULL;
    }
    else
    {
        struct LocalSymbolTable * temp = _LOCAL_SYMBOL_TABLE;
        while(temp->next != NULL) temp = temp->next;
        temp->next = new_node;

    }
}

// print  GST Node
void printGSTNode(struct GlobalSymbolTable * gst_node)
{
    printf("Name: %s\t", gst_node->name);
    printf("Type: %s\t", gst_node->type == _TYPE_INT ? "int" : "matrix");
    printf("Rows: %d\t", gst_node->rows);
    printf("Cols: %d\t", gst_node->cols);
    printf("Binding: %d\t", gst_node->binding);
    printf("Size: %d\t", gst_node->size);
    printf("Function Label Number: %d\t", gst_node->functionLabelNumber);
    printf("Param List: ");
    struct ParameterNode * temp = gst_node->paramList;
    while(temp != NULL)
    {
        printf("%s, ", temp->name);
        temp = temp->next;
    }
    printf("\n");
}

// print GST
void printGST()
{
    printf("Printing GST\n");
    struct GlobalSymbolTable * temp = _GLOBAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        printGSTNode(temp);
        temp = temp->next;
    }
}

// get total length of LST
int getLSTLength()
{
    int length = 0;
    struct LocalSymbolTable * temp = _LOCAL_SYMBOL_TABLE;
    while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}