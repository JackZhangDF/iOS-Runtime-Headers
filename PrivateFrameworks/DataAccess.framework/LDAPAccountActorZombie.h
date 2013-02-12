/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface LDAPAccountActorZombie : NSObject <DAAccountActorMessages> {
}

+ (id)sharedZombie;

- (void)cancelAllSearchQueries;
- (void)cancelSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(NSInteger)arg1;
- (void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (BOOL)searchQueriesRunning;
- (oneway void)setAccount:(id)arg1;
- (oneway void)shutdown;
- (oneway void)startup;

@end
