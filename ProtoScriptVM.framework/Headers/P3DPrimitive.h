//
//  P3DPrimitive.h
#import <Foundation/Foundation.h>
#import <SceneKit/SceneKit.h>
#import "P3DSCNView.h"
@interface P3DPrimitive : SCNNode {
}
@property (readwrite, nonatomic) NSString* uuid;
@property (readwrite, nonatomic) P3DSCNView* parentP3DScene;
@property (readwrite, nonatomic) NSMutableArray *ecsComponents;
@property (readwrite, nonatomic) SCNGeometry* selectedGeometry;
@property (readwrite, nonatomic) SCNMaterial* selectedMaterial;
@property (readwrite, nonatomic) SCNMaterial* currentMaterial;
- (UIColor *)randomColor;
- (UIColor *)randomColorWithRandomAlpha;
- (P3DPrimitive *)setCurrentMaterialTexture:(UIImage *)image;
- (P3DPrimitive *)setCurrentMaterialColor:(UIColor *)color;
@end

