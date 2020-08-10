//Hello, welcome to c.pdB . Doubts, suggestions and bug reports: henriquemarcel2244@gmail.com
//Thanks for using c.pdB

/*   ______            ______
  / ____/ ____  ____/ / __ )
 / /     / __ \/ __  / __  |
/ /____ / /_/ / /_/ / /_/ /
\____(_) .___/\__,_/_____/
      /_/
*/

//Create a new DataBase
//if the state is equal to 0:
// Create a new database if it does not exist and if it exists it replaces the previous one and deletes all data.
//if the state is equal to 1:
// Create a new database if it does not exist and if it exists it maintains the bank and does not delete any data.
Value createDataBase(char* name,int state);


//Create a new Collection
//if the state is equal to 0:
// Create a new collection if it does not exist and if it exists it replaces the previous one and deletes all data.
//if the state is equal to 1:
// Create a new collection if it does not exist and if it exists it maintains the bank and does not delete any data.
Value createCollection(char* dataBaseName, char* collectionName, int state);

//Insert a new data into the Collection
//  if the dataBaseName is equal to 0:
//      Create a new database if it does not exist and if it exists it replaces the previous one and deletes all data.
//  if the dataBaseName is equal to 1:
//      Create a new database if it does not exist and if it exists it maintains the bank and does not delete any data.
//
//  if the stateCollection is equal to 0:
//      Create a new collection if it does not exist and if it exists it replaces the previous one and deletes all data.
//  if the stateCollection is equal to 1:
//      Create a new collection if it does not exist and if it exists it maintains the bank and does not delete any data.
Value insertIntoCollection(char* dataBaseName, char* collectionName,int stateDataBase, int stateCollection, Value data);


struct Value
{
    ValueType type;
    union
    {
        int*        iptr;
        char*       sptr;
        float*      fptr;
        struct map* mptr;

        void* vptr;
    } ptrs;
};
