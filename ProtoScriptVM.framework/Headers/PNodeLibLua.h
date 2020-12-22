//
//  PNodeLibLua.h
//  ProtoScriptVM
//
//  Created by dev.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for Proto Node functions */

int luaopen_pense_pnodelib(lua_State * _Nonnull s);
NSUUID * _Nonnull PNodeCreateUUIDRaw(void);
NSString * _Nonnull PNodeCreateUUIDString(void);
NSString * _Nullable PNodeUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PNodeStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PNodeLibLua : NSObject
-(id)initWithLuaState:(lua_State *)L andNode:(id)node;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultNode:(id)node;
@end

NS_ASSUME_NONNULL_END
