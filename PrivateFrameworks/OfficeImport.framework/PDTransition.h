/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;

@interface PDTransition : OADProperties {
    NSInteger mAdvanceAfterTime;
    BOOL mHasAdvanceAfterTime;
    BOOL mHasAdvanceOnClick;
    BOOL mHasSpeed;
    BOOL mHasType;
    BOOL mIsAdvanceOnClick;
    PDTransitionOptions *mOptions;
    NSInteger mSpeed;
    NSInteger mType;
}

- (NSInteger)advanceAfterTime;
- (void)dealloc;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasSpeed;
- (BOOL)hasTransitionOptions;
- (BOOL)hasType;
- (id)init;
- (BOOL)isAdvanceOnClick;
- (id)options;
- (void)setAdvanceAfterTime:(NSInteger)arg1;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)setSpeed:(NSInteger)arg1;
- (void)setType:(NSInteger)arg1;
- (NSInteger)speed;
- (NSInteger)type;

@end
