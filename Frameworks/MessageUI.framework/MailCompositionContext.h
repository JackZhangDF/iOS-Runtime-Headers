/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MailMessage, MessageViewingContext;

@interface MailCompositionContext : MFMailCompositionContext {
    struct { 
        unsigned int loadRest : 1; 
        unsigned int includeAttachments : 1; 
    NSInteger _composeType;
    MessageViewingContext *_loadingContext;
    } _mailComposeFlags;
    id _originalContent;
    MailMessage *_originalMessage;
}

@property(retain) MessageViewingContext *loadingContext; /* unknown property attribute: V_loadingContext */
@property(retain) id originalContent; /* unknown property attribute: V_originalContent */
@property(retain,readonly) MailMessage *originalMessage; /* unknown property attribute: V_originalMessage */
@property(readonly) NSInteger composeType; /* unknown property attribute: V_composeType */
@property BOOL includeAttachments;
@property BOOL loadRest;

- (NSInteger)composeType;
- (void)dealloc;
- (BOOL)includeAttachments;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initWithComposeType:(NSInteger)arg1 originalMessage:(id)arg2;
- (id)initWithComposeType:(NSInteger)arg1;
- (BOOL)loadRest;
- (id)loadingContext;
- (id)originalContent;
- (id)originalMessage;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setLoadingContext:(id)arg1;
- (void)setOriginalContent:(id)arg1;

@end
