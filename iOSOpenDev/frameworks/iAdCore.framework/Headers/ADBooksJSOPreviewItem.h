/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>
#import <iAdCore/QLPreviewItem.h>

@class NSString, NSURL;

@interface ADBooksJSOPreviewItem : XXUnknownSuperclass <QLPreviewItem> {
@private
	NSURL *_previewItemURL;	// 4 = 0x4
	NSString *_previewItemTitle;	// 8 = 0x8
}
@property(readonly, assign) NSString *previewItemTitle;	// G=0x34601; @synthesize=_previewItemTitle
@property(readonly, assign) NSURL *previewItemURL;	// G=0x345f1; @synthesize=_previewItemURL
// declared property getter: - (id)previewItemTitle;	// 0x34601
// declared property getter: - (id)previewItemURL;	// 0x345f1
- (void)dealloc;	// 0x34591
- (id)initWithURL:(id)url andTitle:(id)title;	// 0x34519
@end