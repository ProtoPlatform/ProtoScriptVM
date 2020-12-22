//
//  pense_debug.h
//  pense
//

#import <Foundation/Foundation.h>

#include "lua.h"

int luaopen_pense_debug(lua_State *L);

/* all debug functions should have no side effects*/


/* 
 These functions should be used in XCode console.
 NOTE: Becasue currently nowhere in this project uses this function, it maybe
 stripped during linking(for optimization). But don't worry, this won't
 happen when you build your app in DEBUG mode.
 */
NSString *stackInfo();
NSString *tableInfo(lua_State *s, int tableIndex);


/* 
 these functions should be used in lua script
*/
int probe(lua_State *s);    //as `probe' in lua
int luaPrint(lua_State *s); //as `print` in lua
