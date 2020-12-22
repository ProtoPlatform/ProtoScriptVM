//
//  pense_helper.h
//  pense
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//free the return value after use
char *const luaMethodNameFromSelector(SEL selector);
SEL objcSelectorFromLuaMethodName(const char *luaName);

//free the return value after use
char *objcPropertyFromSetter(SEL setter);

//DO NOT free the return value after use
const char *objcPropertyFromGetter(SEL setter);

//free the return value after use
char *objcIvarNameFromPropertyName(const char *propertyName);

SEL objcSetterForProperty(const char *propertyName);
SEL objcGetterForProperty(const char *propertyName);

BOOL objcSelectorIsLikelyAGetter(SEL selector);
BOOL objcSelectorIsLikelyASetter(SEL selector);

BOOL classHasProperty(Class klass, const char *propertyName);

//return value need to be freed
char *methodTypeDescriptionFromLuaMethodName(const char *luaName);

int structBytesFromTypeDescription(const char *typeDescription);

BOOL isInitMethod(const char *methodName);
BOOL isInitSelector(SEL sel);

@interface QNString : NSString
@end
@interface QNUIImage : UIImage
@end
@interface QNUIView : UIView
@end
@interface QNUIColor : UIColor
@end
@interface QNObject : NSObject
@end

