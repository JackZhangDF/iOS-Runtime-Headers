/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExpression : NSObject <NSCoding, NSCopying> {
    NSUInteger _expressionType;
    void *_reserved;
}

+ (id)_keyPathExpressionForString:(id)arg1;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)expressionWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)expressionWithFormat:(id)arg1;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (BOOL)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)arguments;
- (id)collection;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)falseExpression;
- (id)function;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionType:(NSUInteger)arg1;
- (id)keyPath;
- (id)leftExpression;
- (id)minimalFormInContext:(id)arg1;
- (id)operand;
- (id)predicate;
- (id)predicateFormat;
- (id)rightExpression;
- (SEL)selector;
- (id)subexpression;
- (id)trueExpression;
- (id)variable;

@end
