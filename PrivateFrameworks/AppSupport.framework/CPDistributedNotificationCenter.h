/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSLock, NSMutableDictionary, NSString;

@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    BOOL _isServer;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    NSMutableDictionary *_sendPorts;
    NSUInteger _startCount;
}

+ (id)centerNamed:(id)arg1;

- (void)_checkIn;
- (void)_checkOutAndRemoveSource;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { }*)arg1;
- (id)_initWithServerName:(id)arg1;
- (void)_notificationServerWasRestarted;
- (void)_receivedCheckIn:(NSUInteger)arg1 auditToken:(struct { NSUInteger x1[8]; }*)arg2;
- (void)_receivedCheckOut:(struct __CFMachPort { }*)arg1;
- (void)dealloc;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)runServerOnCurrentThread;
- (void)startDeliveringNotificationsToMainThread;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)stopDeliveringNotifications;

@end
