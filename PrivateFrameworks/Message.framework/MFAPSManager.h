/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class APSConnection, NSMutableSet;

@interface MFAPSManager : AKActor <MFAPSManager> {
    APSConnection *_pushService;
    NSMutableSet *_unwatchedTopics;
    NSMutableSet *_watchedTopics;
}

+ (id)sharedManager;

- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)startAPS;
- (oneway void)startWatchingForTopic:(id)arg1;
- (oneway void)startup;
- (void)stopAPS;
- (oneway void)stopWatchingForTopic:(id)arg1;
- (oneway void)swapTopic:(id)arg1 forNewTopic:(id)arg2;

@end
