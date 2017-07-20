//
//  ViewController.m
//  CFiPreRollSample
//
//  Created by Charles on 2017/7/20.
//  Copyright © 2017年 clickforce. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //初始化建立MFVastVideoView，並設置和影片內容相同大小與相同位置
    //這個view 大小位置
    preroll = [[MFPreRollView alloc]initWithFrame:self.prerollview.frame];
    [preroll getView:self];
    [preroll setIsFull:YES];
    [preroll setPreRollZoneID:@"4397"];
    [preroll setDelegate:self];
    [preroll setPreRollPlayer];
    
    //將 MFPreRollView *preroll 的View 加載在欲播放影片View之上
    [self.view addSubview:preroll];
}

-(void)readyPlayVideo
{
    NSLog(@"PreRoll播完");
}

-(void)onFailedToVast
{
    NSLog(@"PreRoll Vast 有誤");
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
