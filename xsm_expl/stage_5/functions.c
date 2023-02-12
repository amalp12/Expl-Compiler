
// Creates a new parameter list with the given parameter as head if the list is empty
// if the list is not empty, it adds the parameter to the end of the list

struct parameter_node * createParameterNode(char * name, int  type)
{
    struct parameter_node * new_parameter_node = (struct parameter_node *) malloc(sizeof(struct parameter_node));
    new_parameter_node->name = name;
    new_parameter_node->type = type;
    new_parameter_node->next = NULL;
    new_parameter_node->prev = NULL;
    new_parameter_node->rows = 0;
    new_parameter_node->cols = 0;

    return new_parameter_node;
}
struct parameter_node * AddToParameterList(struct parameter_node * parameter_list, char * varname, int type, int rows, int cols)
{
    struct parameter_node * parameter_node = createParameterNode(varname, type);
    if (parameter_list == NULL)
    {
       return parameter_node;
    } 
    else 
    {
        struct parameter_node * temp = parameter_list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        parameter_node->prev = temp;
        temp->next = parameter_node;
    }
    return parameter_list;
}

int getNewFunctionLabel()
{
    _LAST_USED_FUNCTION_LABEL++;
    return _LAST_USED_FUNCTION_LABEL;
}

