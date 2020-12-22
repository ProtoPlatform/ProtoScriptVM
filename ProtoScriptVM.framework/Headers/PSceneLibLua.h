//
//  PSceneLib.h
//  ProtoScriptVM
//
//  Created by dev.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for Proto Scene functions */

int luaopen_pense_pscenelib(lua_State * _Nonnull s);
NSUUID * _Nonnull PSceneCreateUUIDRaw(void);
NSString * _Nonnull PSceneCreateUUIDString(void);
NSString * _Nullable PSceneUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PSceneStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PSceneLibLua : NSObject
-(id)initWithLuaState:(lua_State *)L andScene:(id)scene;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultScene:(id)scene;

@end

NS_ASSUME_NONNULL_END
