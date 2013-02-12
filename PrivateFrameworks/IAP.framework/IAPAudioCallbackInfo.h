/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {
    int (*_deviceStateChangedCallback)();
    int (*_pauseOnHeadphoneDisconnectChangedCallback)();
    int (*_volumeChangedCallback)();
    int (*_volumeControlSupportChangedCallback)();
    void *_deviceStateChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    struct __CFRunLoop { } *_dnCenterRunLoop;
    NSLock *_lock;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    void *_volumeChangedContext;
    void *_volumeControlSupportChangedContext;
}

+ (id)sharedInstance;

- (void)_deviceStateChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)clearDeviceStateChangedCallback;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)clearVolumeChangedCallback;
- (void)clearVolumeControlSupportChangedCallback;
- (void)dealloc;
- (id)init;
- (void)setupDeviceStateChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupVolumeChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupVolumeControlSupportChangedCallback:(int (*)())arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop { }*)arg1;

@end
