//
//  ViewController.h
//  CFiPreRollSample
//
//  Created by Charles on 2017/7/20.
//  Copyright © 2017年 clickforce. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MFPreRollView.h"

@interface ViewController : UIViewController<MFPreRollDelegate>
{
     MFPreRollView *preroll;
}

@property (strong, nonatomic) IBOutlet UIView *prerollview;

@end

