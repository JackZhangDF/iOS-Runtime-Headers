/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CMArchiveManager : NSObject {
    NSMutableDictionary *mDrawableCache;
    NSInteger mHeight;
    BOOL mIsThumbnail;
    NSUInteger mPageCount;
    NSMutableSet *mPausedPaths;
    NSString *mResourcePathPrefix;
    NSInteger mWidth;
}

+ (NSInteger)blipTypeToResourceType:(NSInteger)arg1;
+ (id)hashKeyFor:(id)arg1;
+ (id)resourceTypeToExtension:(NSInteger)arg1;
+ (id)resourceTypeToMIME:(NSInteger)arg1;

- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(NSInteger)arg2;
- (id)addResourceForDrawable:(id)arg1 withType:(NSInteger)arg2 drawable:(id)arg3;
- (id)appendResourcePathToName:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)createResourceWithName:(id)arg1;
- (id)createResourceWithType:(NSInteger)arg1;
- (id)cssStylesheetString;
- (void)dealloc;
- (id)init;
- (BOOL)isProgressive;
- (BOOL)isThumbnail;
- (NSUInteger)pageCount;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (NSInteger)resourceCount;
- (id)resourcePathPrefix;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)setHTMLHeight:(NSInteger)arg1;
- (void)setHTMLWidth:(NSInteger)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setPageCount:(NSUInteger)arg1;
- (void)setResourcePathPrefix:(id)arg1;

@end
