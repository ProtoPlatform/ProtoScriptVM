//
//  PFlowLib.h
//  ProtoScriptVM
//
//  Created by dev.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for Proto Workspace functions */

int luaopen_pense_pflowlib(lua_State * _Nonnull s);
NSUUID * _Nonnull PFlowCreateUUIDRaw(void);
NSString * _Nonnull PFlowCreateUUIDString(void);
NSString * _Nullable PFlowUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PFlowStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PFlowLibLua : NSObject
-(id)initWithLuaState:(lua_State *)L andFlow:(id)flow;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultFlow:(id)flow;
@end

NS_ASSUME_NONNULL_END
