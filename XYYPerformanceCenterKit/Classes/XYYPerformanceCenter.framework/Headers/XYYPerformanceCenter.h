//
//  XYYPerformanceCenter.h
//  XYYPerformanceCenter
//
//  Created by PerTerbin on 2018/6/3.
//  Copyright © 2018年 PerTerbin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XYYPerformanceViewController.h"

@interface XYYPerformanceCenter : NSObject

@property (nonatomic, strong) XYYPerformanceViewController *viewController;

+ (instancetype)defaultCenter;

- (void)enable;
- (void)disable;

@end
