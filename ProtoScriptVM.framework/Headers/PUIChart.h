//
//  PUIChart.h
//  ProtoScriptVM
//
//  Created by dev on 10/30/20.
//  Copyright © 2020 Brian Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PUIView.h"
#import "MyLayout/MyLayout.h"
@import Charts;

NS_ASSUME_NONNULL_BEGIN

typedef  NS_ENUM(NSInteger,PUIChartType) {
    PUIChartTypeGeneric = 0,
    PUIChartTypeLine = 1,
    PUIChartTypeBar = 2,
    PUIChartTypeBarLine = 3,
    PUIChartTypeHorizontalBar = 4,
    PUIChartTypeBubble = 5,
    PUIChartTypePie = 6,
    PUIChartTypeRadar = 7,
    PUIChartTypeScatter = 8,
    PUIChartTypeCandleStick = 9,
    PUIChartTypeCombined = 10
};
typedef  NS_ENUM(NSInteger,PUIChartAxisType) {
    PUIChartAxisTypeUnknown = 0,
    PUIChartAxisTypeLeft = 1,
    PUIChartAxisTypeRight = 2
};
typedef  NS_ENUM(NSInteger,PUIChartLegendFormType) {
    PUIChartLegendFormTypeNone = 0,
    PUIChartLegendFormTypeLine = 1,
    PUIChartLegendFormTypeCircle = 2,
    PUIChartLegendFormTypeSquare = 3,
    PUIChartLegendFormTypeEmpty = 4,
    PUIChartLegendFormTypeDefault = 5
};
typedef  NS_ENUM(NSInteger,PUIChartLegendDirectionType) {
    PUIChartLegendDirectionTypeLeftToRight = 0,
    PUIChartLegendDirectionTypeRightToLeft = 1,
};
typedef  NS_ENUM(NSInteger,PUIChartLegendPositionType) {
    PUIChartLegendPositionTypeLeftOfChart = 0,
    PUIChartLegendPositionTypeRightOfChart = 1,
    PUIChartLegendPositionTypeAboveChartLeft = 2,
    PUIChartLegendPositionTypeAboveChartRight = 3,
    PUIChartLegendPositionTypeAboveChartCenter = 4,
    PUIChartLegendPositionTypeBelowChartLeft = 5,
    PUIChartLegendPositionTypeBelowChartRight = 6,
    PUIChartLegendPositionTypeBelowChartCenter = 7,
    PUIChartLegendPositionTypeLeftOfChartCenter = 8,
    PUIChartLegendPositionTypeLeftOfChartInside = 9,
    PUIChartLegendPositionTypeRightOfChartCenter = 10,
    PUIChartLegendPositionTypeRightOfChartInside = 11,
    PUIChartLegendPositionTypePiechartCenter = 12,
};

@interface PUIChart : UIView
@property (assign)  PUIChartType   chartType;
@property (nonatomic,strong)  ChartViewBase *   _Nullable chartView;
@property (nonatomic,strong)  NSMutableArray *   _Nullable dataSetNames;
-(instancetype)initWithType:(PUIChartType) theChartType;
-(void)setType:(PUIChartType) theChartType;
-(void)setFrame:(CGRect)frame;
-(void)setChartLabel:(NSString *)label;
-(void)finalizeChart;
-(void)addDataSet:(NSString *)dataSetName;
-(void)addData:(NSDictionary *)data;
-(void)resetData;
-(void)addLimitLineWithLimit:(CGFloat)limit andLabel:(NSString *)label andLineColor:(UIColor *)lineColor andLineWidth:(CGFloat)lineWidth andTextColor:(UIColor *)textColor andFont:(UIFont *)theFont onAxis:(PUIChartAxisType)axis;
-(void)onDestroy;
@end

NS_ASSUME_NONNULL_END
