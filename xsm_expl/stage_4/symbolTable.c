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

int getTypeFromGST(char * name)
{
    struct Gsymbol *temp = _GLOBAL_SYMBOL_TABLE;
    struct Gsymbol * found = NULL ;
    while(temp != NULL)
    {
        if(strcmp(temp->name, name) == 0)
        {
            found = temp;
            break;
        }
        temp = temp->next;
    }
    if(found!=NULL)
    {
        return found->type;
    }
    return _NONE;
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
    struct Gsymbol *temp = GSTLookup(node->varname);
    if(temp != NULL)
    {
        printf("Variable %s already declared\n", node->varname);
        exit(1);
    }
    temp = (struct Gsymbol *)malloc(sizeof(struct Gsymbol));

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
    temp->next = _GLOBAL_SYMBOL_TABLE;
    _GLOBAL_SYMBOL_TABLE = temp;
}

