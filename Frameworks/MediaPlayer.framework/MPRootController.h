/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPRootControllerDelegate>, MPItem, MPTransitionController, MPViewController, UIView;

@interface MPRootController : NSObject {
    UIView *_backstop;
    <MPRootControllerDelegate> *_delegate;
    struct __CFBag { } *_ignoredChangeTypes;
    MPItem *_item;
    NSInteger _orientation;
    MPItem *_pendingItem;
    MPItem *_pendingItemWithDifferentType;
    NSInteger _pendingOrientation;
    MPTransitionController *_transitionController;
    MPViewController *_viewController;
}

@property(retain) MPViewController *viewController; /* unknown property attribute: V_viewController */
@property NSInteger orientation; /* unknown property attribute: V_orientation */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property <MPRootControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain,readonly) UIView *rootView;
@property(getter=isTransitioning,readonly) BOOL transitioning;

- (void)_beginIgnoringChangeTypes:(NSUInteger)arg1;
- (void)_endIgnoringChangeTypes:(NSUInteger)arg1;
- (BOOL)_noteStoppedIgnoringChangeType:(NSUInteger)arg1;
- (void)_performTransition:(id)arg1 toController:(id)arg2;
- (void)_reloadForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)_reloadForTransitionFromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 animate:(BOOL)arg3;
- (void)_setCurrentViewController:(id)arg1 forTransition:(BOOL)arg2;
- (BOOL)_shouldIgnoreChangeType:(NSUInteger)arg1;
- (void)_transitionFinished:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithItem:(id)arg1 orientation:(NSInteger)arg2;
- (BOOL)isTransitioning;
- (id)item;
- (NSInteger)orientation;
- (void)reloadView;
- (id)rootView;
- (void)setAppearing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(NSInteger)arg1 animate:(BOOL)arg2;
- (void)setOrientation:(NSInteger)arg1;
- (void)setOrientationWithoutTransition:(NSInteger)arg1;
- (void)setViewController:(id)arg1;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(NSUInteger)arg2;
- (void)viewController:(id)arg1 endIgnoringChangeType:(NSUInteger)arg2;
- (id)viewController;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
