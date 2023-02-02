struct Gsymbol *GSTLookup(char * name)            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
{
    struct Gsymbol *temp = _GLOBAL_SYMBOL_TABLE;
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
void GSTInstall(char *name, int type, int offset, int rows, int cols)   // Creates a symbol table entry.
{
    struct Gsymbol *temp = GSTLookup(name);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", name);
        exit(1);
    }
    temp = (struct Gsymbol *)malloc(sizeof(struct Gsymbol));

    temp->name  = strndup(name, strlen(name)-offset);

    temp->type = type;
    if(cols==0 && rows==0) temp->size = _INT_SIZE;
    else if(cols==0) temp->size = rows*_INT_SIZE;
    else temp->size = rows*cols*_INT_SIZE;
    temp->size = max(temp->size, _INT_SIZE);
    
    temp->rows = rows;
    temp->cols = cols;
    temp->binding = _STACK_POINTER;
    _STACK_POINTER += temp->size;
    _BASE_POINTER += temp->size;
    temp->next = _GLOBAL_SYMBOL_TABLE;
    _GLOBAL_SYMBOL_TABLE = temp;
}

