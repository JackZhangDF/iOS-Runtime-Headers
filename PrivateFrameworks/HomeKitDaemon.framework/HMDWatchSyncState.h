/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSyncState : NSObject {
    NSString * _deviceId;
    HMDPairedSync * _pairedSync;
    NSMutableArray * _syncs;
}

@property (nonatomic, readonly) HMDWatchSync *currentSync;
@property (nonatomic, readonly, copy) NSString *deviceId;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) HMDPairedSync *pairedSync;

+ (BOOL)isNewBetter:(unsigned int)arg1 present:(unsigned int)arg2;
+ (id)optionAsString:(unsigned int)arg1;
+ (id)resultAsString:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)addNewSync:(id)arg1;
- (id)currentSync;
- (void)dealloc;
- (id)description;
- (id)deviceId;
- (id)identifier;
- (id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2;
- (id)pairedSync;
- (BOOL)removeSync;

@end
