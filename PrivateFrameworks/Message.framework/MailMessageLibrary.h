/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MailboxPathProvider>, NSDate, NSMutableSet, NSTimer;

@interface MailMessageLibrary : MessageLibrary {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    int (*_busyHandler)();
    int (*resetHandler)();
    void *_CPSearchContext;
    void *_ICUSearchContext;
    double _beginTransactionTime;
    void *_busyHandlerContext;
    NSMutableSet *_cachedDatabases;
    NSTimer *_commitTimer;
    double _dateDatabaseBecameLocked;
    } _dbLock;
    NSDate *_lastUpdateDate;
    struct __CFDictionary { } *_mailboxCache;
    <MailboxPathProvider> *_mailboxPathProvider;
    BOOL _outstandingWritesExist;
    } _priorityLock;
    } _seqNumbersLock;
    struct __CFDictionary { } *_statementCachesByDB;
    struct sqlite3 { } *_writerDB;
    BOOL _writerDBIsBeingUsedAsReader;
}

+ (void)_invalidateActiveAccountsClause;
+ (id)defaultInstance;
+ (void)initialize;

- (id)UIDsToDeleteInMailbox:(id)arg1;
- (struct sqlite3 { }*)_getWriterDBWithRetryCount:(NSInteger)arg1;
- (void)_rebuildActiveAccountsClause;
- (void)_setMessageDataString:(id)arg1 forKey:(const char *)arg2 forMessage:(id)arg3;
- (BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2;
- (void)_yieldDBToOtherProcess;
- (NSUInteger)accessSequenceNumber;
- (id)accountForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 progressDelegate:(id)arg10 addPOPUIDs:(BOOL)arg11 dataSectionsByMessage:(id)arg12;
- (id)allMailboxURLStrings;
- (id)allUIDsInMailbox:(id)arg1;
- (id)attachmentsDirectoryForLibraryID:(NSUInteger)arg1 mailboxID:(NSUInteger)arg2;
- (id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3;
- (id)bodyDataForMessage:(id)arg1;
- (void)checkInDB:(struct sqlite3 { }*)arg1;
- (void)cleanOldDatabases;
- (void)closeDB:(struct sqlite3 { }*)arg1;
- (void)closeDatabaseConnections;
- (void)commit;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1 type:(NSInteger)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (void)dealloc;
- (id)defaultDatabasePath;
- (void)deleteMailboxes:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (NSUInteger)deletedCountForMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(NSUInteger)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 fromMailbox:(id)arg2;
- (struct sqlite3 { }*)getWriterDB;
- (NSInteger)handleSqliteError:(struct sqlite3 { }*)arg1 format:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)initializeDatabase:(struct sqlite3 { }*)arg1;
- (NSUInteger)integerForQuery:(char *)arg1 withTextArgument:(id)arg2;
- (BOOL)isBusy;
- (BOOL)isMessageContentsLocallyAvailable:(id)arg1;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(NSUInteger)arg3 withMonitor:(id)arg4;
- (void)iterateStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 withProgressMonitor:(id)arg3 andRowHandler:(int (*)())arg4 context:(void*)arg5;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (NSUInteger)locationOfMessageID:(long long)arg1 inMailbox:(id)arg2;
- (void)lockDBForWriting;
- (id)mailboxURLForMessage:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (NSUInteger)maximumRemoteIDForMailbox:(id)arg1;
- (void)maybeCommitTransaction;
- (id)messageWithLibraryID:(NSUInteger)arg1 options:(NSUInteger)arg2;
- (id)messageWithLibraryID:(NSUInteger)arg1;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messageWithMessageID:(id)arg1;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(NSInteger)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2;
- (id)messagesMatchingQuery:(const char *)arg1 options:(NSUInteger)arg2;
- (void)messagesWereCompacted:(id)arg1 mailboxes:(id)arg2;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(NSUInteger)arg2 limit:(NSUInteger)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(NSUInteger)arg2 limit:(NSUInteger)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (NSUInteger)minimumRemoteIDForMailbox:(id)arg1;
- (NSUInteger)nonDeletedCountForMailbox:(id)arg1;
- (id)oldestMessageInMailbox:(id)arg1;
- (struct sqlite3 { }*)openNewHandleWithBigCache:(BOOL)arg1;
- (BOOL)outstandingWritesExist;
- (id)pathForMailboxURL:(id)arg1;
- (struct sqlite3_stmt { }*)preparedStatement:(struct sqlite3 { }*)arg1 pattern:(const char *)arg2;
- (id)queryForCriterion:(id)arg1 options:(NSUInteger)arg2 baseTable:(NSUInteger)arg3 isSubquery:(BOOL)arg4 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg5;
- (id)queryForCriterion:(id)arg1 options:(NSUInteger)arg2 baseTable:(NSUInteger)arg3 isSubquery:(BOOL)arg4;
- (id)queryForCriterion:(id)arg1 options:(NSUInteger)arg2 baseTable:(NSUInteger)arg3;
- (id)queryForCriterion:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)queryForCriterion:(id)arg1 options:(NSUInteger)arg2;
- (void)queueCommitForCurrentThread;
- (void)queueCommitOnMainThread;
- (id)remoteStoreForMessage:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)renameOrRemoveDatabase;
- (void)scheduleCommitOnMainThread;
- (void)sendMessagesForStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 to:(id)arg3 options:(NSUInteger)arg4 timestamp:(double)arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(NSUInteger)arg3 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(NSUInteger)arg3;
- (void)sendMessagesMatchingQuery:(const char *)arg1 to:(id)arg2 options:(NSUInteger)arg3;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (void)setBusyHandler:(int (*)())arg1 context:(void*)arg2;
- (void)setBusyTimeoutInterval:(double)arg1;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3;
- (void)setDatabasePath:(id)arg1;
- (void)setFlags:(unsigned long)arg1 forMessage:(id)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setMailboxPathProvider:(id)arg1;
- (void)setMeetingData:(id)arg1 forMessage:(id)arg2;
- (void)setMeetingExternalID:(id)arg1 forMessage:(id)arg2;
- (void)setMessage:(id)arg1 isPartial:(BOOL)arg2;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setResetHandler:(int (*)())arg1;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)setThreadPriority:(NSInteger)arg1;
- (struct sqlite3 { }*)setupWriterDB;
- (BOOL)shouldCancel;
- (void)synchronouslyCommitTransaction;
- (NSInteger)threadPriority;
- (NSUInteger)totalCountForMailbox:(id)arg1;
- (void)unlockDB:(struct sqlite3 { }*)arg1;
- (NSUInteger)unreadCountForMailbox:(id)arg1;
- (NSUInteger)updateSequenceNumber;
- (id)urlForMailboxID:(NSUInteger)arg1;

@end
