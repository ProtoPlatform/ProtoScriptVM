//
//  P3DAction.h
#import "P3DPrimitive.h"

@interface P3DAction : NSObject
-(id) initWithAction:(SCNAction *)action;
@property (readonly) SCNAction *action;
@end
