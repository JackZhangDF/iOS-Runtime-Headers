/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSString;

@interface RTFNSFont : NSObject {
    NSString *_fontName;
    float _fontSize;
    float _pointSize;
}

@property float pointSize; /* unknown property attribute: V_pointSize */
@property float fontSize; /* unknown property attribute: V_fontSize */
@property(retain) NSString *fontName; /* unknown property attribute: V_fontName */

+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)systemFontOfSize:(float)arg1;
+ (id)userFixedPitchFontOfSize:(float)arg1;
+ (id)userFontOfSize:(float)arg1;

- (id)fontName;
- (float)fontSize;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (NSUInteger)mostCompatibleStringEncoding;
- (float)pointSize;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setPointSize:(float)arg1;

@end
