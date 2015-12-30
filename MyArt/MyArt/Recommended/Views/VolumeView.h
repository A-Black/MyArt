//
//  VolumeView.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/20.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VolumeView : UIView

@property (nonatomic, copy) void(^volume)(float value);

@end
