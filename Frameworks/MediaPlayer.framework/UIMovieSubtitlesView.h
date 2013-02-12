/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface UIMovieSubtitlesView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _sizeIsDirty : 1;
    id _delegate;
    NSString *_markup;
    } _markupSize;
    } _padding;
    BOOL _subtitlesAreForced;
}

@property(readonly) BOOL subtitlesAreForced; /* unknown property attribute: V_subtitlesAreForced */

- (id)_createMarkupFromAttributedString:(struct __CFAttributedString { }*)arg1;
- (id)_htmlColorForColor:(struct CGColor { }*)arg1;
- (void)clearSubtitle;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })padding;
- (void)setDelegate:(id)arg1;
- (void)setPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubtitleString:(struct __CFAttributedString { }*)arg1 forced:(BOOL)arg2;
- (void)sizeToFitWidth:(float)arg1;
- (BOOL)subtitlesAreForced;

@end
