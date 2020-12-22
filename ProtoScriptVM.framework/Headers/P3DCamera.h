//
//  P3DCamera.h
#import "P3DPrimitive.h"

@interface P3DCamera : P3DPrimitive
-(id) initWithCamera:(SCNCamera *)camera;
@property (readonly,strong) SCNCamera *camera;
@end
