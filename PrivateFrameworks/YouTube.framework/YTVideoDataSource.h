/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject {
    BOOL _hasLoaded;
    NSError *_lastError;
    YTSearchRequest *_searchRequest;
    NSUInteger _startIndex;
    NSMutableArray *_videos;
    NSUInteger _videosRemaining;
}

+ (void)saveDataSources;
+ (void)setShouldRemoveOldDefaults;
+ (id)sharedDataSource;
+ (BOOL)shouldRemoveOldDefaults;

- (void)_addVideos:(id)arg1;
- (void)_clearVideos;
- (id)_deprecatedVideosDefaultsKey;
- (void)_didChange;
- (void)_saveToDefaults;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_setLastError:(id)arg1;
- (void)_setVideos:(id)arg1;
- (void)dealloc;
- (BOOL)hasLoaded;
- (id)init;
- (BOOL)isLoading;
- (id)lastError;
- (void)loadFromDefaults;
- (void)loadMore;
- (NSUInteger)maxVideosToSave;
- (void)reloadData;
- (void)removeVideoAtIndex:(NSInteger)arg1;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (id)videos;
- (NSUInteger)videosRemaining;

@end
