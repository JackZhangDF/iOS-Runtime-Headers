/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationViewInternal;

@interface MKAnnotationView : UIView {
    MKAnnotationViewInternal *_internal;
}

@property(retain) <MKAnnotation> *annotation;
@property(retain) UIImage *image;
@property(retain) UIView *leftCalloutAccessoryView;
@property(readonly) NSString *reuseIdentifier;
@property(retain) UIView *rightCalloutAccessoryView;
@property CGPoint calloutOffset;
@property BOOL canShowCallout;
@property CGPoint centerOffset;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;

+ (id)_disclosureCalloutButton;
+ (NSUInteger)_selectedZIndex;
+ (id)_streetViewButtonDisabledImage;
+ (id)_streetViewButtonImage;
+ (id)_streetViewButtonPressedImage;
+ (id)_streetViewCalloutButton;
+ (NSUInteger)_zIndex;

- (NSInteger)_annotationViewType;
- (id)_calloutView;
- (BOOL)_canDisplayDisclosureInCallout;
- (BOOL)_canDisplayPlacemarkInCallout;
- (BOOL)_canDisplayStreetViewInCallout;
- (id)_contentLayer;
- (BOOL)_hasSearchResult;
- (NSUInteger)_mapType;
- (id)_overlayView;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (id)_searchResult;
- (void)_setCalloutView:(id)arg1;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (void)_setCanDisplayStreetViewInCallout:(BOOL)arg1;
- (void)_setMapType:(NSUInteger)arg1;
- (void)_setSearchResult:(id)arg1;
- (void)_setZIndex:(NSUInteger)arg1 notify:(BOOL)arg2;
- (void)_setZIndex:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantRect;
- (void)_updateZIndex;
- (NSUInteger)_zIndex;
- (id)annotation;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (BOOL)canShowCallout;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)leftCalloutAccessoryView;
- (id)panoramaID;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)rightCalloutAccessoryView;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCanShowCallout:(BOOL)arg1;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setPanoramaID:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;

@end
