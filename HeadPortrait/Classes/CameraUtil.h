//
//  CameraUtil.h
//  ImagePicker
//
//  Created by zhm on 15/9/29.
//  Copyright © 2015年 zhm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface CameraUtil : NSObject

+ (BOOL) isCameraAvailable;
+ (BOOL) isRearCameraAvailable;
+ (BOOL) isFrontCameraAvailable;
+ (BOOL) doesCameraSupportTakingPhotos;
+ (BOOL) isPhotoLibraryAvailable;
+ (BOOL) canUserPickVideosFromPhotoLibrary;
+ (BOOL) canUserPickPhotosFromPhotoLibrary;
+ (BOOL) cameraSupportsMedia:(NSString *)paramMediaType sourceType:(UIImagePickerControllerSourceType)paramSourceType;

@end
