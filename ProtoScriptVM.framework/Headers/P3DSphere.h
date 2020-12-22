//
//  P3DSphere.h
#import "P3DPrimitive.h"

@interface P3DSphere : P3DPrimitive

+ (id)sphereWithRadius:(CGFloat)radius;
- (id)initWithRadius:(CGFloat)radius;

@property (readonly) CGFloat radius;

@end
