//
//  pense.h
//  pense
//

#import <Foundation/Foundation.h>

#include <stdio.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"


@interface PenseEngine : NSObject

+ (instancetype)sharedEngine;

- (int)runScriptAtPath:(NSString *)filePath preprocess:(BOOL)preprocess;



#pragma mark - Load and Run Lua Code
- (bool)runBundleFile:(NSString *)fileName;
- (bool)runFileAtPath:(NSString *)path;
- (bool)runString:(NSString *)string;
- (bool)runString:(NSString *)string withDebugger:(BOOL)debugger;
- (bool)runString:(NSString *)string onNode:(id)node withDebugger:(BOOL)debugger;
#pragma mark - Call Loaded Function
- (id)callFunction:(NSString *)functionName withArguments:(NSArray *)arguments;
- (id)callTableFunction:(NSString *)tableName withFunctionName:(NSString *)functionName withArguments:(NSArray *)arguments;
- (id)callFunction:(NSString *)functionName withArguments:(NSArray *)arguments andDebugger:(BOOL)debugger;
- (id)callTableFunction:(NSString *)tableName withFunctionName:(NSString *)functionName withArguments:(NSArray *)arguments andDebugger:(BOOL)debugger;

#pragma mark - Get and Set Global Variables
- (id)getGlobalForKey:(NSString*)key;
- (void)setGlobalValue:(id)value forKey:(NSString*)key;
-(int) setRequirePath:(NSString *) path;
#pragma mark - Lua Access
- (lua_State *)getLuaState;
-(void)clearLuaState;
- (NSString *)getErrorBuffer;

@end
