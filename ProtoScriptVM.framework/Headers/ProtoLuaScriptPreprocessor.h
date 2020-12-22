//
//  ProtoLuaScriptPreprocessor.h
//
#import <Foundation/Foundation.h>

@interface ProtoLuaScriptPreprocessor : NSObject
+ (ProtoLuaScriptPreprocessor *)sharedManager;
-(NSInteger)socketTypeFromString:(NSString *)ppString withSocketType:(NSString *)socketType;
-(NSDictionary *)preprocessNode:(NSString *)symbol andCode:(NSString *)code;
-(NSString *)migrateCodeIfNeeded:(NSString *)codeToMigrate;
-(NSString *)stripSocketsFromPreamble:(NSString *)preamble;
-(NSString *)reassemblePreambleWithScript:(NSString *)script andInputSockets:(NSArray *)inputSockets andOutputSockets:(NSArray *)outputSockets;
@end
