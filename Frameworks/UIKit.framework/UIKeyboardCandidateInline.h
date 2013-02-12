/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSString, NSTimer, UIAutocorrectInlinePrompt, UIImage, UIImageView, UIKeyboardCandidateSafetyNetVie, UIKeyboardGenericKeyView, UILabel, UIScroller, UIView;

@interface UIKeyboardCandidateInline : UIView <UIKeyboardCandidateList> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _alwaysShowBackground;
    BOOL _animating;
    UIImage *_backgroundImage;
    UIImage *_backgroundTopImage;
    NSMutableArray *_candidateLines;
    NSArray *_candidates;
    BOOL _caretVisible;
    BOOL _caretblinking;
    UIImageView *_closeButton;
    } _closeButtonFrame;
    UIImageView *_controlsView;
    NSUInteger _currentCandidateIndex;
    NSUInteger _currentPageIndex;
    NSTimer *_deferredLayoutTimer;
    id _delegate;
    } _draggingStartOffset;
    BOOL _forMobileNotes;
    } _frame;
    } _inlineCandidateFrame;
    } _inlineRect;
    NSString *_inlineText;
    UILabel *_inlineTextLabel;
    UIAutocorrectInlinePrompt *_inlineView;
    BOOL _landscape;
    NSUInteger _lazyLayoutNextCandidateIndex;
    float _lazyLayoutNextOriginY;
    NSUInteger _lineHeight;
    UIKeyboardGenericKeyView *_nextPageButton;
    NSUInteger _numCandidates;
    NSUInteger _numColumns;
    NSInteger _orientation;
    UIKeyboardGenericKeyView *_prevPageButton;
    NSInteger _promptTextType;
    UIScroller *_scrollView;
    BOOL _selectedInAll;
    UIView *_shadowView;
    BOOL _showControls;
    BOOL _showScroller;
    BOOL _showingAll;
    UIKeyboardGenericKeyView *_subviewButton;
    } _windowFrame;
    } m_caretRect;
    BOOL m_caretShowingNow;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UIKeyboardCandidateSafetyNetVie *m_landscapeSafetyNetView;
    BOOL m_showingCompletions;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (void)_adjustFrameSizeForCandidateLines:(NSInteger)arg1;
- (void)_animateInlineCandidate;
- (void)_clearInlineCandidate;
- (void)_fadeInlineCandidate;
- (void)_hideBackground;
- (BOOL)_layoutNextLine;
- (void)_periodicLayoutNextPage:(id)arg1;
- (void)_setInlineText:(id)arg1;
- (void)_showBackground;
- (void)_startBackgroundLayoutIfNeeded;
- (void)_stopBackgroundLayout;
- (void)adjustForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(NSInteger)arg2;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)cancelButtonSelected:(id)arg1;
- (void)candidateAcceptedAtIndex:(NSUInteger)arg1;
- (id)candidateAtIndex:(NSUInteger)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)cellSelected:(id)arg1;
- (void)clearLayout;
- (void)configureKeyboard:(id)arg1;
- (NSUInteger)count;
- (id)currentCandidate;
- (NSUInteger)currentIndex;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)ignoresMouseEvents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)inlineCandidateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)inlineCandidateClicked:(id)arg1;
- (void)installLandscapeSafetyNetView;
- (void)layout;
- (void)layoutOneCandidateAtIndex:(NSUInteger)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (void)nextPageButtonSelected:(id)arg1;
- (void)obsoleteCandidates;
- (NSInteger)orientation;
- (void)prevPageButtonSelected:(id)arg1;
- (void)removeLandscapeSafetyNetView;
- (id)rotatingContentViewForWindow:(id)arg1;
- (struct CGPoint { float x1; float x2; })scroller:(id)arg1 adjustSmoothScrollEnd:(struct CGPoint { float x1; float x2; })arg2 velocity:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)scroller:(id)arg1 shouldAdjustSmoothScrollEndForVelocity:(struct CGSize { float x1; float x2; })arg2;
- (void)scrollerDidEndAnimatedScrolling:(id)arg1;
- (void)scrollerDidEndDragging:(id)arg1 willSmoothScroll:(BOOL)arg2;
- (void)scrollerWillStartDragging:(id)arg1;
- (void)setAlwaysShowBackground:(BOOL)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(NSInteger)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCaretPosition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCompletionContext:(id)arg1;
- (void)setCurrentIndex:(NSUInteger)arg1;
- (void)setShowControls:(BOOL)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showCandidateAtIndex:(NSUInteger)arg1;
- (void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showPageAtIndex:(NSUInteger)arg1;
- (void)showPreviousPage;
- (NSInteger)textEffectsVisibilityLevel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
