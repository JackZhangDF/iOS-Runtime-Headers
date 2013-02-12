/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface OCPPackageRelationshipCollection : NSObject {
    NSMutableDictionary *mIdentifierMap;
    NSMutableDictionary *mTypeMap;
}

- (void)dealloc;
- (id)initWithRelationshipsXml:(struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; }*)arg1 baseLocation:(id)arg2;
- (id)relationshipForIdentifier:(id)arg1;
- (id)relationshipsByType:(id)arg1;

@end
