/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch;

@interface UITouchData : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSUInteger lastTapCount;
    UITouch *lastTouch;
    double lastTouchDownTimestamp;
    double lastTouchUpTimestamp;
    } startTouchDownLocation;
    BOOL touchIsValidTap;
}

@end
