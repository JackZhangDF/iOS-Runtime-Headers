/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDChartFrame, EDChartLegendFrame, EDChartPlot, NSArray;

@interface EDChart : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    EDChartLegendFrame *mChartLegendFrame;
    EDChartFrame *mChartParentFrame;
    BOOL mIsDate1904;
    double mMaxY;
    double mMinY;
    EDChartPlot *mPrimaryChartPlot;
    EDChartPlot *mSecondaryChartPlot;
    NSArray *mSeriesData;
    } mSize;
    EDChartFrame *mTitle;
}

- (id)chartLegendFrame;
- (id)chartParentFrame;
- (id)chartPlotFrame;
- (void)dealloc;
- (id)init;
- (BOOL)isDate1904;
- (double)maxY;
- (double)minY;
- (id)primaryChartPlot;
- (id)secondaryChartPlot;
- (NSUInteger)seriesCount;
- (id)seriesData;
- (void)setChartLegendFrame:(id)arg1;
- (void)setChartParentFrame:(id)arg1;
- (void)setChartTitle:(id)arg1;
- (void)setDate1904:(BOOL)arg1;
- (void)setPrimaryChartPlot:(id)arg1;
- (void)setSecondaryChartPlot:(id)arg1;
- (void)setSeriesData:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)title;

@end
