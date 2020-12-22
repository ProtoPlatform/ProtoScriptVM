//
//  P3DLight.h
#import "P3DPrimitive.h"

@interface P3DLight : P3DPrimitive
-(id) initWithLight:(SCNLight *)light;
@property (strong) SCNLight *light;
@end
