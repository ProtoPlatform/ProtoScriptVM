//
//  PUIView.h
//  ProtoScriptVM
//
//  Created by dev on 10/13/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface PUIView : UIView
@property (nonatomic,strong) NSString *viewId;
@property (nonatomic,strong) NSString *symbol;
+(instancetype)HStack;
+(instancetype)VStack;
+(instancetype)ZStack;
-(instancetype)initWithViewID:(NSString *)viewID andSymbolBinding:(NSString *)symbol;
-(BOOL)isRootView;
-(BOOL)isSubView;
@end

@interface PUIHStack : MyLinearLayout
@property (nonatomic,strong) NSString *viewId;
@property (nonatomic,strong) NSString *symbol;
-(instancetype)initWithViewID:(NSString *)viewID andSymbolBinding:(NSString *)symbol;
-(BOOL)isRootView;
-(BOOL)isSubView;
@end
@interface PUIVStack : MyLinearLayout
@property (nonatomic,strong) NSString *viewId;
@property (nonatomic,strong) NSString *symbol;
-(instancetype)initWithViewID:(NSString *)viewID andSymbolBinding:(NSString *)symbol;
-(BOOL)isRootView;
-(BOOL)isSubView;
@end
@interface PUIZStack : MyFrameLayout
@property (nonatomic,strong) NSString *viewId;
@property (nonatomic,strong) NSString *symbol;
-(instancetype)initWithViewID:(NSString *)viewID andSymbolBinding:(NSString *)symbol;
-(BOOL)isRootView;
-(BOOL)isSubView;
@end

NS_ASSUME_NONNULL_END
