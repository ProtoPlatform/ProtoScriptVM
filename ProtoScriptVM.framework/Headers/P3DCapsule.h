//
//  P3DCapsule.h
#import "P3DPrimitive.h"

@interface P3DCapsule : P3DPrimitive

+ (id)capsuleWithCapRadius:(CGFloat)capRadius height:(CGFloat)height;
- (id)initWithCapRadius:(CGFloat)capRadius height:(CGFloat)height;

@property (readonly) CGFloat capRadius;
@property (readonly) CGFloat height;

@end
