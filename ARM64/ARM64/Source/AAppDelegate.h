//
//  AppDelegate.h
//  ARM64
//
//  Created by evilpenguin on 6/28/20.
//  Copyright © 2020 EvilPenguin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ANavigationController.h"

@class AMainViewController, AInstructionLoader;
@interface AAppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, strong) ANavigationController *navController;
@property (nonatomic, strong) AInstructionLoader *loader;

@end