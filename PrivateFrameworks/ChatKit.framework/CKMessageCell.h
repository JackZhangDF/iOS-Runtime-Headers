/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKBalloonView, UIButton;

@interface CKMessageCell : UITableViewCell {
    CKBalloonView *_balloonView;
    float _bottomPadding;
    UIButton *_failedButton;
    id _replacementMessageBubbleData;
    float _topPadding;
}

@property(retain) id replacementMessageBubbleData; /* unknown property attribute: V_replacementMessageBubbleData */
@property(readonly) CKBalloonView *balloonView; /* unknown property attribute: V_balloonView */

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;

- (void)_failPressed:(id)arg1;
- (id)_multiselectBackgroundColor;
- (void)_resetBalloonFrame;
- (void)addBalloonView:(id)arg1;
- (id)balloonView;
- (void)dealloc;
- (void)didTapBalloon:(id)arg1;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)replacementMessageBubbleData;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFailed:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setReplacementMessageBubbleData:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;

@end
