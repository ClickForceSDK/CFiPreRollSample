//
//  MFNativeAd.h
//  iMFAD
//
//  Created by 郭堯彰 on 2017/8/18.
//  Copyright © 2017年 clickforce. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class MFNativeAd;
@class MFAdImage;
@protocol MFNativeDelegate <NSObject>

@optional

- (void)requestAdFail;

- (void)onMFNativeAdDidLoad:(MFNativeAd *)nativeAd;

- (void)onMFNativeAdClick:(MFNativeAd *)nativeAd;

- (void)getFBNativeID:(NSString *)value;

@end

@interface MFNativeAd : NSObject

@property (nonatomic, copy) NSString * _Nullable bannerId;

@property (nonatomic, copy, readonly, nullable) NSString *title;

@property (nonatomic, copy, readonly, nullable) NSString *content;

@property (nonatomic, copy, readonly, nullable) NSString *advertiser;

@property (nonatomic, copy, readonly, nullable) NSString *buttonTitle;

@property (nonatomic, strong, readonly, nullable) MFAdImage *coverImg;

@property (nonatomic, weak, nullable) id <MFNativeDelegate>delegate;

#pragma mark 開始取得廣告
- (void)requestAd;

#pragma mark 設定是否輸出除錯訊息
- (void)debugInfo:(BOOL)state;

#pragma mark The whole area of the UIView will be clickable.
- (void)registerViewForInteraction:(UIView *_Nullable)view
                withViewController:(nullable UIViewController *)viewController;

@end



@interface MFAdImage : NSObject

@property (nonatomic, copy, readonly, nonnull) NSURL *url;

@property (nonatomic, assign, readonly) NSInteger width;

@property (nonatomic, assign, readonly) NSInteger height;


/**
 This is a method to initialize an MFAdImage.
 
 - Parameter url: the image url.
 - Parameter width: the image width.
 - Parameter height: the image height.
 */
- (instancetype _Nullable )initWithURL:(NSURL *)url
                      width:(NSInteger)width
                     height:(NSInteger)height NS_DESIGNATED_INITIALIZER;

/**
 Loads an image from self.url over the network, or returns the cached image immediately.
 
 - Parameter block: Block to handle the loaded image.
 */
- (void)loadImageAsyncWithBlock:(nullable void (^)(UIImage * __nullable image))block;

@end
NS_ASSUME_NONNULL_END

