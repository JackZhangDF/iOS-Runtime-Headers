/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABModel;

@interface ABAbstractViewController : UIViewController {
    ABModel *_model;
}

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)behavior;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)initWithModel:(id)arg1;
- (id)model;
- (id)peoplePickerNavigationController;
- (void)setParentViewController:(id)arg1;
- (void)updateNavigationButtons;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
