//
//  P3DTube.h
#import "P3DPrimitive.h"

@interface P3DTube : P3DPrimitive

+ (id)tubeWithInnerRadius:(CGFloat)innerRadius outerRadius:(CGFloat)outerRadius height:(CGFloat)height;
- (id)initWithInnerRadius:(CGFloat)innerRadius outerRadius:(CGFloat)outerRadius height:(CGFloat)height;

@property (readonly) CGFloat innerRadius;
@property (readonly) CGFloat outerRadius;
@property (readonly) CGFloat height;

@end
