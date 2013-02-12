/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <DATask>, NSMutableArray, NSMutableSet;

@interface DATaskManager : NSObject {
    <DATask> *_activeExclusiveTask;
    <DATask> *_activeModalTask;
    <DATask> *_activeQueuedTask;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_independentTasks;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedExclusiveTasks;
    NSMutableArray *_queuedModalTasks;
    NSMutableArray *_queuedTasks;
    NSInteger _state;
}

@property(readonly) NSArray *queuedTasks; /* unknown property attribute: V_queuedTasks */
@property(readonly) <DATask> *activeQueuedTask; /* unknown property attribute: V_activeQueuedTask */
@property(readonly) <DATask> *activeModalTask; /* unknown property attribute: V_activeModalTask */
@property(readonly) NSArray *allTasks;

- (void)_cancelTasksWithReason:(NSInteger)arg1;
- (id)_getHeldIndependentTasks;
- (id)_getIndependentTasks;
- (id)_getModalHeldIndependentTasks;
- (id)_getQueuedExclusiveTasks;
- (id)_getQueuedModalTasks;
- (id)_getQueuedTasks;
- (void)_makeStateTransition;
- (void)_performTask:(id)arg1;
- (void)_reactivateHeldTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(NSInteger)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_scheduleStartModal:(id)arg1;
- (void)_startModal:(id)arg1;
- (id)activeModalTask;
- (id)activeQueuedTask;
- (id)allTasks;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)queuedTasks;
- (void)shutdown;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;

@end
