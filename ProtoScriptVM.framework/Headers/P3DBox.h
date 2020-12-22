//
//  P3DBox.h
#import "P3DPrimitive.h"

@interface P3DBox : P3DPrimitive

+(id) boxWithWidth:(CGFloat)width height:(CGFloat)height length:(CGFloat)length;
-(id) initWithWidth:(CGFloat)width height:(CGFloat)height length:(CGFloat)length;

@property (readonly) CGFloat width;
@property (readonly) CGFloat height;
@property (readonly) CGFloat length;
@property (readonly) CGFloat chamferRadius;

@end
