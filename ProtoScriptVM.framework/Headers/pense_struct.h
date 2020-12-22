//
//  pense_struct.h
//  pense
//

#import <Foundation/Foundation.h>

#include "lua.h"

//NOTE: keep struct type definition same as `PenseObjectUserdata`!!!
typedef struct{
    void *cptr;//pointer to the wrapped struct
    char *ctype;
    bool isPtr;//Is this object a pointer to an object, such as `NSError **`
    bool isStruct;
    bool isInSuperMethodContext;
    bool isInClassMethodContext;
}PenseStructUserdata;

int luaopen_pense_struct(lua_State *L);

PenseStructUserdata *pense_check_struct_userdata(lua_State *s, int stackIndex);

/*
    Usually ptr is of type `Struct Foo *`(such as CGRect *). 
    When isPointer is true, ptr then is of type 'Struct Foo **'
 */
void push_struct(lua_State *s, void *ptr, const char *structTypeDescription, bool isPointer);
