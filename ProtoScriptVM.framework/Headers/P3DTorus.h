//
//  P3DTorus.h
#import "P3DPrimitive.h"

@interface P3DTorus : P3DPrimitive

+ (id)torusWithRingRadius:(CGFloat)ringRadius pipeRadius:(CGFloat)pipeRadius;
- (id)initWithRingRadius:(CGFloat)ringRadius pipeRadius:(CGFloat)pipeRadius;

@property (readonly) CGFloat ringRadius;
@property (readonly) CGFloat pipeRadius;

@end
