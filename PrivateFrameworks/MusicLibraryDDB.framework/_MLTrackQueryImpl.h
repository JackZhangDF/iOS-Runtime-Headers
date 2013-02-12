/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibraryDDB.framework/MusicLibraryDDB
 */

@interface _MLTrackQueryImpl : _MLPlaylistItemPtrImpl {
    unsigned int _resultsAreMixedWithGroups : 1;
    unsigned int _isFromPodcast : 1;
    NSUInteger _searchedPlaylistUID;
}

- (struct __CFArray { }*)_getPlaylistItemResults;
- (id)containingPlaylist;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)entityAtIndex:(NSUInteger)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (void)evaluate;
- (unsigned short)firstCharacterForStringProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (void)freeQueryResults;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (void)playlistContentsDidChangeNotification:(id)arg1;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;

@end
