/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPDetailSlider, MPItem, MPOverlayPushButton, UIActivityIndicatorView, UIImageView, UILabel, UITextLabel, UIView;

@interface MPPortraitControlsOverlay : UIImageView {
    unsigned int _wantsTick : 1;
    unsigned int _geniusButtonDisabled : 1;
    unsigned int _rewindButtonDisabled : 1;
    unsigned int _playbackSpeedButtonDisabled : 1;
    unsigned int _mailButtonDisabled : 1;
    unsigned int _mailButtonHidden : 1;
    unsigned int _useMediaDetailSlider : 1;
    unsigned int _detailScrubbing : 1;
    unsigned int _layoutStyle : 3;
    UIActivityIndicatorView *_activityIndicator;
    id _delegate;
    MPOverlayPushButton *_geniusButton;
    MPItem *_item;
    MPOverlayPushButton *_mailButton;
    MPOverlayPushButton *_playbackSpeedButton;
    MPDetailSlider *_progressControl;
    double _progressOffset;
    MPOverlayPushButton *_repeatButton;
    MPOverlayPushButton *_rewindButton;
    UIView *_rewindButtonBezel;
    UILabel *_scrubInstructionLabel;
    UIImageView *_scrubInstructionOverlay;
    UILabel *_scrubSpeedLabel;
    float _seekedToValue;
    MPOverlayPushButton *_shuffleButton;
    double _tickInterval;
    UITextLabel *_trackInfoLabel;
    NSUInteger _visibleParts;
}

@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property id delegate; /* unknown property attribute: V_delegate */

- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (id)_createButtonWithImage:(id)arg1 action:(SEL)arg2;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_geniusButton:(id)arg1;
- (id)_geniusButtonImage:(NSUInteger)arg1;
- (void)_handleGeniusButtonClick;
- (void)_initializeControls;
- (void)_mailButton:(id)arg1;
- (id)_mailButtonImage;
- (void)_playbackSpeedButton:(id)arg1;
- (void)_repeatButton:(id)arg1;
- (id)_repeatButtonImage;
- (NSUInteger)_repeatType;
- (void)_resetGeniusButtonImages;
- (void)_resetStateAfterSliderTrackingDone:(id)arg1;
- (void)_rewindButton:(id)arg1;
- (void)_scrubInstructionOverlayAnimationDidEnd;
- (void)_setCurrentTime:(double)arg1;
- (void)_shuffleButton:(id)arg1;
- (id)_shuffleButtonImage;
- (BOOL)_shuffleIsOn;
- (NSUInteger)_shuffleType;
- (void)_tickNotification:(id)arg1;
- (void)_updateButtonVisibility;
- (void)_updateForPlaybackSpeed;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)delegate;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(NSInteger)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)init;
- (id)item;
- (void)layoutSubviews;
- (void)layoutSubviews_Short;
- (void)layoutSubviews_Tall;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadView;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (NSUInteger)visibleParts;

@end
