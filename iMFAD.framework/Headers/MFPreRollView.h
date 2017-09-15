//
//  MFPreRollView.h
//  iMFAD
//
//  Created by 郭堯彰 on 2017/9/11.
//  Copyright © 2017年 Charles. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MFPreRollDelegate <NSObject>

@optional
//Pre-roll Vast影片播完處理
- (void)readyPlayVideo;

//Pre-roll Vast影片錯誤處理
- (void)onFailedToVast;

@end
@interface MFPreRollView : UIView

@property (nonatomic, strong) UIButton *mutButton;
@property (nonatomic, strong) UIButton *playButton;


@property(nonatomic,weak)id<MFPreRollDelegate>delegate;

#pragma mark - Pre-roll get ViewController
-(void)getView:(UIViewController *)view;

#pragma mark - 設定版位
-(void)setPreRollZoneID:(NSString *)zoneID;

#pragma mark - 關閉Pre-roll 影片
-(void)setPreRollPlayer;

#pragma mark - 設定是否開啟全屏
-(void)setIsFull:(BOOL)result;

#pragma mark - 設定是否開啟控制聲音功能
-(void)setOpenVolume:(BOOL)result;

#pragma mark - 關閉Pre-roll 影片
-(void)closePrerollVideo;


@end
