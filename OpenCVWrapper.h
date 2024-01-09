//
//  OpenCVWrapper.h
//  pointCloudSample
//
//  Created by Abdelrahman Amr on 01/01/2024.
//  Copyright © 2024 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject
+ (NSString *)getOpenCVVersion;
+ (UIImage *)grayscaleImg:(UIImage *)image;
+ (UIImage *)resizeImg:(UIImage *)image :(int)width :(int)height :(int)interpolation;
+ (UIImage *)detectSIFTFeaturesInImage:(UIImage *)image;
@end

NS_ASSUME_NONNULL_END
