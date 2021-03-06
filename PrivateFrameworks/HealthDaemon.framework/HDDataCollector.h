/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollector : NSObject <HDHealthDataCollector> {
    double  _collectionInterval;
    HDDeviceEntity * _deviceEntity;
    BOOL  _disabled;
    int  _failureRetryCount;
    HKObjectType * _observedType;
    HDPrimaryProfile * _primaryProfile;
    NSObject<OS_dispatch_queue> * _queue;
    HDSourceEntity * _sourceEntity;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL disabled;
@property (readonly) unsigned int hash;
@property (readonly) HDSourceEntity *sourceEntity;
@property (readonly) Class superclass;

+ (BOOL)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2;
+ (id)_retrieveContextForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3;
+ (double)defaultCollectionInterval;
+ (id)domain;
+ (id)observedType;
+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;

- (void).cxx_destruct;
- (id)_contextFromDictionary:(id)arg1;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_dictionaryFromContext:(id)arg1;
- (void)_performAsync:(id /* block */)arg1;
- (void)_performSync:(id /* block */)arg1;
- (BOOL)_persistContext:(id)arg1 forKey:(id)arg2;
- (BOOL)_persistPrimaryContext:(id)arg1;
- (BOOL)_persistSecondaryContext:(id)arg1;
- (void)_queue_beginStreaming;
- (void)_queue_beginStreamingIfNecessary;
- (id)_queue_deviceEntity;
- (BOOL)_queue_disabled;
- (void)_queue_incrementFailureRetryCounter;
- (void)_queue_receivedData;
- (void)_queue_resetFailureRetryCounter;
- (void)_queue_retryFromFailure;
- (BOOL)_queue_shouldRetryFromFailure;
- (BOOL)_queue_streaming;
- (void)_queue_transitionToFailure;
- (void)_queue_transitionToIdle;
- (void)_queue_transitionToStreaming;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (id)_retrieveContextForKey:(id)arg1;
- (id)_retrievePrimaryContext;
- (id)_retrieveSecondaryContext;
- (id)_sensorDatumFromContext:(id)arg1;
- (double)collectionInterval;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(id)arg1;
- (id)dataCollectorDiagnosticDescription;
- (id)deviceEntity;
- (BOOL)disabled;
- (id)initWithPrimaryProfile:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setDisabled:(BOOL)arg1;
- (id)sourceEntity;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(id /* block */)arg1;

@end
