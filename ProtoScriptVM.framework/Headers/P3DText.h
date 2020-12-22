//
//  P3DText.h
#import "P3DPrimitive.h"

@interface P3DText : P3DPrimitive

+(id) textWithString:(NSString *)text depth:(CGFloat)depth fontNamed:(NSString *)fontName fontSize:(CGFloat)fontSize flatness:(CGFloat)flatness wrapped:(BOOL)wrapped chamferRadius:(CGFloat)chamferRadius alignmentMode:(NSString *)alignmentMode;
-(id) initWithString:(NSString *)text depth:(CGFloat)depth fontNamed:(NSString *)fontName fontSize:(CGFloat)fontSize flatness:(CGFloat)flatness wrapped:(BOOL)wrapped chamferRadius:(CGFloat)chamferRadius alignmentMode:(NSString *)alignmentMode;

@property (readonly) NSString *text;
@property (readonly) CGFloat depth;
@property (readonly) UIFont *font;
@property (readonly) NSString *fontName;
@property (readonly) CGFloat fontSize;
@property (readonly) BOOL wrapped;
@property (readonly) CGFloat flatness;
@property (readonly) CGFloat chamferRadius;
@property (readonly) NSString *alignmentMode;

@end
