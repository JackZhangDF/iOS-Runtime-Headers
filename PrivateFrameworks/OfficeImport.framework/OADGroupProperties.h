/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADFill, OADScene3D, OADShape3D;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    NSArray *mEffects;
    OADFill *mFill;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

+ (id)defaultProperties;

- (void)dealloc;
- (id)effects;
- (id)fill;
- (BOOL)hasEffects;
- (BOOL)hasFill;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (id)initWithDefaults;
- (id)scene3D;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (id)shape3D;

@end
