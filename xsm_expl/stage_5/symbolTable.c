struct GlobalSymbolTable *GSTLookup(char * name)            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
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
void GSTInstall(struct expr_tree_node * node, int type, int offset)   // Creates a symbol table entry.
{
    // see if declaration already exists in GST
    struct GlobalSymbolTable *temp = GSTLookup(node->varname);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", node->varname);
        exit(1);
    }
    
    // create new entry in the GST
    struct GlobalSymbolTable * new_gst_entry = (struct GlobalSymbolTable *)malloc(sizeof(struct GlobalSymbolTable));


    new_gst_entry->name  = strndup(node->varname, strlen(node->varname)-offset);
    new_gst_entry->type = type;


    int rows =0, cols = 0; 
    if(node->left != NULL) rows = node->left->val;
    if(node->right != NULL) cols = node->right->val;

    
    
    new_gst_entry->rows = rows;
    new_gst_entry->cols = cols;
    new_gst_entry->binding = _STACK_POINTER;
    new_gst_entry->size = max(rows*cols, max(rows, max(cols, _INT_SIZE)));
    new_gst_entry->paramList = NULL;
    new_gst_entry->functionLabelNumber = _NONE;

    if(node->nodetype == _NODE_TYPE_FUNCTION)
    {
        new_gst_entry->functionLabelNumber = getNewFunctionLabel();
    }
    // add all the parameters to the parameter list
    struct expr_tree_node * parameter = node->left;
    while(parameter != NULL && parameter->nodetype == _NODE_TYPE_PARAMETER)
    {
    // add to parameter list
        new_gst_entry->paramList = AddToParameterList(new_gst_entry->paramList, parameter);
        parameter = parameter->left;
        
    }
    
    _STACK_POINTER += new_gst_entry->size;
    _BASE_POINTER += new_gst_entry->size;
    new_gst_entry->next = _GLOBAL_SYMBOL_TABLE;
    _GLOBAL_SYMBOL_TABLE = new_gst_entry;
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


void LSTInstall(struct expr_tree_node * node, int type, int offset)   // Creates a symbol table entry.
{
    struct LocalSymbolTable *temp = LSTLookup(node->varname);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", node->varname);
        exit(1);
    }
    temp = (struct LocalSymbolTable *)malloc(sizeof(struct LocalSymbolTable));

    temp->name  = strndup(node->varname, strlen(node->varname)-offset);

    temp->type = type;

    int rows =0, cols = 0; 
    if(node->left != NULL) rows = node->left->val;
    if(node->right != NULL) cols = node->right->val;

    
    temp->rows = rows;
    temp->cols = cols;
    temp->binding = _STACK_POINTER;
    temp->size = max(rows*cols, max(rows, max(cols, _INT_SIZE)));
    _STACK_POINTER += temp->size;
    _BASE_POINTER += temp->size;
    temp->next = _LOCAL_SYMBOL_TABLE;
    _LOCAL_SYMBOL_TABLE = temp;
}


