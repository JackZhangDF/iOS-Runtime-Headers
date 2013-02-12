/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray, NSMutableDictionary;

@interface MessageNotificationCenter : NSNotificationCenter <WeakReferenceHolder> {
    NSInteger _generationNumber;
    NSMutableDictionary *_notificationMapping;
    NSMutableArray *_queuedObjects;
}

- (void)_removeEntryForObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)copyAllObserversForNotificationName:(id)arg1 andObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)objectWillBeDeallocated:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)release;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (id)retain;
- (NSUInteger)retainCount;

@end
