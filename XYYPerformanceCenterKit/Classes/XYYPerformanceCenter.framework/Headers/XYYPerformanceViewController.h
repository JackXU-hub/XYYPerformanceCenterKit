//
//  XYYPerformanceViewController.h
//  XYYPerformanceCenter
//
//  Created by PerTerbin on 2018/6/3.
//  Copyright © 2018年 PerTerbin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYYPerformanceWindow.h"

@interface XYYPerformanceViewController : UIViewController<XYYPerformanceWindowDelegate>

- (void)setFPSValue:(CGFloat)fpsValue;
- (void)setCPUValue:(CGFloat)cpuValue;
- (void)setMemoryValue:(CGFloat)memoryValue;
- (void)findMenoryLeakWithViewStack:(NSArray *)viewStack retainCycle:(NSArray *)retainCycle;

@end
