/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class NSData;

@interface RTFCPZArchiveMemoryInputStream : NSObject <RTFCPZArchiveInputStream> {
    char *mBytes;
    NSData *mData;
    long long mSize;
}

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(NSUInteger*)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (long long)size;

@end
