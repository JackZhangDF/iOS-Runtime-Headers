/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WAKWindow : WAKResponder {
    struct WKWindow { struct _WKObject { 
            NSUInteger referenceCount; 
            struct _WKClassInfo {} *classInfo; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; NSInteger x8; in double x9; out void*x10; void*x11; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x12; struct WKView {} *x13; struct WKView {} *x14; struct TiledSurface {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; } *window;
}

+ (id)_wrapperForWindowRef:(struct WKWindow { struct _WKObject { NSUInteger x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct WKView {} *x4; struct WKView {} *x5; struct TiledSurface {} *x6; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg1;
+ (BOOL)hasLandscapeOrientation;
+ (void)setOrientationProvider:(id)arg1;

- (BOOL)_needsToResetDragMargins;
- (void)_setNeedsToResetDragMargins:(BOOL)arg1;
- (oneway void)_webcore_releaseOnWebThread;
- (struct WKWindow { struct _WKObject { NSUInteger x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct WKView {} *x4; struct WKView {} *x5; struct TiledSurface {} *x6; unsigned int x7 : 1; unsigned int x8 : 1; }*)_windowRef;
- (id)attachedSheet;
- (void)close;
- (id)contentView;
- (struct CGPoint { float x1; float x2; })convertBaseToScreen:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertScreenToBase:(struct CGPoint { float x1; float x2; })arg1;
- (struct __GSEvent { }*)currentEvent;
- (void)dealloc;
- (void)endEditingFor:(id)arg1;
- (id)firstResponder;
- (BOOL)hasPendingDraw;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLayer:(id)arg1;
- (BOOL)isKeyWindow;
- (NSInteger)keyViewSelectionDirection;
- (void)layoutTiles;
- (void)layoutTilesNow;
- (BOOL)makeFirstResponder:(id)arg1;
- (oneway void)release;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)sendGSEvent:(id)arg1 contentChange:(NSInteger*)arg2;
- (void)sendGSEvent:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)setTilingMode:(NSInteger)arg1;
- (void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1;
- (BOOL)tilesOpaque;
- (NSInteger)tilingMode;
- (BOOL)useOrientationDependentFontAntialiasing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (NSInteger)windowNumber;

@end
