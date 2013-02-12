/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPickerControllerInternal;

@interface MPMediaPickerController : UIViewController {
    MPMediaPickerControllerInternal *_internal;
}

@property <MPMediaPickerControllerDelegate> *delegate;
@property(copy) NSString *prompt;
@property BOOL allowsPickingMultipleItems;
@property(readonly) NSInteger mediaTypes;

- (void)_applicationWillTerminate:(id)arg1;
- (void)_invalidateReplyPort;
- (void)_moveLayerHostToLayer:(id)arg1;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_serverPortInvalidated;
- (void)_viewDidMoveToWindow;
- (void)_viewWillMoveFromWindow;
- (BOOL)allowsPickingMultipleItems;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithMediaTypes:(NSInteger)arg1;
- (void)loadView;
- (NSInteger)mediaTypes;
- (id)prompt;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)viewDidUnload;

@end
