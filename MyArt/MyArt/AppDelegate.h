//
//  AppDelegate.h
//  MyMusicTest
//
//  Created by MYMac on 15/12/5.
//  Copyright © 2015年 高庆国. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HTTPServer;
@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    HTTPServer *httpServer;
}
@property (strong, nonatomic) UIWindow *window;


@end

