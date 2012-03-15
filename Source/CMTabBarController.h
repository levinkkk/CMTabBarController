//
//  CMTabBarController.h
//
//  Created by Constantine Mureev on 13.03.12.
//  Copyright (c) 2012 Team Force LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CMTabBar.h"

@interface CMTabBarController : UIViewController

@property(nonatomic,copy) NSArray*              viewControllers;

@property(nonatomic,assign) UIViewController*   selectedViewController;
@property(nonatomic,assign) NSUInteger          selectedIndex;

@property(nonatomic,retain) CMTabBar*           tabBar;

@property(nonatomic,assign) id<UITabBarControllerDelegate> delegate;

@end