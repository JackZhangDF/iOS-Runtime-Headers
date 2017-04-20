/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator> {
    NSMutableArray * _animations;
    struct _PXValueAnimationSpec { 
        int type; 
        float epsilon; 
        float stiffness; 
        float dampingRatio; 
        float initialVelocity; 
    }  _currentAnimationSpec;
    CADisplayLink * _displayLink;
    float  _epsilon;
    BOOL  _isPerformingChanges;
    struct { 
        BOOL presentationValue; 
    }  _needsUpdateFlags;
    float  _presentationValue;
    float  _value;
}

@property (nonatomic, readonly) float epsilon;
@property (setter=_setPresentationValue:, nonatomic) float presentationValue;
@property (nonatomic, readonly) float value;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_invalidatePresentationValue;
- (BOOL)_needsUpdate;
- (void)_setAnimating:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (void)_setPresentationValue:(float)arg1;
- (void)_updateIfNeeded;
- (void)_updatePresentationValueIfNeeded;
- (void)dealloc;
- (void)didPerformChanges;
- (float)epsilon;
- (id)init;
- (id)initWithValue:(float)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(float)arg1 changes:(id /* block */)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(float)arg1 dampingRatio:(float)arg2 initialVelocity:(float)arg3 changes:(id /* block */)arg4;
- (void)performChangesWithoutAnimation:(id /* block */)arg1;
- (float)presentationValue;
- (void)setValue:(float)arg1;
- (float)value;

@end