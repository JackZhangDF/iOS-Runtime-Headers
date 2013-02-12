/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <CalDAVRefreshActorCallback>, CalDAVOperationQueue, NSThread, NSTimer;

@interface MobileCalDAVAccountRefreshActor : AKActor <MobileCalDAVAccountRefreshActor> {
    <CalDAVRefreshActorCallback> *_callbackTarget;
    NSThread *_callbackThread;
    NSTimer *_cancellationTimer;
    BOOL _force;
    CalDAVOperationQueue *_queue;
    BOOL _wasCancelledEarly;
}

+ (void)setCalDAVRefreshBackgroundTasksShouldCancel:(BOOL)arg1;
+ (BOOL)shouldCancel;

- (void)_blowAwayTimer;
- (void)_checkCancelled;
- (BOOL)_handleBadPasswordResponseWithAccount:(id)arg1;
- (void)_refreshCalendar:(id)arg1 fromAccount:(id)arg2 error:(id*)arg3;
- (void)_restoreEventStatusOnEvent:(id)arg1 inCalendar:(void*)arg2 database:(struct CalDatabase { }*)arg3;
- (void)_restoreSelfAsAttendeeOnEvent:(id)arg1 withOrganizer:(struct CalOrganizer { }*)arg2;
- (void)_sendResultToCallbackActor:(id)arg1;
- (void)_setDtstampOnEvent:(void*)arg1;
- (void)_startCancellationTimer;
- (void)dealloc;
- (void)fenceMethod;
- (id)initWithQueue:(id)arg1 forceRefresh:(BOOL)arg2 callbackTarget:(id)arg3 callbackThread:(id)arg4;
- (oneway void)refresh;
- (BOOL)refreshCalendarCollectionsForAccount:(id)arg1 error:(id*)arg2;
- (BOOL)refreshCalendarsForAccount:(id)arg1 error:(id*)arg2;
- (oneway void)refreshCalendarsOnly;
- (BOOL)refreshPropertiesForAccount:(id)arg1 error:(id*)arg2;
- (void)setBackgroundThreadDispatchQueue;

@end
