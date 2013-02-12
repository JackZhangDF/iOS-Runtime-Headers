/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray;

@interface YTHistoryVideoDataSource : YTVideoDataSource {
    NSMutableArray *_history;
}

- (id)_history;
- (void)_saveToDefaults;
- (void)addVideo:(id)arg1;
- (void)loadFromDefaults;
- (NSUInteger)maxVideosToSave;
- (void)reloadData;
- (void)removeAllVideos;

@end
