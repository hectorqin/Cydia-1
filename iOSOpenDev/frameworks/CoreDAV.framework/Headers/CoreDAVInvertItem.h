/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
}
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x23e21; S=0x23e35; @synthesize=_principal
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x23e35
// declared property getter: - (id)principal;	// 0x23e21
- (id)copyParseRules;	// 0x23d25
- (id)description;	// 0x23c71
- (void)write:(id)write;	// 0x23bc5
- (void)dealloc;	// 0x23b79
- (id)init;	// 0x23b4d
@end