#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "XYYBasePerformanceMonitor.h"
#import "XYYCPUMonitor.h"
#import "XYYFPSMonitor.h"
#import "XYYMemoryMonitor.h"
#import "XYYPerformanceCenter.h"
#import "XYYPerformanceViewController.h"
#import "XYYPerformanceWindow.h"

FOUNDATION_EXPORT double XYYPerformanceCenterKitVersionNumber;
FOUNDATION_EXPORT const unsigned char XYYPerformanceCenterKitVersionString[];

