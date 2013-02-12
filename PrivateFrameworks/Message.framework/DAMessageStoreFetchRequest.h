/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <RequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>, DAMessageStore, Message, MimePart;

@interface DAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <DAMailAccountRequest> {
    <RequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    NSInteger format;
    Message *message;
    MimePart *part;
    BOOL partial;
    DAMessageStore *store;
}

- (double)generationTime;
- (BOOL)shouldSend;

@end
