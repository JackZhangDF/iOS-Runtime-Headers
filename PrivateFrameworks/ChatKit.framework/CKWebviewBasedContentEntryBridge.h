/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge {
    NSInteger _composeResourcePoolID;
    NSMutableArray *_resources;
}

- (id)_htmlForMessagePart:(id)arg1;
- (id)_nodeForImagePart:(id)arg1 forRichContentView:(id)arg2;
- (void)_resetResourcePool;
- (id)_textView;
- (id)attachments;
- (void)dealloc;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (BOOL)hasContent;
- (id)init;
- (void)insertMessagePart:(id)arg1;
- (id)messageComposition;
- (id)messageParts;
- (id)newContentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)richContentView:(id)arg1 didInsertImage:(id)arg2;
- (void)richContentView:(id)arg1 didRemoveImage:(id)arg2;
- (void)setMessageComposition:(id)arg1;
- (void)setMessageParts:(id)arg1;
- (id)supportedPasteboardTypesInTextContentView:(id)arg1;

@end
