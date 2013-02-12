/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, NSString;

@interface ISAuthenticationResponse : NSObject {
    NSString *_accountIdentifier;
    NSInteger _accountKind;
    NSString *_creditString;
    NSNumber *_dsID;
    NSString *_token;
}

@property(readonly) NSString *token; /* unknown property attribute: V_token */
@property(readonly) NSNumber *dsID; /* unknown property attribute: V_dsID */
@property(readonly) NSString *creditString; /* unknown property attribute: V_creditString */
@property(readonly) NSInteger accountKind; /* unknown property attribute: V_accountKind */
@property(readonly) NSString *accountIdentifier; /* unknown property attribute: V_accountIdentifier */

- (BOOL)_loadFromDictionary:(id)arg1;
- (id)accountIdentifier;
- (NSInteger)accountKind;
- (id)creditString;
- (void)dealloc;
- (id)dsID;
- (id)initWithDictionary:(id)arg1;
- (id)token;

@end
