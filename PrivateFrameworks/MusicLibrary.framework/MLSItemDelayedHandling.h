/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLSItemDelayedHandling : NSObject {
}

+ (void)handleDelayedExpensiveInvocation:(id)arg1;
+ (void)handleExpensiveDelayableOperation:(SEL)arg1 conn:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg2 delayIfNecessary:(double)arg3;

- (struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)_wconn:(struct CPSqliteConnection { struct CPSqliteDatabase {} *x1; struct sqlite3 {} *x2; struct __CFDictionary {} *x3; void *x4; int (*x5)(); int (*x6)(); void *x7; }*)arg1;

@end
