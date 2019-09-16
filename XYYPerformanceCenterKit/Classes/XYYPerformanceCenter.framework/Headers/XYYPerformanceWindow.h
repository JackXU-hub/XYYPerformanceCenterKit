//
//  XYYPerformanceWindow.h
//  XYYPerformanceCenter
//
//  Created by PerTerbin on 2018/6/3.
//  Copyright © 2018年 PerTerbin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XYYPerformanceWindowDelegate <NSObject>

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface XYYPerformanceWindow : UIWindow

@property (nonatomic, weak) id<XYYPerformanceWindowDelegate> delegate;

@end
