/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class SULinkControl, SUSubtitledButton, UIAlertView;

@interface SUTermsAndConditionsView : XXUnknownSuperclass {
	UIAlertView *_accountButtonAlert;	// 48 = 0x30
	SUSubtitledButton *_button;	// 52 = 0x34
	BOOL _hideAccountButton;	// 56 = 0x38
	float _rightMargin;	// 60 = 0x3c
	int _style;	// 64 = 0x40
	SULinkControl *_termsAndConditionsControl;	// 68 = 0x44
}
@property(assign, nonatomic) int style;	// G=0x3078d; S=0x2f351; @synthesize=_style
@property(assign, nonatomic) float rightMargin;	// G=0x3077d; S=0x2f315; @synthesize=_rightMargin
@property(assign, nonatomic) BOOL hideAccountButton;	// G=0x3076d; S=0x2f2d1; @synthesize=_hideAccountButton
// declared property getter: - (int)style;	// 0x3078d
// declared property getter: - (float)rightMargin;	// 0x3077d
// declared property getter: - (BOOL)hideAccountButton;	// 0x3076d
- (void)_updateButton;	// 0x304f9
- (id)_termsAndConditionsControl;	// 0x3033d
- (int)_linkStyleForStyle:(int)style;	// 0x30331
- (void)_destroyButton;	// 0x302cd
- (void)_clearButtonSelection:(id)selection;	// 0x30289
- (float)_buttonHeightForStyle:(int)style;	// 0x30271
- (id)_button;	// 0x2fbe9
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x2fa31
- (void)_accountsChangedNotification:(id)notification;	// 0x2fa21
- (void)_termsAndConditionsAction:(id)action;	// 0x2f9dd
- (void)_buttonAction:(id)action;	// 0x2f5f5
- (void)sizeToFit;	// 0x2f571
- (void)layoutSubviews;	// 0x2f3cd
// declared property setter: - (void)setStyle:(int)style;	// 0x2f351
// declared property setter: - (void)setRightMargin:(float)margin;	// 0x2f315
// declared property setter: - (void)setHideAccountButton:(BOOL)button;	// 0x2f2d1
- (void)dealloc;	// 0x2f1d1
- (id)initWithFrame:(CGRect)frame;	// 0x2f149
@end