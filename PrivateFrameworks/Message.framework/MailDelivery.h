/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DeliveryAccount, MailAccount, Message, MutableMessageHeaders, NSArray, NSString, PlainTextDocument;

@interface MailDelivery : NSObject {
    unsigned int _threaded : 1;
    unsigned int _useCellDataOnly : 1;
    unsigned int __UNUSED__ : 24;
    unsigned int _status : 4;
    DeliveryAccount *_account;
    MailAccount *_archiveAccount;
    id _delegate;
    MutableMessageHeaders *_headers;
    NSString *_htmlString;
    Message *_message;
    NSArray *_mixedContent;
    NSArray *_otherStringsAndAttachments;
    PlainTextDocument *_plainTextAlternative;
    BOOL _textPartsAreHTML;
}

+ (BOOL)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)account;
- (void)archive;
- (id)archiveAccount;
- (id)createMessageWriter;
- (void)dealloc;
- (id)delegate;
- (void)deliverAsynchronously;
- (NSInteger)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (NSInteger)deliverSynchronously;
- (NSInteger)deliveryStatus;
- (id)headersForDelivery;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCellDataOnly:(BOOL)arg1;
- (void)setDelegate:(id)arg1;

@end
