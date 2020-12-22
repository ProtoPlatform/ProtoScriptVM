//
//  P3DCone.h
#import "P3DPrimitive.h"

@interface P3DCone : P3DPrimitive

+ (id)coneWithBottomRadius:(CGFloat)bottomRadius height:(CGFloat)height;
- (id)initWithBottomRadius:(CGFloat)bottomRadius height:(CGFloat)height;

@property (readonly) CGFloat topRadius;
@property (readonly) CGFloat bottomRadius;
@property (readonly) CGFloat height;

@end
