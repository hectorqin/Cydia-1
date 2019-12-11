/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/XXUnknownSuperclass.h>

@class NSString;

@interface PTPInitCommandACKPacket : XXUnknownSuperclass {
	unsigned _connectionNumber;	// 4 = 0x4
	unsigned char _responderGUID[16];	// 8 = 0x8
	NSString *_responderFriendlyName;	// 24 = 0x18
}
@property(assign) unsigned long connectionNumber;	// G=0x2840d; S=0x2841d; converted property
@property(retain) NSString *responderFriendlyName;	// G=0x2843d; S=0x2852d; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber responderGUID:(char *)guid responderFriendlyName:(id)name;	// 0x28469
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x288c5
- (void)dealloc;	// 0x28879
- (id)contentForTCP;	// 0x287a5
- (id)description;	// 0x2865d
// converted property getter: - (unsigned long)connectionNumber;	// 0x2840d
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x2841d
- (const char *)responderGUID;	// 0x2842d
- (id)responderGUIDString;	// 0x285a5
- (void)setResponderGUID:(char *)guid;	// 0x2844d
// converted property getter: - (id)responderFriendlyName;	// 0x2843d
// converted property setter: - (void)setResponderFriendlyName:(id)name;	// 0x2852d
@end