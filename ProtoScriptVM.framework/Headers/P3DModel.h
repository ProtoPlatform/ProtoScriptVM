//
//  P3DModel.h
#import "P3DPrimitive.h"

@interface P3DModel : P3DPrimitive
+(id) modelFromAssets:(NSString *)asset withInitialScale:(SCNVector3)initialScale;
-(id) initWithModelFromAssets:(NSString *)asset withInitialScale:(SCNVector3)initialScale;
@property (readonly) NSString   *asset;
@property (readonly) SCNVector3 initialScale;
@end
