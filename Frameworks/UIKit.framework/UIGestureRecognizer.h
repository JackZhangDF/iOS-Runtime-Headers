/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableSet, UIEvent, UIView;

@interface UIGestureRecognizer : NSObject {
    struct { 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int exclusive : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
    SEL _action;
    NSMutableArray *_delayedTouches;
    NSMutableSet *_friends;
    } _gestureFlags;
    NSMutableSet *_obstacles;
    NSInteger _state;
    id _target;
    UIEvent *_updateEvent;
    UIView *_view;
    NSMutableSet *_vultures;
}

@property SEL action; /* unknown property attribute: V_action */
@property id target; /* unknown property attribute: V_target */
@property(readonly) UIView *view;
@property BOOL cancelsTouchesInView;
@property BOOL delaysTouchesBegan;
@property BOOL delaysTouchesEnded;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isExclusive) BOOL exclusive;
@property NSInteger state;

+ (BOOL)_delaysDirtyReset;
+ (void)_setDelaysDirtyReset:(BOOL)arg1;

- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addBlockedGesture:(id)arg1;
- (BOOL)_affectedByGesture:(id)arg1;
- (void)_blockingGestureDidComplete:(id)arg1;
- (id)_blockingGestures;
- (BOOL)_canFinishDelayedTouch:(id)arg1;
- (void)_clearDelayedTouches;
- (void)_clearUpdateTimer;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_delayedUpdateGesture;
- (NSInteger)_depthFirstViewCompare:(id)arg1;
- (id)_descriptionIncludingDependencies:(BOOL)arg1;
- (id)_desriptionForDependencies:(id)arg1;
- (void)_enqueueDelayedTouchesToSend;
- (void)_invalidate;
- (BOOL)_isBlockingOtherGestures;
- (BOOL)_isDelayingTouch:(id)arg1;
- (BOOL)_isExcludedFromGestures:(id)arg1;
- (BOOL)_isRecognized;
- (BOOL)_isWaitingForGesturesToFail;
- (BOOL)_refusesMoreTouches;
- (void)_removeBlockedGesture:(id)arg1;
- (void)_resetIfDirty;
- (void)_resetIfFinished;
- (void)_setDirty;
- (BOOL)_shouldSaveGestureFromExclusion:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (void)_updateGestureStateWithEvent:(id)arg1 afterDelay:(BOOL)arg2;
- (void)_updateGestureWithEvent:(id)arg1;
- (SEL)action;
- (void)addFriendGesture:(id)arg1;
- (BOOL)cancelsTouchesInView;
- (struct CGPoint { float x1; float x2; })centroidOfTouches:(id)arg1;
- (void)dealloc;
- (id)delayedTouchForTouch:(id)arg1;
- (BOOL)delaysTouchesBegan;
- (BOOL)delaysTouchesEnded;
- (id)description;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabled;
- (BOOL)isExclusive;
- (BOOL)isFriendWithGesture:(id)arg1;
- (void)requireOtherGestureToFail:(id)arg1;
- (void)reset;
- (void)setAction:(SEL)arg1;
- (void)setCancelsTouchesInView:(BOOL)arg1;
- (void)setDelaysTouchesBegan:(BOOL)arg1;
- (void)setDelaysTouchesEnded:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExclusive:(BOOL)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setTarget:(id)arg1;
- (void)setView:(id)arg1;
- (NSInteger)state;
- (id)target;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)view;

@end
