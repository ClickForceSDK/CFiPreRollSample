//
//  MFPreRollView.h
//  iMFAD
//
//  Created by Charles on 2017/7/18.
//  Copyright © 2017年 clickforce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleInteractiveMediaAds/GoogleInteractiveMediaAds.h>

@protocol MFPreRollDelegate <NSObject>

//Pre-roll Vast影片播完處理
- (void)readyPlayVideo;

//Pre-roll Vast影片錯誤處理
- (void)onFailedToVast;

@end

@interface MFPreRollView : UIView



@property(nonatomic, strong) AVPlayer *vastPlayer;

@property (nonatomic, strong) UIButton *mutButton;

@property (nonatomic, strong) UIButton *playButton;
// SDK
/// Entry point for the SDK. Used to make ad requests.
@property(nonatomic, strong) IMAAdsLoader *adsLoader;

/// Playhead used by the SDK to track content video progress and insert mid-rolls.
@property(nonatomic, strong) IMAAVPlayerContentPlayhead *contentPlayhead;

/// Main point of interaction with the SDK. Created by the SDK as the result of an ad request.
@property(nonatomic, strong) IMAAdsManager *adsManager;

@property(nonatomic, strong) IMAAdDisplayContainer *adDisplayContainer;

@property(nonatomic,weak)id<MFPreRollDelegate>delegate;

#pragma mark - Pre-roll get ViewController
-(void)getView:(UIViewController *)view;

#pragma mark - 設定版位
-(void)setPreRollZoneID:(NSString *)zoneID;

#pragma mark - Pre-roll
-(void)setPreRollPlayer;

#pragma mark - 設定是否開啟全屏
-(void)setIsFull:(BOOL)result;

#pragma mark - 設定是否開啟控制聲音功能
-(void)setOpenVolume:(BOOL)result;

#pragma mark - 關閉Pre-roll 影片
-(void)closePrerollVideo;

@end
