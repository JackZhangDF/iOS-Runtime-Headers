/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {
    NSString *_address;
}

@property(readonly) NSString *address; /* unknown property attribute: V_address */

+ (id)emailAddress:(id)arg1;

- (id)address;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;

@end
