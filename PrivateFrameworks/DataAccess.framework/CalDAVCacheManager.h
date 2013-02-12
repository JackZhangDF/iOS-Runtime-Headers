/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class MobileCalDAVCalendar, NSMutableDictionary, NSMutableSet;

@interface CalDAVCacheManager : NSObject {
    MobileCalDAVCalendar *_calendar;
    NSMutableDictionary *_externalIDToLocalUIDMap;
    NSMutableDictionary *_filenameToModifiedLocallyMap;
    NSMutableSet *_locallyDeletedFilenames;
}

+ (id)cacheControllerForCalendar:(id)arg1;
+ (void)clearAllCacheControllers;

- (id)_initWithCalendar:(id)arg1;
- (id)allFilenames;
- (id)cTag;
- (void)dealloc;
- (void)endChanges;
- (id)etagForFilename:(id)arg1;
- (id)filenameForUID:(id)arg1;
- (id)init;
- (BOOL)isFileLocallyModified:(id)arg1;
- (NSInteger)localUIDForExternalID:(id)arg1;
- (void)setCTag:(id)arg1;
- (void)setETag:(id)arg1 forEventWithExternalID:(id)arg2;
- (void)setETag:(id)arg1 forFilename:(id)arg2;
- (void)setEventModified:(id)arg1;
- (void)setExternalID:(id)arg1 forLocalUID:(NSInteger)arg2;
- (void)setFilename:(id)arg1 forUID:(id)arg2;
- (void)setFilenameLocallyDeleted:(id)arg1;
- (void)setLocallyModified:(BOOL)arg1 forFilename:(id)arg2;
- (void)setUIDModified:(id)arg1;
- (id)uidForFilename:(id)arg1;

@end
