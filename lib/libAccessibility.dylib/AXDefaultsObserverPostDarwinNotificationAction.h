/* Generated by RuntimeBrowser
   Image: /usr/lib/libAccessibility.dylib
 */

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction> {
    NSString *_note;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *note;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithDarwinNotification:(id)arg1;
- (id)note;
- (void)performForChangedDefault:(id)arg1;
- (void)setNote:(id)arg1;

@end