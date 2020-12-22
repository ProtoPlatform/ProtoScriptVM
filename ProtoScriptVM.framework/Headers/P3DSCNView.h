//
//  P3DSCNView.h
#import <SceneKit/SceneKit.h>
#import <ARKit/ARKit.h>
@interface P3DSCNView : SCNView
@property (nonatomic,strong) NSString *uuid;
@property (nonatomic,strong) NSString *symbol;
@property (nonatomic,strong) NSMutableDictionary *sceneObjects;
-(BOOL)addP3DObject:(id)object;
-(BOOL)removeP3DObject:(id)object;
-(BOOL)removeAllP3DObjects;
-(void)setupSceneDefaults;
@end
