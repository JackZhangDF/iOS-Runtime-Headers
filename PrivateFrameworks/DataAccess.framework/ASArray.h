/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)addItem:(id)arg1;
- (id)asParseRules;
- (id)commonValue;
- (void)dealloc;
- (id)description;
- (id)initWithSubclassRuleSet:(id)arg1;

@end
