/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UIView<UITextSelectingContainer>;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    UIView<UITextSelectingContainer> *_containerView;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    UIDelayedAction *_secondDelayTimer;
    id _userData;
}

@property id userData; /* unknown property attribute: V_userData */
@property(readonly) BOOL secondDelayElapsed; /* unknown property attribute: V_secondDelayElapsed */
@property double secondDelay; /* unknown property attribute: V_secondDelay */
@property UIView<UITextSelectingContainer> *containerView; /* unknown property attribute: V_containerView */

- (void)clearTimer;
- (id)containerView;
- (void)reset;
- (double)secondDelay;
- (void)secondDelayElapsed:(id)arg1;
- (BOOL)secondDelayElapsed;
- (void)setContainerView:(id)arg1;
- (void)setSecondDelay:(double)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setUserData:(id)arg1;
- (void)startTimer;
- (id)userData;

@end
