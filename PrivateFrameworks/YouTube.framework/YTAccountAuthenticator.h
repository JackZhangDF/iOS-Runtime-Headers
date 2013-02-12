/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSDate, NSHTTPURLResponse, NSMutableData, NSString;

@interface YTAccountAuthenticator : NSObject {
    NSString *_account;
    NSString *_accountToken;
    NSDate *_accountTokenDate;
    NSString *_accountYouTubeName;
    NSString *_authURLBase;
    NSString *_password;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_urlResponse;
}

+ (id)sharedAuthenticator;

- (id)_authRequestForAccount:(id)arg1 password:(id)arg2;
- (id)_authRequestWithURL:(id)arg1;
- (void)_clearURLResponseInfo;
- (void)_getNewTokenForAccount:(id)arg1 password:(id)arg2;
- (BOOL)_isTokenExpired:(id)arg1;
- (id)_passwordFromKeychain;
- (void)_postAccountTokenGenerationFailedWithError:(id)arg1;
- (void)_postNewAccountTokenAvailable;
- (void)_removePasswordFromKeychain;
- (void)_setAccount:(id)arg1;
- (void)_setAccountToken:(id)arg1;
- (void)_setAccountTokenDate:(id)arg1;
- (void)_setAccountYouTubeName:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setURLResponse:(id)arg1;
- (id)accountYouTubeName;
- (void)clearAccountInfo;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)readyToRequestToken;
- (id)tokenForCurrentAccount;
- (void)validateAccount:(id)arg1 password:(id)arg2;

@end
