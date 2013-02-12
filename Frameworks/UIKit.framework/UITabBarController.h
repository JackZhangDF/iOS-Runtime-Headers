/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITabBarControllerDelegate>, NSArray, NSMutableArray, UINavigationController, UITabBar, UIView, UIViewController;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
    struct { 
        unsigned int isShowingMoreItem : 1; 
        unsigned int needsToRebuildItems : 1; 
        unsigned int isBarHidden : 1; 
        unsigned int editButtonOnLeft : 1; 
    UIView *_containerView;
    NSArray *_customizableViewControllers;
    <UITabBarControllerDelegate> *_delegate;
    UINavigationController *_moreNavigationController;
    UIViewController *_selectedViewController;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UITabBar *_tabBar;
    } _tabBarControllerFlags;
    id _tabBarItemsToViewControllers;
    UIViewController *_transientViewController;
    UIView *_viewControllerTransitionView;
    NSMutableArray *_viewControllers;
}

@property <UITabBarControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(copy) NSArray *customizableViewControllers; /* unknown property attribute: V_customizableViewControllers */
@property(readonly) UINavigationController *moreNavigationController;
@property UIViewController *selectedViewController;
@property(readonly) UITabBar *tabBar;
@property(copy) NSArray *viewControllers;
@property NSUInteger selectedIndex;

- (BOOL)_allowSelectionWithinMoreList;
- (BOOL)_allowsAutorotation;
- (BOOL)_allowsCustomizing;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(NSInteger)arg1;
- (void)_ensureSelectedViewControllerIsDisplayed;
- (id)_existingMoreNavigationController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (BOOL)_isBarHidden;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (void)_prepareTabBar;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)_rebuildTabBarItemsAnimated:(BOOL)arg1;
- (id)_selectedViewControllerInTabBar;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldUseOnePartRotation;
- (void)_tabBarItemClicked:(id)arg1;
- (id)_transitionView;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (id)_viewControllersInTabBar;
- (id)allViewControllers;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)beginCustomizingTabBar:(id)arg1;
- (void)concealTabBarSelection;
- (id)customizableViewControllers;
- (void)dealloc;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)hideBarWithTransition:(NSInteger)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moreNavigationController;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)revealTabBarSelection;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (NSUInteger)selectedIndex;
- (id)selectedNavigationController;
- (id)selectedViewController;
- (void)setCustomizableViewControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setShowsEditButtonOnLeft:(BOOL)arg1;
- (void)setTabBar:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setTransientViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)showBarWithTransition:(NSInteger)arg1;
- (BOOL)showsEditButtonOnLeft;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (id)tabBar;
- (id)transientViewController;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(NSInteger)arg3 shouldSetSelected:(BOOL)arg4;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
