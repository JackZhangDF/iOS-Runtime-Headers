/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMMapInfo : PBCodable {
    GMMMapPoint *_center;
    BOOL _hasZoomLevel;
    NSInteger _latitudeSpan;
    NSInteger _longitudeSpan;
    NSInteger _zoomLevel;
}

@property(readonly) BOOL hasZoomLevel; /* unknown property attribute: V_hasZoomLevel */
@property NSInteger zoomLevel; /* unknown property attribute: V_zoomLevel */
@property NSInteger longitudeSpan; /* unknown property attribute: V_longitudeSpan */
@property NSInteger latitudeSpan; /* unknown property attribute: V_latitudeSpan */
@property(retain) GMMMapPoint *center; /* unknown property attribute: V_center */

- (id)center;
- (void)dealloc;
- (id)description;
- (BOOL)hasZoomLevel;
- (id)init;
- (NSInteger)latitudeSpan;
- (NSInteger)longitudeSpan;
- (BOOL)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setLatitudeSpan:(NSInteger)arg1;
- (void)setLongitudeSpan:(NSInteger)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (void)writeTo:(id)arg1;
- (NSInteger)zoomLevel;

@end
