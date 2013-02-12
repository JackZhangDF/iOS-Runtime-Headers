/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageScrollView, PLRotationView, PLVideoView, UITiledView;

@interface PLImageTile : UITile {
    PLImageScrollView *_imageScroller;
    NSInteger _index;
    PLRotationView *_rotationView;
    UITiledView *_tiledView;
    PLVideoView *_videoView;
}

+ (id)_createImageTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 allowZoomToFill:(BOOL)arg3;
+ (id)createImageTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(struct CGImage { }*)arg2 orientation:(NSInteger)arg3 allowZoomToFill:(BOOL)arg4;
+ (id)createImageTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 modelImage:(id)arg2;
+ (Class)tileViewClass;

- (BOOL)_canDrawContent;
- (void)_cleanupImageScroller;
- (void)_cleanupVideoView;
- (id)_createOriginalImageForPicker;
- (id)_delegate;
- (BOOL)_drawsContent;
- (void)_handleDoubleTap:(struct __GSEvent { }*)arg1;
- (NSInteger)_imageOrientation;
- (void)_zoomOut;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (NSInteger)imageIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)imageScroller;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (id)rotationView;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImageScroller:(id)arg1;
- (void)setNeedsDisplayInDirtyRect;
- (void)setTiledView:(id)arg1;
- (void)setVideoView:(id)arg1;
- (id)tiledView;
- (id)videoView;
- (void)view:(id)arg1 handleTapWithCount:(NSInteger)arg2 event:(struct __GSEvent { }*)arg3 fingerCount:(NSInteger)arg4;

@end
