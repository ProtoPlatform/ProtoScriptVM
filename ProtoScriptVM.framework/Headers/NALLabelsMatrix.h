//
//  NALLabelsMatrix.h
//
//  Created by neeks on 04/02/14.
//  Copyright (c) 2014 neeks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyLayout.h"

@interface NALLabelsMatrix : UIView /*MyLinearLayout */ {
    MyLinearLayout *view;
    NSArray *columnsWidths;
    uint numRows;
    uint rowMax;
    uint dy;
    UIFont *font;
    UIColor *textColor;
    NSTextAlignment alignment;
}

- (id)initWithFrame:(CGRect)frame andColumnsWidths:(NSArray*)columns;
- (void)setColumnsWidths:(NSArray*)columns;
- (void)setFont:(UIFont *)aFont;
- (void)setFontColor:(UIColor *)fontColor;
- (void)setTextAlignment:(NSTextAlignment)textAlignment;
-(void)setRowMax:(uint) rowMax;
- (void)addRecord:(NSArray*)record;
- (void)clearMatrix;
@end
