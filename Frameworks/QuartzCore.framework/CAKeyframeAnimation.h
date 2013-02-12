/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAKeyframeAnimation : CAPropertyAnimation {
}

@property(copy) NSString *calculationMode;
@property(copy) NSArray *keyTimes;
@property CGPath *path;
@property(copy) NSString *rotationMode;
@property(copy) NSArray *timingFunctions;
@property(copy) NSArray *values;

- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)calculationMode;
- (id)keyTimes;
- (struct CGPath { }*)path;
- (id)rotationMode;
- (void)setCalculationMode:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRotationMode:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setValues:(id)arg1;
- (id)timingFunctions;
- (id)values;

@end
