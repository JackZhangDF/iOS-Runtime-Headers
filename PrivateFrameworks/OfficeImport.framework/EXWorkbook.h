/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface EXWorkbook : NSObject {
     /* Encoded args for previous method: @20@0:4@8B12@16 */
}

+ (id)edWorkbookFromState:(id)arg1 fileName:(id)arg2;
+ (id)edWorkbookFromState:(id)arg1 resourcesOnly:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2 fileName:(id)arg3;
+ (void)readSheetsFrom:(id)arg1 relationNS:(struct _xmlNs { struct _xmlNs {} *x1; NSInteger x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)arg2 state:(id)arg3 workbook:(id)arg4;
+ (void)readStringsFrom:(id)arg1 state:(id)arg2;
+ (void)readStylesFrom:(id)arg1 state:(id)arg2;
+ (void)setupProcessors:(id)arg1;

@end
