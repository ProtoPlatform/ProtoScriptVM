//
//  P3DPlane.h
#import "P3DPrimitive.h"

@interface P3DPlane : P3DPrimitive

+(id) planeWithWidth:(CGFloat)width length:(CGFloat)length;
-(id) initWithWidth:(CGFloat)width length:(CGFloat)length;

@property (readonly) CGFloat width;
@property (readonly) CGFloat length;

@end
