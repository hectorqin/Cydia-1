/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WMParagraphStyle.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/WMStyle.h>


__attribute__((visibility("hidden")))
@interface WMParagraphStyle : WMStyle {
@private
	BOOL mIsInTextFrame;	// 12 = 0xc
}
- (id)initWithWDParagraphProperties:(id)wdparagraphProperties isInTextFrame:(BOOL)textFrame;	// 0x2f0bbd
- (id)initWithWDStyle:(id)wdstyle isInTextFrame:(BOOL)textFrame;	// 0x930bd
- (void)addParagraphStyleCharacterProperties:(id)properties;	// 0xa1ea5
- (void)addParagraphProperties:(id)properties;	// 0x93179
- (void)addListProperties:(id)properties;	// 0xa12bd
@end

@interface WMParagraphStyle (Private)
+ (BOOL)isShadingNull:(id)null;	// 0x142c71
- (void)mapBorders:(id)borders;	// 0x93f21
@end