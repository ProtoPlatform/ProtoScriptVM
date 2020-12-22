//
//  PNet.h
//  ProtoScriptVM
//
//  Created by dev on 10/29/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "lua.h"

/* Bridge for cocoa c functions */

int luaopen_pense_pnetlib(lua_State * _Nonnull s);
NSUUID * _Nonnull PNetCreateUUIDRaw(void);
NSString * _Nonnull PNetCreateUUIDString(void);
NSString * _Nullable PNetUUIDToString(NSUUID * _Nonnull);
NSUUID * _Nullable PNetStringToUUID(NSString * _Nonnull UUIDString);

NS_ASSUME_NONNULL_BEGIN

@interface PNETLibLua : NSObject
@end

NS_ASSUME_NONNULL_END
