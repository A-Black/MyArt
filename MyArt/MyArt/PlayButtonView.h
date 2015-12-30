//
//  PlayButtonView.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/8.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayButtonView : UIView

@property (nonatomic, copy) void(^operation)(UIButton *);//操作

@property (weak, nonatomic) IBOutlet UIButton *cycleButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
@property (weak, nonatomic) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UIButton *previousButton;
@property (weak, nonatomic) IBOutlet UIButton *otherButton;


@end
