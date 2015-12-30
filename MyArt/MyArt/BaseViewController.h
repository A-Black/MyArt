//
//  BaseViewController.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/7.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController

@property (nonatomic, copy) void(^loadMusic)(NSMutableArray *);

@end
