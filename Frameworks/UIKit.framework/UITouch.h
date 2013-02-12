/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIView, UIWindow;

@interface UITouch : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isWarped : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
    NSMutableArray *_gestureRecognizers;
    UIView *_gestureView;
    } _locationInWindow;
    NSInteger _phase;
    } _previousLocationInWindow;
    NSInteger _savedPhase;
    NSUInteger _tapCount;
    double _timestamp;
    } _touchFlags;
    UIView *_view;
    UIWindow *_window;
}

@property(retain) UIView *gestureView;
@property(retain) UIView *view;
@property(retain,readonly) UIView *view;
@property(retain) UIWindow *window;
@property(retain,readonly) UIWindow *window;
@property BOOL isTap;
@property BOOL isWarped;
@property NSInteger phase;
@property(readonly) NSInteger phase;
@property BOOL sentTouchesEnded;
@property NSUInteger tapCount;
@property(readonly) NSUInteger tapCount;
@property double timestamp;
@property(readonly) double timestamp;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(NSInteger)arg2 view:(id)arg3;

- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_gestureRecognizers;
- (BOOL)_isFirstTouchForView;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (id)_mk_delayedCopy;
- (void)_popPhase;
- (void)_pushPhase:(NSInteger)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (BOOL)_touchesBeganWasDelayed;
- (void)dealloc;
- (id)description;
- (id)gestureRecognizers;
- (id)gestureView;
- (NSInteger)info;
- (BOOL)isDelayed;
- (BOOL)isTap;
- (BOOL)isWarped;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (NSInteger)phase;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (BOOL)sentTouchesEnded;
- (void)setGestureView:(id)arg1;
- (void)setIsDelayed:(BOOL)arg1;
- (void)setIsTap:(BOOL)arg1;
- (void)setIsWarped:(BOOL)arg1;
- (void)setPhase:(NSInteger)arg1;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (void)setTapCount:(NSUInteger)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (void)setWindow:(id)arg1;
- (NSUInteger)tapCount;
- (double)timestamp;
- (id)view;
- (id)window;

@end
