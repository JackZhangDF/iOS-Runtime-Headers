/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class GoogleLBSDelegate;

@interface GoogleLBSDelegate : NSObject <PBRequesterDelegate> {
    struct CLReverseGeocoderGoogle { int (**x1)(); struct Mutex { 
            void *_internal; 
        } x2; struct __CFString {} *x3; NSInteger x4; struct map<int,CLReverseGeocoder::PlacemarkRequest,std::less<int>,std::allocator<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> > > { 
            struct _Rb_tree<int,std::pair<const int, CLReverseGeocoder::PlacemarkRequest>,std::_Select1st<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> >,std::less<int>,std::allocator<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> > > { 
                struct _Rb_tree_impl<std::less<int>,false> { 
                    struct less<int> { } _M_key_compare; 
                    struct _Rb_tree_node_base { 
                        NSInteger _M_color; 
                        struct _Rb_tree_node_base {} *_M_parent; 
                        struct _Rb_tree_node_base {} *_M_left; 
                        struct _Rb_tree_node_base {} *_M_right; 
                    } _M_header; 
                    NSUInteger _M_node_count; 
                } _M_impl; 
            } _M_t; 
        } x5; int (*x6)(); void *x7; struct __CFRunLoopTimer {} *x8; GoogleLBSDelegate *x9; } *fGeocoder;
}

- (id)bestAddressInResponse:(id)arg1;
- (id)createPlacemarkFromAddress:(id)arg1;
- (id)initWithGeocoder:(struct CLReverseGeocoderGoogle { int (**x1)(); struct Mutex { void *x_2_1_1; } x2; struct __CFString {} *x3; NSInteger x4; struct map<int,CLReverseGeocoder::PlacemarkRequest,std::less<int>,std::allocator<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> > > { struct _Rb_tree<int,std::pair<const int, CLReverseGeocoder::PlacemarkRequest>,std::_Select1st<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> >,std::less<int>,std::allocator<std::pair<const int, CLReverseGeocoder::PlacemarkRequest> > > { struct _Rb_tree_impl<std::less<int>,false> { struct less<int> { } x_1_3_1; struct _Rb_tree_node_base { NSInteger x_2_4_1; struct _Rb_tree_node_base {} *x_2_4_2; struct _Rb_tree_node_base {} *x_2_4_3; struct _Rb_tree_node_base {} *x_2_4_4; } x_1_3_2; NSUInteger x_1_3_3; } x_1_2_1; } x_5_1_1; } x5; int (*x6)(); void *x7; struct __CFRunLoopTimer {} *x8; id x9; }*)arg1;
- (void)printAddress:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidFinish:(id)arg1;
- (void)savePlatformKey:(id)arg1;

@end
