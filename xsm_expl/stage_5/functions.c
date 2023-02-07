
// Creates a new parameter list with the given parameter as head if the list is empty
// if the list is not empty, it adds the parameter to the end of the list

struct parameter_node * createParameterNode(char * name, int  type)
{
    struct parameter_node * new_parameter_node = (struct parameter_node *) malloc(sizeof(struct parameter_node));
    new_parameter_node->name = name;
    new_parameter_node->type = type;
    new_parameter_node->next = NULL;
    return new_parameter_node;
}
struct parameter_node * AddToParameterList(struct parameter_node * parameter_list, struct expr_tree_node * parameter)
{
    struct parameter_node * parameter = createParameterNode(parameter->varname, parameter->type);
    if (parameter_list == NULL)
    {
       return parameter;
    } 
    else 
    {
        struct parameter_node * temp = parameter_list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = parameter;
    }
    return parameter_list;
}

int getNewFunctionLabel()
{
    _LAST_USED_FUNCTION_LABEL++;
    return _LAST_USED_FUNCTION_LABEL;
}

