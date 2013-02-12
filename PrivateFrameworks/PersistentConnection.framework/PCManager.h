/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSDate, NSString, NSThread, PCPersistentInterfaceManager, PCPersistentTimer, PHMGrowthAlgorithm;

@interface PCManager : NSObject <PCPersistentInterfaceManagerDelegate> {
    int (*_hbCallback)();
    unsigned int _onlyAllowsStyleSet : 1;
    unsigned int _hadEarlyHeartbeat : 1;
    unsigned int _isForcedHeartbeat : 1;
    unsigned int _hasStarted : 1;
    unsigned int _isRunning : 1;
    unsigned int _inCallback : 1;
    unsigned int _isPollingIntervalOverriden : 1;
    unsigned int _reconnectWithHBIDelay : 1;
    unsigned int _forceManualWhenRoaming : 1;
    NSInteger _connectionClassType;
    void *_context;
    NSInteger _defaultPollingInterval;
    PCPersistentTimer *_delayTimer;
    PHMGrowthAlgorithm *_growthAlgorithm;
    float _hbThreshold;
    PCPersistentTimer *_heartbeatTimer;
    NSString *_identifier;
    PCPersistentInterfaceManager *_interfaceManager;
    double _lastReachableTime;
    struct __CFRunLoop { } *_managerRunLoop;
    NSThread *_managerThread;
    NSDate *_onTimeHeartbeatDate;
    NSInteger _onlyAllowsStyle;
    NSInteger _overridePollingInterval;
    double _pingStartTime;
    void *_powerAssertion;
    NSString *_powerIdentifier;
    NSInteger _prefsStyle;
    struct __SCNetworkReachability { } *_reachability;
    NSInteger _reconnectIteration;
    NSDate *_scheduledWakeDate;
    NSInteger _state;
    NSInteger _wakeGracePeriod;
}

@property(retain,readonly) NSThread *managerThread; /* unknown property attribute: V_managerThread */

+ (NSInteger)_deviceOffset;
+ (void)_setSpeedFactor:(float)arg1;
+ (id)getLastSystemWakeDate;
+ (id)sharedPowerControlOperationQueue;
+ (double)timeIntervalSinceSystemWake;
+ (unsigned long long)uniqueIdentifier;

- (void)_adjustInterfaceAssertion;
- (void)_callBackWithEvent:(NSInteger)arg1;
- (void)_cancelAllExistingWakes;
- (void)_cancelScheduledWake;
- (void)_clearTimers;
- (NSInteger)_getCachedHBI;
- (void)_hbDelayedFire:(id)arg1;
- (void)_hbTimerFired:(id)arg1;
- (id)_hbiCacheDirectoryPath;
- (id)_hbiCachePath;
- (BOOL)_isCachedHBIStillValid:(NSInteger)arg1 date:(id)arg2;
- (void)_loadPreferencesAndStyleStateGeneratingEvent:(id)arg1;
- (NSInteger)_nextForcedHB;
- (void)_performWakeWithDate:(id)arg1 setWake:(BOOL)arg2;
- (id)_powerIdentifier;
- (void)_reachabilityCallback:(NSUInteger)arg1;
- (void)_releasePowerAssertion;
- (void)_resolveStateWithAction:(NSInteger)arg1;
- (void)_saveCachedHBI:(NSInteger)arg1;
- (void)_sendHBNotificationWithDelay:(double)arg1;
- (void)_setupHeartbeatForPoll;
- (void)_setupHeartbeatForPush:(NSInteger)arg1;
- (void)_setupHeartbeatForReconnect;
- (void)_setupWakeAtDate:(id)arg1;
- (void)_setupWakeTimeInterval:(double)arg1 heartbeatFireInterval:(double)arg2;
- (id)_stringForAction:(NSInteger)arg1;
- (id)_stringForEvent:(NSInteger)arg1;
- (void)_takePowerAssertion;
- (BOOL)_validateActionForCurrentStyle:(NSInteger)arg1;
- (void)cancelPollingIntervalOverride;
- (NSInteger)currentHeartbeatInterval;
- (void)dealloc;
- (void)endHeartbeat;
- (NSInteger)heartbeatGracePeriod;
- (id)initWithConnectionClass:(NSInteger)arg1 callback:(int (*)())arg2 serviceIdentifier:(id)arg3 context:(void*)arg4;
- (void)interfaceManager:(id)arg1 inHomeCountryStatusChanged:(BOOL)arg2;
- (void)interfaceManager:(id)arg1 interfaceStatusChanged:(BOOL)arg2;
- (id)managerThread;
- (NSInteger)pollingInterval;
- (void)resumeHeartbeat:(NSInteger)arg1;
- (void)setHeartbeatGracePeriod:(NSInteger)arg1;
- (void)setHeartbeatThreshold:(float)arg1;
- (void)setMaximumHeartbeatInterval:(NSInteger)arg1;
- (void)setMinimumHeartbeatInterval:(NSInteger)arg1;
- (void)setOnlyAllowsStyle:(NSInteger)arg1;
- (void)setOverridePollingInterval:(NSInteger)arg1;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)startHeartbeat;
- (NSInteger)style;

@end
