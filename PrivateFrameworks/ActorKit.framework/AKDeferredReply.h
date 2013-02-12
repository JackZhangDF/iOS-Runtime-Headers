/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class NSConditionLock, NSInvocation;

@interface AKDeferredReply : NSObject {
    NSConditionLock *_blockingLock;
    NSInvocation *_invocation;
}

+ (id)currentReply;
+ (void)initialize;

- (void)becomeCurrentReply;
- (void)dealloc;
- (id)init;
- (id)initWithInvocation:(id)arg1 andBlockingLock:(id)arg2;
- (id)invocation;
- (void)resignCurrentReply;
- (void)sendReply;
- (void)setReturnValue:(void*)arg1;

@end
