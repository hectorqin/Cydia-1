/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class NSMutableSet, NSSet, NSMutableDictionary, NSObject, NSString, UIViewController;
@protocol PLAssetContainer;

@interface PLPhotosPickerSession : XXUnknownSuperclass {
@private
	NSObject *_destinationAlbum;	// 4 = 0x4
	UIViewController *_rootViewController;	// 8 = 0x8
	NSString *_currentPrompt;	// 12 = 0xc
	NSMutableDictionary *_selectedAssetsByAlbumID;	// 16 = 0x10
	NSMutableSet *_allSelectedAssets;	// 20 = 0x14
	int _bannerButtonType;	// 24 = 0x18
	id _bannerButtonAction;	// 28 = 0x1c
	id _sessionDidEndHandler;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableDictionary *selectedAssetsByAlbumID;	// G=0xd60a9; S=0xd591d; @synthesize=_selectedAssetsByAlbumID
@property(readonly, assign, nonatomic) NSSet *allSelectedAssets;	// G=0xd60b9; @synthesize=_allSelectedAssets
@property(copy, nonatomic) id bannerButtonAction;	// G=0xd60e9; S=0xd60f9; @synthesize=_bannerButtonAction
@property(assign, nonatomic) int bannerButtonType;	// G=0xd60c9; S=0xd60d9; @synthesize=_bannerButtonType
@property(copy, nonatomic) NSString *currentPrompt;	// G=0xd6041; S=0xd6051; @synthesize=_currentPrompt
@property(retain, nonatomic) NSObject<PLAssetContainer> *destinationAlbum;	// G=0xd6075; S=0xd6085; @synthesize=_destinationAlbum
// declared property setter: - (void)setBannerButtonAction:(id)action;	// 0xd60f9
// declared property getter: - (id)bannerButtonAction;	// 0xd60e9
// declared property setter: - (void)setBannerButtonType:(int)type;	// 0xd60d9
// declared property getter: - (int)bannerButtonType;	// 0xd60c9
// declared property getter: - (id)allSelectedAssets;	// 0xd60b9
// declared property getter: - (id)selectedAssetsByAlbumID;	// 0xd60a9
// declared property setter: - (void)setDestinationAlbum:(NSObject *)album;	// 0xd6085
// declared property getter: - (NSObject *)destinationAlbum;	// 0xd6075
// declared property setter: - (void)setCurrentPrompt:(id)prompt;	// 0xd6051
// declared property getter: - (id)currentPrompt;	// 0xd6041
- (void)_updatePromptText;	// 0xd5fc1
- (void)_dismissSessionAnimated:(BOOL)animated;	// 0xd5df5
- (void)handleDoneButton:(id)button;	// 0xd5de1
- (void)cancelSessionAnimated:(BOOL)animated;	// 0xd5d91
- (void)beginSessionWithModalViewController:(id)modalViewController overViewController:(id)controller completionHandler:(id)handler;	// 0xd5d05
- (void)setSelectedAssets:(id)assets forAlbumWithID:(id)anId added:(id)added removed:(id)removed;	// 0xd5a31
// declared property setter: - (void)setSelectedAssetsByAlbumID:(id)anId;	// 0xd591d
- (void)dealloc;	// 0xd5879
- (id)init;	// 0xd57e1
@end