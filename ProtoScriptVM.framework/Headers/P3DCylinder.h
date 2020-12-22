//
//  P3DCylinder.h
#import "P3DPrimitive.h"

@interface P3DCylinder : P3DPrimitive

+ (id)cylinderWithRadius:(CGFloat)radius height:(CGFloat)height;
- (id)initWithRadius:(CGFloat)radius height:(CGFloat)height;

@property (readonly) CGFloat radius;
@property (readonly) CGFloat height;

@end
