/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraFocusView, UIView;

@interface PLPreviewView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _canShowFocus : 1;
    PLCameraFocusView *_autoFocusView;
    UIView *_disabledView;
    PLCameraFocusView *_focusView;
    } _touchLocation;
}

- (void)_focusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (void)focusDidEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)motionEnded:(NSInteger)arg1 withEvent:(id)arg2;
- (void)removeFocusView;
- (void)setDontShowFocus:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)showAutofocusView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
