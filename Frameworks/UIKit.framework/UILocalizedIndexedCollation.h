/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSLocale;

@interface UILocalizedIndexedCollation : NSObject {
    NSLocale *_locale;
    NSArray *_sectionIndexMapping;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionTitles;
}

@property(readonly) NSArray *sectionIndexTitles;
@property(readonly) NSArray *sectionTitles;

+ (id)collationWithDictionary:(id)arg1;
+ (id)currentCollation;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (NSInteger)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (NSInteger)sectionForSectionIndexTitleAtIndex:(NSInteger)arg1;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;

@end
