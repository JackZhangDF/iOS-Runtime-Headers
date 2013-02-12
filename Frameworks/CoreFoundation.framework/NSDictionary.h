/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)convertFromBinaryXML:(id)arg1;
+ (id)convertFromXML:(id)arg1;
+ (id)dictionary;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(NSUInteger)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;

- (void)_apply:(int (*)())arg1 context:(void*)arg2;
- (unsigned long)_cfTypeID;
- (NSUInteger)_fullCount;
- (BOOL)_getValue:(id*)arg1 forKey:(id)arg2;
- (BOOL)_mapkit_writeBinaryPlist:(id)arg1 atomically:(BOOL)arg2;
- (void)_safari_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (id)_stringToWrite;
- (NSInteger)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (id)_webkit_arrayForKey:(id)arg1;
- (BOOL)_webkit_boolForKey:(id)arg1;
- (NSInteger)_webkit_intForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;
- (NSInteger)abCompare:(id)arg1;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (Class)classForCoder;
- (BOOL)containsKey:(id)arg1;
- (BOOL)containsKeyCaseInsensitive:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)convertToBinaryXML;
- (id)convertToXML;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)countForKey:(id)arg1;
- (NSUInteger)countForObject:(id)arg1;
- (id)deepCopy;
- (id)description;
- (id)descriptionInStringsFileFormat;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)dictionaryByAddingObject:(id)arg1 forKey:(id)arg2;
- (id)dictionaryByAddingObjectsFromArray:(id)arg1 forKeys:(id)arg2;
- (id)dictionaryFromChanges:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileCreationDate;
- (BOOL)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (NSUInteger)fileGroupOwnerAccountNumber;
- (unsigned long)fileHFSCreatorCode;
- (unsigned long)fileHFSTypeCode;
- (BOOL)fileIsAppendOnly;
- (BOOL)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (NSUInteger)fileOwnerAccountNumber;
- (NSUInteger)filePosixPermissions;
- (unsigned long long)fileSize;
- (NSUInteger)fileSystemFileNumber;
- (NSInteger)fileSystemNumber;
- (id)fileType;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1;
- (BOOL)hasKey:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(NSUInteger)arg3;
- (id)initWithObjectsAndKeys:(id)arg1;
- (NSInteger)integerForKey:(id)arg1;
- (id)invertedDictionary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDictionary:(id)arg1;
- (BOOL)isNSDictionary__;
- (BOOL)isNSDictionary__;
- (NSInteger)iterations;
- (id)keyEnumerator;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (NSInteger)lineNumber;
- (id)mutableCopyWithElementsCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForInt:(NSInteger)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (float)offset;
- (SEL)setupSelector;
- (BOOL)shouldTriggerDownloadQueueCheck;
- (id)sourceURL;
- (SEL)testSelector;
- (id)text;
- (NSInteger)type;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;

@end
