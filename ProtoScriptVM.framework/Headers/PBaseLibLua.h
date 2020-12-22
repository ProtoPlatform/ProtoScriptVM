//
//  PBase.h
//  ProtoScriptVM
//
//  Created by dev on 10/29/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for cocoa c functions */

int luaopen_pense_pbaselib(lua_State * _Nonnull s);
NSUUID * _Nonnull PBaseCreateUUIDRaw(void);
NSString * _Nonnull PBaseCreateUUIDString(void);
NSString * _Nullable PBaseUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PBaseStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PBaseLibLua : NSObject
@end

NS_ASSUME_NONNULL_END
