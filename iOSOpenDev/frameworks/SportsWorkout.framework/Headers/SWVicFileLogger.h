/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/XXUnknownSuperclass.h>

@class NSData, NSMutableData, NSFileHandle;

@interface SWVicFileLogger : XXUnknownSuperclass {
	NSFileHandle *_vicFileHandle;	// 4 = 0x4
	NSMutableData *_vicFileData;	// 8 = 0x8
	NSData *_previousPacket;	// 12 = 0xc
}
- (void)logPacket:(id)packet rssi:(BOOL)rssi;	// 0x33a89
- (void)dealloc;	// 0x33a15
- (id)init;	// 0x33731
@end