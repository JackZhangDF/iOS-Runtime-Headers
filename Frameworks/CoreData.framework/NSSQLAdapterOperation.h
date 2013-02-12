/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLCorrelation, NSSQLRow;

@interface NSSQLAdapterOperation : NSObject {
    NSUInteger _adapterOperator;
    NSSQLCorrelation *_correlation;
    NSSQLRow *_row;
}

- (id)_opString;
- (NSUInteger)adapterOperator;
- (NSInteger)compareAdapterOperation:(id)arg1;
- (id)correlation;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)initWithAdapterOperator:(NSUInteger)arg1 correlation:(id)arg2;
- (id)initWithAdapterOperator:(NSUInteger)arg1 row:(id)arg2;
- (id)row;
- (void)setAdapterOperator:(NSUInteger)arg1;

@end
