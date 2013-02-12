/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKAnnotation>, MKSearchResult, NSString, UICalloutView, UIImage, UIView;

@interface MKAnnotationViewInternal : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int canDisplayStreetViewInCallout : 1; 
    <MKAnnotation> *annotation;
    } calloutOffset;
    UICalloutView *calloutView;
    } centerOffset;
    } flags;
    UIImage *image;
    UIView *leftCalloutAccessoryView;
    NSUInteger mapType;
    NSString *reuseIdentifier;
    UIView *rightCalloutAccessoryView;
    MKSearchResult *searchResult;
    NSUInteger zIndex;
}

@end
