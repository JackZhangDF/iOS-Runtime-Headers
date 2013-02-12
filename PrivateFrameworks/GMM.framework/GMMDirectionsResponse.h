/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDateTime, GMMDirectionsIconResponse, NSMutableArray, NSString;

@interface GMMDirectionsResponse : PBCodable {
    NSMutableArray *_agencys;
    NSMutableArray *_alerts;
    NSMutableArray *_alternateModes;
    BOOL _hasRecommendedDistanceUnits;
    BOOL _hasRequestedTimeType;
    GMMDirectionsIconResponse *_icons;
    NSMutableArray *_modes;
    NSString *_notice;
    NSMutableArray *_optionsUseds;
    NSInteger _recommendedDistanceUnits;
    GMMDateTime *_requestedDateTime;
    NSInteger _requestedTimeType;
    NSInteger _status;
    NSMutableArray *_trips;
    NSMutableArray *_waypointFeedbacks;
}

@property(retain) NSMutableArray *alternateModes; /* unknown property attribute: V_alternateModes */
@property(retain) NSMutableArray *alerts; /* unknown property attribute: V_alerts */
@property(retain) NSMutableArray *optionsUseds; /* unknown property attribute: V_optionsUseds */
@property(readonly) BOOL hasRecommendedDistanceUnits; /* unknown property attribute: V_hasRecommendedDistanceUnits */
@property NSInteger recommendedDistanceUnits; /* unknown property attribute: V_recommendedDistanceUnits */
@property(retain) NSMutableArray *agencys; /* unknown property attribute: V_agencys */
@property(retain) NSString *notice; /* unknown property attribute: V_notice */
@property(retain) GMMDirectionsIconResponse *icons; /* unknown property attribute: V_icons */
@property(retain) NSMutableArray *trips; /* unknown property attribute: V_trips */
@property(retain) NSMutableArray *waypointFeedbacks; /* unknown property attribute: V_waypointFeedbacks */
@property(readonly) BOOL hasRequestedTimeType; /* unknown property attribute: V_hasRequestedTimeType */
@property NSInteger requestedTimeType; /* unknown property attribute: V_requestedTimeType */
@property(retain) GMMDateTime *requestedDateTime; /* unknown property attribute: V_requestedDateTime */
@property(retain) NSMutableArray *modes; /* unknown property attribute: V_modes */
@property NSInteger status; /* unknown property attribute: V_status */
@property(readonly) NSInteger agencysCount;
@property(readonly) NSInteger alertsCount;
@property(readonly) NSInteger alternateModesCount;
@property(readonly) BOOL hasIcons;
@property(readonly) BOOL hasNotice;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) NSInteger mode;
@property(readonly) NSInteger modesCount;
@property(readonly) NSInteger optionsUsedsCount;
@property(readonly) NSInteger tripsCount;
@property(readonly) NSInteger waypointFeedbacksCount;

+ (NSInteger)modeFlagForMode:(NSInteger)arg1;
+ (NSInteger)modeForModeFlag:(NSInteger)arg1;

- (void)addAgency:(id)arg1;
- (void)addAlert:(id)arg1;
- (void)addAlternateMode:(id)arg1;
- (void)addMode:(NSInteger)arg1;
- (void)addOptionsUsed:(id)arg1;
- (void)addTrip:(id)arg1;
- (void)addWaypointFeedback:(id)arg1;
- (id)agencyAtIndex:(NSUInteger)arg1;
- (id)agencys;
- (NSInteger)agencysCount;
- (id)alertAtIndex:(NSUInteger)arg1;
- (id)alerts;
- (NSInteger)alertsCount;
- (id)alternateModeAtIndex:(NSUInteger)arg1;
- (id)alternateModes;
- (NSInteger)alternateModesCount;
- (void)dealloc;
- (id)description;
- (BOOL)hasIcons;
- (BOOL)hasNotice;
- (BOOL)hasRecommendedDistanceUnits;
- (BOOL)hasRequestedDateTime;
- (BOOL)hasRequestedTimeType;
- (id)icons;
- (id)init;
- (NSInteger)mode;
- (NSInteger)modeAtIndex:(NSUInteger)arg1;
- (id)modes;
- (NSInteger)modesCount;
- (id)notice;
- (id)optionsUsedAtIndex:(NSUInteger)arg1;
- (id)optionsUseds;
- (NSInteger)optionsUsedsCount;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)recommendedDistanceUnits;
- (id)requestedDateTime;
- (NSInteger)requestedTimeType;
- (void)setAgency:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setAgencys:(id)arg1;
- (void)setAlert:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setAlerts:(id)arg1;
- (void)setAlternateMode:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setAlternateModes:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setMode:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setModes:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setOptionsUsed:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setOptionsUseds:(id)arg1;
- (void)setRecommendedDistanceUnits:(NSInteger)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setRequestedTimeType:(NSInteger)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setTrip:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setTrips:(id)arg1;
- (void)setWaypointFeedback:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setWaypointFeedbacks:(id)arg1;
- (NSInteger)status;
- (id)tripAtIndex:(NSUInteger)arg1;
- (id)trips;
- (NSInteger)tripsCount;
- (id)waypointFeedbackAtIndex:(NSUInteger)arg1;
- (id)waypointFeedbacks;
- (NSInteger)waypointFeedbacksCount;
- (void)writeTo:(id)arg1;

@end
