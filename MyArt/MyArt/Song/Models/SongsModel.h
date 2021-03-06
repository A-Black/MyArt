//
//  SongsModel.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/13.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import "BaseModel.h"

@interface SongsModel : BaseModel

@property (nonatomic) NSString *listid;
@property (nonatomic) NSString *listenum;
@property (nonatomic) NSString *title;
@property (nonatomic) NSString *pic_300;

+ (NSMutableArray*)parseRespondsData:(NSDictionary*)dictionary;

@end
