/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    NSInteger _cd_rc;
    id *_keys;
    NSUInteger _length;
    id _reserved1;
    void *_table;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2;
- (struct __CFArray { }*)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)fastIndexForKnownKey:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)indexForKey:(id)arg1;
- (id)initForKeys:(const id*)arg1 count:(NSUInteger)arg2;
- (id)initForKeys:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (const id*)keys;
- (NSUInteger)length;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end
