/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSAddressRange, LBSFeatureId, NSMutableArray;

@interface LBSAddressComponent : PBCodable {
    LBSFeatureId *_feature_id;
    NSInteger _feature_type;
    BOOL _hasFeature_type;
    NSMutableArray *_parsed_names;
    LBSAddressRange *_range;
    NSInteger _type;
}

@property(retain) LBSAddressRange *range; /* unknown property attribute: V_range */
@property(retain) LBSFeatureId *feature_id; /* unknown property attribute: V_feature_id */
@property(readonly) BOOL hasFeature_type; /* unknown property attribute: V_hasFeature_type */
@property NSInteger feature_type; /* unknown property attribute: V_feature_type */
@property(retain) NSMutableArray *parsed_names; /* unknown property attribute: V_parsed_names */
@property NSInteger type; /* unknown property attribute: V_type */
@property(readonly) BOOL hasFeature_id;
@property(readonly) BOOL hasRange;
@property(readonly) NSInteger parsed_namesCount;

- (void)addParsed_name:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)feature_id;
- (NSInteger)feature_type;
- (BOOL)hasFeature_id;
- (BOOL)hasFeature_type;
- (BOOL)hasRange;
- (id)init;
- (id)parsed_nameAtIndex:(NSUInteger)arg1;
- (id)parsed_names;
- (NSInteger)parsed_namesCount;
- (id)range;
- (BOOL)readFrom:(id)arg1;
- (void)setFeature_id:(id)arg1;
- (void)setFeature_type:(NSInteger)arg1;
- (void)setParsed_name:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setParsed_names:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (NSInteger)type;
- (void)writeTo:(id)arg1;

@end
