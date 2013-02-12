/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTGroupingCell : GQDTCell {
    id mFormat;
    struct __CFString { } *mFormulaValue;
    BOOL mHasValidFormulaValue;
    BOOL mIsCollapsed;
    unsigned short mLevel;
    struct __CFBundle { } *mProcessorBundle;
    unsigned short mRowCount;
    unsigned short mRowIdx;
    id mValue;
}

+ (struct __CFString { }*)displayTypeString:(NSInteger)arg1;

- (struct __CFString { }*)createFormattedValue;
- (void)dealloc;
- (BOOL)hasFormulaValue;
- (BOOL)isCollapsed;
- (unsigned short)level;
- (NSInteger)readAttributes:(struct _xmlTextReader { }*)arg1;
- (NSInteger)readElement:(struct _xmlTextReader { }*)arg1;
- (NSInteger)readRootFormat:(struct _xmlTextReader { }*)arg1;
- (NSInteger)readValue:(struct _xmlTextReader { }*)arg1;
- (unsigned short)rowCount;
- (unsigned short)rowIdx;
- (void)setProcessorBundle:(struct __CFBundle { }*)arg1;
- (id)value;

@end
