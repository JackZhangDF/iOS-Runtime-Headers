/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtworkInternal;

@interface MPMediaItemArtwork : NSObject {
    MPMediaItemArtworkInternal *_internal;
}

@property(readonly) CGRect bounds;
@property(readonly) CGRect imageCropRect;

- (id)_initWithItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageCropRect;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)item;

@end
