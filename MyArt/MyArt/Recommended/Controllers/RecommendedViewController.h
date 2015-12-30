//
//  RecommendedViewController.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/8.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import "BaseViewController.h"

@interface RecommendedViewController : BaseViewController

@property (nonatomic, copy) void(^loadSong)(NSInteger, NSMutableArray *);

@end
