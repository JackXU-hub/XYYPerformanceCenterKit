//
//  XYYMemoryMonitor.h
//  XYYPerformanceCenter
//
//  Created by PerTerbin on 2018/6/3.
//  Copyright © 2018年 PerTerbin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XYYBasePerformanceMonitor.h"

@interface XYYMemoryMonitor : XYYBasePerformanceMonitor

+ (instancetype)sharedInstance;

/// 当前设备已使用的内存（MB）
+ (CGFloat)deviceUsedMemory;
/// 当前设备可用内存（MB）
+ (CGFloat)deviceAvailableMemory;

@end
