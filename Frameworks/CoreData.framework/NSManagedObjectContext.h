/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableSet, NSPersistentStoreCoordinator, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _reservedFlags : 17; 
    id *_cachedObsInfoByEntity;
    NSInteger _cd_rc;
    NSMutableSet *_changedObjects;
    NSMutableArray *_children;
    id *_debuggingRecords;
    id _delegate;
    NSMutableSet *_deletedObjects;
    id _editors;
    double _fetchTimestamp;
    } _flags;
    long _ignoreChangeNotification;
    id _infoByGID;
    NSMutableSet *_insertedObjects;
    id _lock;
    long _lockCount;
    NSMutableSet *_lockedObjects;
    id _mergePolicy;
    NSPersistentStoreCoordinator *_objectStore;
    long _objectStoreLockCount;
    id _referenceQueue;
    NSMutableSet *_refreshedObjects;
    void *_reserved1;
    void *_reserved2;
    NSInteger _reserved3;
    NSInteger _spinLock;
    NSUndoManager *_undoManager;
    short _undoTransactionID;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
}

+ (id)_arrayExcludingObjectsInArray:(id)arg1 array:(id)arg2;
+ (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (NSUInteger)_batchRetainedObjects:(id*)arg1 forCount:(NSUInteger)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(BOOL)arg5;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (void)_changeIDsForManagedObjects:(id)arg1;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_clearDeletions;
- (void)_clearInsertions;
- (void)_clearLockedObjects;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (void)_clearRefreshedObjects;
- (void)_clearUnprocessedDeletions;
- (void)_clearUnprocessedInsertions;
- (void)_clearUnprocessedUpdates;
- (void)_clearUpdates;
- (id)_committedSnapshotForObject:(id)arg1;
- (NSUInteger)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4;
- (NSUInteger)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2;
- (void)_createAndPostChangeNotification:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3 withRefreshes:(id)arg4;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (void)_didSaveChanges;
- (void)_disableChangeNotifications;
- (void)_dispose:(BOOL)arg1;
- (void)_disposeObjects:(id*)arg1 count:(unsigned long)arg2 notifyParent:(BOOL)arg3;
- (void)_enableChangeNotifications;
- (void)_enqueueEndOfEventNotification;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2 removeFromRegistry:(BOOL)arg3;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(BOOL)arg2;
- (id)_globalIDForObject:(id)arg1;
- (id)_globalIDsForObjects:(id)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(NSUInteger)arg1 toSize:(NSUInteger)arg2;
- (BOOL)_handleError:(id)arg1 withError:(id*)arg2;
- (BOOL)_handleOptimisticLockingError:(id)arg1 withError:(id*)arg2;
- (BOOL)_ignoringChangeNotifications;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2;
- (void)_incrementUndoTransactionID;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_initWithParentObjectStore:(id)arg1;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (id)_localStoreContainingObjectID:(id)arg1;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(struct { id x1; SEL x2; void *x3; }*)arg3;
- (id)_newSaveRequestForCurrentState;
- (id)_newUnchangedLockedObjects;
- (void)_noop:(id)arg1;
- (void)_objectsChangedInStore:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (BOOL)_prepareForPushChanges:(id*)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (BOOL)_processDeletedObjects:(id*)arg1;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_processNotificationQueue;
- (void)_processObjectStoreChanges:(id)arg1;
- (void)_processOwnedObjects:(id)arg1 set:(id)arg2 boolean:(BOOL)arg3;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingUpdates:(id)arg1;
- (BOOL)_processRecentChanges:(id*)arg1;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_processReferenceQueue:(BOOL)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id*)arg1;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(BOOL)arg3;
- (void)_registerClearStateWithUndoManager;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (id)_registeredObjects;
- (void)_resetAllChanges;
- (id)_retainedObjectWithID:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(BOOL)arg3;
- (id)_retainedObjectWithID:(id)arg1;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(BOOL)arg4 contextInfo:(void*)arg5 delayed:(BOOL)arg6;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (void)_setStopsValidationAfterFirstError:(BOOL)arg1;
- (void)_startObservingUndoManagerNotifications;
- (void)_stopObservingUndoManagerNotifications;
- (BOOL)_stopsValidationAfterFirstError;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (BOOL)_validateChangesForSave:(id*)arg1;
- (BOOL)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2;
- (BOOL)_validateObjects:(id)arg1 forOperation:(NSUInteger)arg2 error:(id*)arg3 exhaustive:(BOOL)arg4 forSave:(BOOL)arg5;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (BOOL)commitEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (NSUInteger)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (id)deletedObjects;
- (void)detectConflictsForObject:(id)arg1;
- (void)discardEditing;
- (void)encodeWithCoder:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)finalize;
- (BOOL)hasChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertObject:(id)arg1;
- (id)insertedObjects;
- (BOOL)isEditing;
- (void)lock;
- (void)lockObjectStore;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)mergePolicy;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)persistentStoreCoordinator;
- (void)processPendingChanges;
- (BOOL)propagatesDeletesAtEndOfEvent;
- (void)redo;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (id)registeredObjects;
- (void)release;
- (void)reset;
- (id)retain;
- (NSUInteger)retainCount;
- (BOOL)retainsRegisteredObjects;
- (void)rollback;
- (BOOL)save:(id*)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropagatesDeletesAtEndOfEvent:(BOOL)arg1;
- (void)setRetainsRegisteredObjects:(BOOL)arg1;
- (void)setStalenessInterval:(double)arg1;
- (void)setUndoManager:(id)arg1;
- (double)stalenessInterval;
- (BOOL)tryLock;
- (void)undo;
- (id)undoManager;
- (void)unlock;
- (void)unlockObjectStore;
- (id)updatedObjects;

@end
