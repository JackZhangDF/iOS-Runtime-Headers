/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVPropertyAdaptor, DAVSession, NSDictionary, NSString;

@interface CalDAVListContentsOperation : AYOperation {
    CalDAVPropertyAdaptor *_adaptor;
    NSDictionary *_propertiesCallbackMap;
    DAVSession *_session;
    NSString *_uri;
}

- (void)dealloc;
- (id)initWithSession:(id)arg1 URI:(id)arg2 properties:(id)arg3 adaptor:(id)arg4;
- (id)initWithSession:(id)arg1 URI:(id)arg2 properties:(id)arg3;
- (void)listContents;

@end
