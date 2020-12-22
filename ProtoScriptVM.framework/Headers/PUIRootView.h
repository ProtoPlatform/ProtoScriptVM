//
//  PUIRootView.h
//  ProtoScriptVM
//
//  Created by dev on 10/13/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PUIView.h"
NS_ASSUME_NONNULL_BEGIN

@interface PUIRootView : NSObject
@property (nonatomic,strong) NSString *viewId;
@property(nonatomic, strong) UIView *view;
@property (nonatomic,strong) NSString *symbol;
@property (nonatomic,strong) NSMutableDictionary *viewObjects;
-(instancetype)initWithViewID:(NSString *)viewID andSymbolBinding:(NSString *)symbol andWithLayout:(PUIView *)layout;
-(BOOL)addPUIView:(PUIView *)aView;
-(BOOL)removePUIView:(PUIView *)aView;
-(BOOL)removePUIViewWithSymbol:(NSString *)symbol;
-(BOOL)removeAllPUIViews;
-(void)setupViewDefaults;
-(BOOL)isRootView;
-(BOOL)isSubView;
-(PUIView *)PUIViewForSymbol:(NSString *)symbol;
-(void)clearAllSubviews;
@end

NS_ASSUME_NONNULL_END
