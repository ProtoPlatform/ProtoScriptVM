//
//  P3DShader.h
#import "P3DPrimitive.h"

@interface P3DShader : NSObject
-(id) initWithShader:(SCNTechnique *)shader;
@property (readonly) SCNTechnique *shader;
@end
