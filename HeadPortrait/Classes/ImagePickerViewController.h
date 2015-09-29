//
//  ImagePickerViewController.h
//  HeadPortrait
//
//  Created by zhm on 15/7/27.
//  Copyright (c) 2015年 zhm. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImagePickerViewController;

@protocol ImagePickerDelegate <NSObject>

- (void)imagePicker:(ImagePickerViewController *) pickerViewController didFinished:(UIImage *)editedImage;
- (void)imagePickerDidCancel:(ImagePickerViewController *)pickerViewControlelr;

@end

@interface ImagePickerViewController : UIViewController

@property (nonatomic, assign) NSInteger tag;
@property (nonatomic, assign) id<ImagePickerDelegate> delegate;
@property (nonatomic, assign) CGRect cropFrame;

- (id)initWithImage:(UIImage *)originalImage cropFrame:(CGRect)cropFrame limitScaleRatio:(NSInteger)limitRatio;

@end
