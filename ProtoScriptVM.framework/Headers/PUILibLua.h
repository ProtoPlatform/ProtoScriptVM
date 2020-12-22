//
//  PUILibLua.h
//  ProtoScriptVM
//
//  Created by dev on 10/10/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include "lua.h"
#import "PUIRootView.h"

/* Bridge for cocoa c functions */

int luaopen_pense_puilib(lua_State * _Nonnull s);

NS_ASSUME_NONNULL_BEGIN

@interface PUILibLua : NSObject
-(id)initWithLuaState:(lua_State *)L andRootView:(PUIRootView *)aRootView;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultRootView:(PUIRootView *)aRootView;
@end

NS_ASSUME_NONNULL_END
