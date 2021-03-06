//
//  SongsModel.m
//  MyMusicTest
//
//  Created by MYMac on 15/12/13.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import "SongsModel.h"

@implementation SongsModel


+ (NSMutableArray*)parseRespondsData:(NSDictionary*)dictionary{
    NSMutableArray *mainArray = [NSMutableArray array];
    NSArray *dataArray = dictionary[@"content"];
    for (NSDictionary *dic in dataArray) {
        SongsModel *model = [[SongsModel alloc] init];
        [model setValuesForKeysWithDictionary:dic];
        [mainArray addObject:model];
    }
    return mainArray;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
