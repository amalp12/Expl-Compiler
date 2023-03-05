
struct TypeTable
{
    char *name;                 //type name
    int typeId;                 //type id unique to each type system defined type
    int size;                   //size of the type
    struct Fieldlist *fields;   //pointer to the head of fields list
    struct TypeTable *next;     // pointer to the next type table entry
};
// The variable 'fields' is a pointer to the head of 'fieldlist'. Here 'fieldlist' stores the information regarding the different fields of a user-defined type.

struct Fieldlist
{
  char *name;              //name of the field
  int fieldIndex;          //the position of the field in the field list
  struct TypeTable *type;  //pointer to type table entry of the field's type
  struct Fieldlist *next;  //pointer to the next field
};

void typeTableCreate(); //Function to initialise the type table entries with primitive types (int,str) and special entries_(boolean,null,void).

struct TypeTable * typeLookup(char *name) ; // Search through the type table and return pointer to type table entry of type 'name'. Returns NULL if entry is not found.

void typeInstall(char *name, struct Fieldlist *fields) ; // Creates a type table entry for the (user defined) type of 'name' with given 'fields' and returns the pointer to the type table entry. The field list must specify the field index, type and name of each field. TInstall returns NULL upon failure. This routine is invoked when the compiler encounters a type definition in the source program.

struct Fieldlist * typeFieldLookup(struct TypeTable *type, char *name); // Searches for a field of given 'name' in the 'fieldlist' of the given user-defined type and returns a pointer to the field entry. Returns NULL if the type does not have a field of the name.

int getTypeSize(struct TypeTable * type) ; // Returns the amount of memory words required to store a variable of the given type.

// type table head
struct TypeTable * _TYPE_TABLE_HEAD  = NULL;
