/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSMutableSet, NSSQLEntity, NSString;

@interface NSSQLiteConnection : NSSQLConnection {
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _reserved : 26; 
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    struct sqlite3 { } *_db;
    NSString *_dbPathRegisteredWithBackupd;
    void *_extraBuffersForRegisteredFunctions[5];
    struct sqlite3_stmt { } *_fetchPKStatement;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    NSUInteger _lastEntityKey;
    NSString *_pathname;
    NSMutableDictionary *_pragmaSettings;
    NSInteger _rowsProcessedCount;
    } _sqliteConnectionFlags;
    double _timeOutOption;
    struct sqlite3_stmt { } *_updatePKStatement;
    long long _vacuumTracker;
    NSMutableSet *_vmCachedStatements;
    struct sqlite3_stmt { } *_vmstatement;
}

+ (BOOL)_preflightDatabaseAtURL:(id)arg1;
+ (void)_setDebugFlags:(NSInteger)arg1;
+ (void)initialize;
+ (NSInteger)readMagicWordFromFD:(NSInteger)arg1;

- (id)_adapter;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void**)_buffersForRegisteredFunctions;
- (void)_clearBindVariablesForInsertedRow;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_clearCachedStatements;
- (void)_clearTransactionCaches;
- (void)_configureAutoVacuum;
- (void)_configureIntegrityCheck;
- (void)_configurePageSize;
- (void)_configurePragmaOptions;
- (void)_configureSynchronousMode;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (void)_ensureNoTransactionOpen;
- (void)_executeSQLString:(id)arg1;
- (void)_finalizeStatement;
- (void)_forceDisconnectOnError;
- (long long)_getCurrentAutoVacuumValue;
- (BOOL)_hasTableWithName:(id)arg1;
- (id)_newValueForColumn:(id)arg1 atIndex:(NSUInteger)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)_performPostSaveTasks;
- (void)_registerExtraFunctions;
- (NSInteger)_rowsChangedByLastExecute;
- (void)_setupVacuumIfNecessary;
- (struct sqlite3_stmt { }*)_vmstatement;
- (void)beginTransaction;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (BOOL)canConnect;
- (void)commitTransaction;
- (void)connect;
- (BOOL)databaseIsEmpty;
- (void)dealloc;
- (void)deleteCorrelation:(id)arg1;
- (void)deleteRow:(id)arg1;
- (id)describeResults;
- (void)disconnect;
- (void)endFetch;
- (void)endPrimaryKeyGeneration;
- (void)execute;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (NSInteger)fetchResultSet:(void*)arg1 usingFetchPlan:(void*)arg2;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (void)finalize;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(NSUInteger)arg2;
- (void)handleCorruptedDB:(id)arg1;
- (BOOL)hasMetadataTable;
- (BOOL)hasPrimaryKeyTable;
- (id)initWithAdapter:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)insertRow:(id)arg1;
- (BOOL)isFetchInProgress;
- (BOOL)isOpen;
- (id)newFetchedArray;
- (BOOL)performIntegrityCheck;
- (void)prepareForPrimaryKeyGeneration;
- (void)prepareSQLStatement:(id)arg1;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)rollbackTransaction;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)updateRow:(id)arg1;
- (void)willCreateSchema;

@end
