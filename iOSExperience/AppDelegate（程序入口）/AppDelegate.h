//
//  AppDelegate.h
//  iOSExperience
//
//  Created by Ben Lv on 2018/5/23.
//  Copyright © 2018年 avatar. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YLTabBarControllerConfig;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property(nonatomic,strong)YLTabBarControllerConfig *mainTabBar;
+ (AppDelegate *)shareAppDelegate;
@end

