//
//  pense_block.h
//  pense
//

#import <Foundation/Foundation.h>
#include "lua.h"

void *toBlock(lua_State *s, int functionIndex, void *owner);
