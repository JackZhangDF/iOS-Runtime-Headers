/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISAuthenticationContext, ISURLBagContext, NSNumber, NSString, NSURL;

@interface ISDataProvider : NSObject <NSCopying> {
    NSNumber *_authenticatedAccountDSID;
    ISAuthenticationContext *_authenticationContext;
    ISURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    NSURL *_redirectURL;
}

@property(retain) NSURL *redirectURL; /* unknown property attribute: V_redirectURL */
@property(retain) id output; /* unknown property attribute: V_output */
@property(retain) NSString *contentType; /* unknown property attribute: V_contentType */
@property long long contentLength; /* unknown property attribute: V_contentLength */
@property(retain) ISURLBagContext *bagContext; /* unknown property attribute: V_bagContext */
@property(retain) NSNumber *authenticatedAccountDSID; /* unknown property attribute: V_authenticatedAccountDSID */
@property(retain) ISAuthenticationContext *authenticationContext; /* unknown property attribute: V_authenticationContext */
@property(getter=isStream,readonly) BOOL stream;
@property(readonly) long long streamedBytes;

+ (id)provider;

- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (id)bagContext;
- (void)closeStream;
- (void)configureFromProvider:(id)arg1;
- (long long)contentLength;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (id)output;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)redirectURL;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBagContext:(id)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setup;
- (long long)streamedBytes;

@end
