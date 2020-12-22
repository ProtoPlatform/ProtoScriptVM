//
//  PelseEngine.h
//

#import <Foundation/Foundation.h>

// Lua
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

@class PelseEngine;

typedef enum PelseObjectOwnerType {
    PelseObjectOwnerTypeNone = 0,
    PelseObjectOwnerTypeCommandShortcut,
    PelseObjectOwnerTypeCommandWidget,
    PelseObjectOwnerTypeWorkspace,
    PelseObjectOwnerTypeScene,
    PelseObjectOwnerTypeFlow,
    PelseObjectOwnerTypeNode
} PelseObjectOwnerType;

@protocol PelseObjectOwner <NSObject>
@property (nonatomic, strong) PelseEngine *engine;
@property (nonatomic, strong) NSString *symbol;
@end

@interface PelseEngine : NSObject
@property (nonatomic, strong) NSObject *lock;
@property (nonatomic, strong) id<PelseObjectOwner> owner;
@property PelseObjectOwnerType ownerType;

+ (PelseEngine *)sharedLua;
- (instancetype)initWithOwner:(id<PelseObjectOwner>)owner andOwnerType:(PelseObjectOwnerType)ownerType andRequirePath:(NSString *)path;

#pragma mark - Load and Run Lua Code
- (bool)runLuaBundleFile:(NSString *)fileName;
- (bool)runLuaFileAtPath:(NSString *)path;
- (bool)runLuaString:(NSString *)string;
- (bool)runLuaString:(NSString *)string withDebugger:(BOOL)debugger;
- (bool)runLuaString:(NSString *)string onNode:(id)node withDebugger:(BOOL)debugger;

#pragma mark - Call Loaded Function
- (id)callLuaFunction:(NSString *)functionName withArguments:(NSArray *)arguments;
- (id)callLuaTableFunctionWithTableName:(NSString *)tableName andFunctionName:(NSString *)functionName withArguments:(NSArray *)arguments;
- (id)callLuaTableFunctionWithTableName:(NSString *)tableName andFunctionName:(NSString *)functionName withArguments:(NSArray *)arguments andDebugger:(BOOL)debugger;
- (id)callLuaFunction:(NSString *)functionName withArguments:(NSArray *)arguments andDebugger:(BOOL)debugger;

#pragma mark - Get and Set Global Variables
- (id)getLuaGlobalForKey:(NSString*)key;
- (void)setLuaGlobalValue:(id)value forKey:(NSString*)key;
-(int) setLuaPath:(NSString *) path;
#pragma mark - Lua Access
- (lua_State *)getLuaState;
-(void)clearLuaState;
- (NSString *)getErrorBuffer;
-(NSDictionary *)preprocessNode:(NSString *)symbol andCode:(NSString *)code;

@end
