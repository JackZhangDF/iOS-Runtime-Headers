/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDChartPlot, NSString;

@interface EMChartPlotMapper : CMMapper {
    NSString *mChartTypeName;
    EDChartPlot *mEdPlot;
}

- (void)addSeriesToDescription:(id)arg1 withSeries:(id)arg2 index:(NSInteger)arg3 hasDatesAsCategories:(BOOL)arg4 hasDatesAsValues:(BOOL)arg5 state:(id)arg6;
- (id)chartPlotToString;
- (id)initWithEdChartPlot:(id)arg1 parent:(id)arg2;

@end
