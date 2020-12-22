//
//  P3DMaterial.h
#import <Foundation/Foundation.h>
#import <SceneKit/SceneKit.h>

@interface P3DMaterial : NSObject
@property (readonly,strong) SCNMaterial *material;
+(P3DMaterial *) materialWithColor:(UIColor *)color;
+(P3DMaterial *) materialWithTexture:(UIImage *)image;
-(P3DMaterial *) initWithMaterial:(SCNMaterial *)material;
- (P3DMaterial *)setCurrentMaterialTexture:(UIImage *)image;
- (P3DMaterial *)setCurrentMaterialColor:(UIColor *)color;
@end
