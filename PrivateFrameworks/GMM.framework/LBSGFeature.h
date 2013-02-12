/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGAddress, LBSGLatLng, LBSGRectangle, NSString;

@interface LBSGFeature : PBCodable {
    LBSGAddress *_address;
    LBSGRectangle *_bounds;
    LBSGLatLng *_center;
    NSInteger _featureType;
    NSString *_name;
}

@property(retain) LBSGLatLng *center; /* unknown property attribute: V_center */
@property(retain) LBSGRectangle *bounds; /* unknown property attribute: V_bounds */
@property(retain) LBSGAddress *address; /* unknown property attribute: V_address */
@property NSInteger featureType; /* unknown property attribute: V_featureType */
@property(retain) NSString *name; /* unknown property attribute: V_name */
@property(readonly) BOOL hasBounds;
@property(readonly) BOOL hasCenter;

- (id)address;
- (id)bounds;
- (id)center;
- (void)dealloc;
- (id)description;
- (NSInteger)featureType;
- (BOOL)hasBounds;
- (BOOL)hasCenter;
- (id)init;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setFeatureType:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
