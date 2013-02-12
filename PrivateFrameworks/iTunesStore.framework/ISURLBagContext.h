/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber;

@interface ISURLBagContext : NSObject <NSCopying> {
    NSInteger _bagType;
    NSNumber *_userIdentifier;
}

@property(retain) NSNumber *userIdentifier; /* unknown property attribute: V_userIdentifier */
@property NSInteger bagType; /* unknown property attribute: V_bagType */
@property(readonly) NSString *cacheKey;

+ (id)contextWithBagType:(NSInteger)arg1;

- (NSInteger)bagType;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setBagType:(NSInteger)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
