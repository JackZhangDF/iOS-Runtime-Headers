/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISAuthenticationContext, NSNumber;

@interface ISStoreAuthenticateOperation : ISOperation {
    NSNumber *_authenticatedDSID;
    ISAuthenticationContext *_context;
}

@property(retain,readonly) ISAuthenticationContext *context; /* unknown property attribute: V_context */
@property(retain) NSNumber *authenticatedDSID; /* unknown property attribute: V_authenticatedDSID */

- (void)_authenticateFailed:(id)arg1;
- (void)_authenticateFinished:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_requestAuthentication;
- (void)_timer:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (id)context;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)run;
- (void)setAuthenticatedDSID:(id)arg1;
- (id)uniqueKey;

@end
