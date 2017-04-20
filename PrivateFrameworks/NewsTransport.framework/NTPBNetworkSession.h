/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNetworkSession : PBCodable <NSCopying> {
    int  _cellularRadioAccessTechnology;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int wifiReachable : 1; 
    }  _has;
    unsigned long long  _sessionID;
    BOOL  _wifiReachable;
}

@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) BOOL wifiReachable;

- (int)cellularRadioAccessTechnology;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCellularRadioAccessTechnology;
- (BOOL)hasSessionID;
- (BOOL)hasWifiReachable;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)sessionID;
- (void)setCellularRadioAccessTechnology:(int)arg1;
- (void)setHasCellularRadioAccessTechnology:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasWifiReachable:(BOOL)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setWifiReachable:(BOOL)arg1;
- (BOOL)wifiReachable;
- (void)writeTo:(id)arg1;

@end