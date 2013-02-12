/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABEditorModel, ABItemLabelPicker, NSArray;

@interface ABLabelPickerViewController : UIViewController {
    NSArray *_additionalLabels;
    id _delegate;
    ABItemLabelPicker *_labelPicker;
    ABEditorModel *_model;
    NSInteger _property;
}

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; NSInteger x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })fullScreenContentSize;
- (id)initWithModel:(id)arg1 additionalLabels:(id)arg2 property:(NSInteger)arg3;
- (void)itemLabelPicker:(id)arg1 dismissSimpleTextInputLayer:(id)arg2 afterSelectionConfirmed:(BOOL)arg3;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (id)itemLabelPickerPresentSimpleTextInputLayerWithContext:(id)arg1;
- (BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (id)labelPicker;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
