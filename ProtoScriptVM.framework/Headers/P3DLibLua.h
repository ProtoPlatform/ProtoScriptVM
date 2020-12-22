//
//  P3DLib.h
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
#import "P3DPrimitives.h"
#import "P3DSCNView.h"
#import <SceneKit/SceneKit.h>

@interface P3DLibLua : NSObject {
}
@property(nonatomic,strong) P3DSCNView *currentSceneView;
@property(nonatomic,strong) NSMutableDictionary <NSString *,P3DSCNView *> *sceneViews;
- (id)initWithLuaState:(lua_State *)L andDefaultSceneView:(P3DSCNView *)sceneView;
-(void)loadLibraryIntoLuaState:(lua_State *)L withDefaultSceneView:(P3DSCNView *)sceneView;
-(void)makeDefaultSceneView:(P3DSCNView *)sceneView;
-(BOOL)addSceneView:(P3DSCNView *)sceneView;
-(BOOL)removeSceneViewWithSymbol:(NSString *)symbol;

@end
