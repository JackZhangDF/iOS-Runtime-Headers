/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAStream : ASAObject

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly, copy) NSArray *availablePhysicalFormats;
@property (nonatomic, readonly, copy) NSArray *availableVirtualFormats;
@property (nonatomic, readonly, copy) NSArray *controlObjectIDs;
@property (getter=isInput, nonatomic, readonly) BOOL input;
@property (nonatomic, readonly) unsigned int latency;
@property (nonatomic, copy) NSString *name;
@property (getter=isOutput, nonatomic, readonly) BOOL output;
@property (nonatomic, copy) ASAAudioFormat *physicalFormat;
@property (getter=isPhysicalFormatSettable, nonatomic, readonly) BOOL physicalFormatSettable;
@property (nonatomic, readonly) unsigned int startingChannel;
@property (nonatomic, readonly) unsigned int terminalType;
@property (nonatomic, copy) ASAAudioFormat *virtualFormat;
@property (getter=isVirtualFormatSettable, nonatomic, readonly) BOOL virtualFormatSettable;

- (id)availablePhysicalFormats;
- (id)availableVirtualFormats;
- (id)controlObjectIDs;
- (id)controls;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (BOOL)isActive;
- (BOOL)isInput;
- (BOOL)isOutput;
- (BOOL)isPhysicalFormatSettable;
- (BOOL)isVirtualFormatSettable;
- (unsigned int)latency;
- (id)name;
- (id)physicalFormat;
- (void)setName:(id)arg1;
- (void)setPhysicalFormat:(id)arg1;
- (void)setVirtualFormat:(id)arg1;
- (unsigned int)startingChannel;
- (unsigned int)terminalType;
- (id)virtualFormat;

@end