/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASItem, NSInvocation, NSMutableDictionary, NSObject<ASParsing>;

@interface ASItem : NSObject <ASParsing> {
    NSInteger _codePage;
    NSInvocation *_currentStreamInvocation;
    NSInteger _currentlyParsingCPTNumber;
    NSObject<ASParsing> *_currentlyParsingSubItem;
    ASItem *_parent;
    NSMutableDictionary *_parseRuleUsageNumbers;
    NSInteger _parsingState;
    ASItem *_root;
    NSInteger _token;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (NSInteger)_collectionClassType;
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2;
- (BOOL)_itemPathMatches:(id)arg1;
- (BOOL)_itemPathWithCCPTMatches:(id)arg1 ccpt:(NSInteger)arg2;
- (BOOL)_parseNextValueWithCollectionClassType:(NSInteger)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8;
- (id)_replacementObjectWithCallbackDict:(id)arg1;
- (void)_setCurrentlyParsingSubItem:(id)arg1;
- (BOOL)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3;
- (BOOL)_streamIfNecessaryFromContext:(id)arg1;
- (NSInteger)_streamYourLittleHeartOutWithContext:(id)arg1;
- (id)_streamingInvocationForStreamingCallbackDict:(id)arg1 ccpt:(NSInteger)arg2;
- (id)asParseRules;
- (id)currentStreamInvocation;
- (void)dealloc;
- (void)ignoreThisContent:(id)arg1;
- (id)init;
- (BOOL)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 collectionClassType:(NSInteger)arg5 outParsedObject:(id*)arg6 outCPTNumber:(NSInteger*)arg7 account:(id)arg8;
- (id)parent;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (NSInteger)parsingState;
- (void)setCurrentStreamInvocation:(id)arg1;

@end
