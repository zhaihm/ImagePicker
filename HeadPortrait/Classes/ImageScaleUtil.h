//
//  ImageScaleUtil.h
//  ImagePicker
//
//  Created by zhm on 15/9/29.
//  Copyright © 2015年 zhm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageScaleUtil : NSObject

+ (UIImage *)imageByScalingToMaxSize:(UIImage *)sourceImage;
+ (UIImage *)imageByScalingAndCroppingForSourceImage:(UIImage *)sourceImage targetSize:(CGSize)targetSize;

@end
