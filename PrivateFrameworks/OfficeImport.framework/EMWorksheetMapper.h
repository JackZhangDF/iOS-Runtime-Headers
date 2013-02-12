/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMStyle, ECColumnWidthConvertor, EDWorksheet;

@interface EMWorksheetMapper : EMSheetMapper {
    EDWorksheet *edWorksheet;
    NSUInteger mColumnCount;
    double *mColumnGrid;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    NSInteger mHeight;
    NSUInteger mRowCount;
    double *mRowGrid;
    CMStyle *mStyle;
    NSInteger mWidth;
}

- (NSInteger)columnCount;
- (double*)columnGrid;
- (id)columnWidthConvertor;
- (void)countRowsAndColumns;
- (void)dealloc;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (NSInteger)height;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (BOOL)isVisible;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;
- (NSInteger)maxRowNumber;
- (NSInteger)preprocessHeight;
- (NSInteger)preprocessWidth;
- (double*)rowGrid;
- (void)setRowGrid;
- (NSInteger)width;
- (double)xlColumnWidthToPoints:(double)arg1;

@end
