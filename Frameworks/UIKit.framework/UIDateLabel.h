/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDateLabel : UILabel {
    BOOL _boldForAllLocales;
    double _date;
    NSInteger _dateKey;
}

@property BOOL boldForAllLocales; /* unknown property attribute: V_boldForAllLocales */

+ (id)defaultFont;

- (NSInteger)_dateKey;
- (void)_invalidateDateKey;
- (void)_updateDateStrings;
- (BOOL)boldForAllLocales;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBoldForAllLocales:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontWithoutInvalidation:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)sizeToFit;
- (id)text;
- (id)timeDesignator;
- (id)timeDesignatorFont;
- (double)timeInterval;

@end
