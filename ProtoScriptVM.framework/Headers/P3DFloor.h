//
//  P3DFloor.h
#import "P3DPrimitive.h"

@interface P3DFloor : P3DPrimitive

+(id) floorWithWidth:(CGFloat)width length:(CGFloat)length materialContents:(id)materialContents reflectivity:(CGFloat)reflectivity;
-(id) initWithWidth:(CGFloat)width length:(CGFloat)length materialContents:(id)materialContents reflectivity:(CGFloat)reflectivity;

@property (readonly) CGFloat length;
@property (readonly) CGFloat width;
@property (readonly) CGFloat reflectivity;
@property (readonly) CGFloat reflectionFalloffStart;
@property (readonly) CGFloat reflectionFalloffEnd;

@end
