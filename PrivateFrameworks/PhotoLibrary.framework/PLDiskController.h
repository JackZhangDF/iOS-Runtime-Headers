/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLDiskController : NSObject {
    struct { 
        unsigned int dontWarnOfDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int didSetFreeDiskSpaceThreshold : 1; 
        unsigned int extra : 29; 
    } _flags;
    long long _freeDiskSpaceThreshold;
    double _lastFSCheck;
}

+ (id)sharedInstance;

- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (long long)diskSpaceAvailableForUse;
- (long long)freeDiskSpaceThreshold;
- (BOOL)hasEnoughDiskToTakePicture;
- (id)init;
- (void)noteFileSystemChanged:(id)arg1;
- (void)presentDiskSpaceWarningIfNecessary:(BOOL)arg1;

@end
