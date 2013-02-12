/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class MFMailComposeViewController, NSDictionary, NSMutableArray, NSURL, SULocationObserver, SUSectionController, SUTabBarController, UIWindow;

@interface SUApplication : UIApplication <SUSectionControllerDelegate, SUStorePageViewControllerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate, MFMailComposeViewControllerDelegate> {
    NSInteger _delayTerminateCount;
    BOOL _dontSaveNavigationPath;
    NSURL *_launchURL;
    SULocationObserver *_locationObserver;
    NSMutableArray *_longLivedViewControllers;
    MFMailComposeViewController *_mailComposeViewController;
    NSInteger _requiredAssetTypes;
    SUSectionController *_sectionController;
    NSDictionary *_storeFrontLanguages;
    SUTabBarController *_tabBarController;
    UIWindow *_window;
}

@property(readonly) SUTabBarController *tabBarController; /* unknown property attribute: V_tabBarController */
@property NSInteger requiredAssetTypes; /* unknown property attribute: V_requiredAssetTypes */
@property(retain) NSURL *launchURL; /* unknown property attribute: V_launchURL */
@property(readonly) NSString *defaultPNGNameForSuspend;
@property(readonly) SUPurchaseManager *purchaseManager;
@property(readonly) UINavigationController *topNavigationController;
@property(getter=isDelayingTerminate,readonly) BOOL delayingTerminate;
@property(readonly) NSInteger statusBarStyleForSuspend;

+ (void)loadMessageUIIfNecessary;

- (void)_bagDidLoadNotification:(id)arg1;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_presentSectionFetchUI;
- (id)_resumableViewController;
- (void)_saveArchivedNavigationPath;
- (id)_sectionController;
- (void)_setupUI;
- (void)_showAssetTypeLockoutUI;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)_teardownUI;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationResume:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (void)beginDelayingTerminate;
- (void)beginPPTWithName:(id)arg1;
- (void)checkInLongLivedViewController:(id)arg1;
- (void)checkOutLongLivedViewController:(id)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (BOOL)composeReviewWithURL:(id)arg1 itemIdentifier:(unsigned long long)arg2 assetType:(NSInteger)arg3;
- (id)createPlaceholderViewController;
- (id)createWindow;
- (void)dealloc;
- (id)defaultPNGNameForSuspend;
- (void)endCurrentPPT;
- (void)endDelayingTerminate;
- (BOOL)enterAccountFlowWithURL:(id)arg1 style:(NSInteger)arg2 continuationData:(id)arg3;
- (BOOL)gotoStoreURL:(id)arg1 withAuthentication:(BOOL)arg2;
- (void)handleExternalURL:(id)arg1;
- (id)init;
- (BOOL)isComposingEmail;
- (BOOL)isDelayingTerminate;
- (id)launchURL;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (BOOL)openURL:(id)arg1 inClientApplication:(id)arg2;
- (id)placeholderViewControllerForStorePageController:(id)arg1;
- (BOOL)popTopViewController;
- (id)purchaseManager;
- (void)reloadForNetworkTypeChange;
- (void)reloadForStorefrontChange;
- (NSInteger)requiredAssetTypes;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)runTestInvocation:(id)arg1;
- (void)sectionController:(id)arg1 failedWithError:(id)arg2;
- (void)sectionControllerFinished:(id)arg1;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setRequiredAssetTypes:(NSInteger)arg1;
- (void)setupUI;
- (NSInteger)statusBarStyleForSuspend;
- (id)storeContentLanguage;
- (void)suspendAfterDialogsDismissed;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (id)tabBarController;
- (id)topNavigationController;

@end
