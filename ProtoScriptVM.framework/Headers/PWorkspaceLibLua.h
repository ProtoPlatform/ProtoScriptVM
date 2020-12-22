//
//  PWorkspace.h
//  ProtoScriptVM
//
//  Created by dev.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for Proto Workspace functions */

int luaopen_pense_pworkspacelib(lua_State * _Nonnull s);
NSUUID * _Nonnull PWorkspaceCreateUUIDRaw(void);
NSString * _Nonnull PWorkspaceCreateUUIDString(void);
NSString * _Nullable PWorkspaceUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PWorkspaceStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PWorkspaceLibLua : NSObject
-(id)initWithLuaState:(lua_State *)L andWorkspace:(id)workspace;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultWorkspace:(id)workspace;
@end

NS_ASSUME_NONNULL_END
