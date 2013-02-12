/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel *mBottomBevel;
    OADColor *mContourColor;
    float mContourWidth;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    NSInteger mMaterial;
    float mShapeDepth;
    OADBevel *mTopBevel;
}

+ (id)nullShape3D;

- (id)bottomBevel;
- (id)contourColor;
- (float)contourWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)extrusionColor;
- (float)extrusionHeight;
- (id)init;
- (NSInteger)material;
- (void)setBottomBevel:(id)arg1;
- (void)setContourColor:(id)arg1;
- (void)setContourWidth:(float)arg1;
- (void)setExtrusionColor:(id)arg1;
- (void)setExtrusionHeight:(float)arg1;
- (void)setMaterial:(NSInteger)arg1;
- (void)setShapeDepth:(float)arg1;
- (void)setTopBevel:(id)arg1;
- (float)shapeDepth;
- (id)topBevel;

@end
