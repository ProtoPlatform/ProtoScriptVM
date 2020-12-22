//
//  pense_class.h
//  pense
//

#import <Foundation/Foundation.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

typedef struct {
    Class cls;
    Class superCls;
    bool isInClassMethodContext;
    bool isInCategoryContext;
}PenseClassStruct;

int luaopen_pense_class(lua_State *s);

PenseClassStruct *pense_check_class_userdata(lua_State *s, int index);

//this method makes sure that only one userdata exist for one class-method pair
PenseClassStruct *pense_pushClassUserdata(lua_State *s, Class cls, bool isClassMethodContext, bool isInCategoryContext);

//this method must be called on main thread!!!
void bindMainLuaThread(lua_State *s);

lua_State *luaThread();
