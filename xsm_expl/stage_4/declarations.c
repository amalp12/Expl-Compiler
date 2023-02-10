void pushDeclaration( struct expr_tree_node * node)
{
    // see if declaration already exists in GST
    struct Gsymbol *temp1 = GSTLookup(node->varname);
    if (temp1 != NULL) {
        printf("Error: Redeclaration of variable %s\n", node->varname);
        exit(1);
    }

    // check if declaration already exists in stack
    struct declaration_node *temp2 = _DECLARATION_STACK_HEAD;
    while (temp2 != NULL) {
        if (strcmp(temp2->node->varname, node->varname) == 0) {
            printf("Error: Redeclaration of variable %s\n", node->varname);
            exit(1);
        }
        temp2 = temp2->next;
    }
  

    struct declaration_node *newNode = (struct declaration_node *) malloc(sizeof(struct declaration_node));
    newNode->node = node;
    newNode->next = _DECLARATION_STACK_HEAD;
    _DECLARATION_STACK_HEAD = newNode;
}

// returns the varname of the top of the stack
struct declaration_node * popDeclaration() 
{
    // null check
    if (_DECLARATION_STACK_HEAD == NULL) {
        return NULL;
    }
    struct declaration_node *temp = _DECLARATION_STACK_HEAD;
    _DECLARATION_STACK_HEAD = _DECLARATION_STACK_HEAD->next;
    return temp;
}

// checks if pushDeclaration stack is empty
int isDeclarationStackEmpty() 
{
    return _DECLARATION_STACK_HEAD == NULL;
}

void popAllAndCreateEntry(int type)
{
    int size ;
    switch (type)
    {
        case (_TYPE_INT):
        {;
                size = _INT_SIZE;
                break;
        }
        case (_TYPE_STRING):
        {
                size = _STRING_SIZE;
                break;
        }
        
        default:
        {
            printf("Null Size Error!\n");
            exit(1);
            break;
        }
    }
    struct declaration_node * temp = popDeclaration();
    while(temp!=NULL)
    {
        // void GSTInstall(char *name, int type, int size, int offset)   // Creates a symbol table entry.
        temp->node->type = type;
        GSTInstall(temp->node, type, 0);
        free(temp);
        temp = popDeclaration();

    }
}