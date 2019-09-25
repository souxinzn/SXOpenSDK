//
//  CommonUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CommonUtil : NSObject

+ (NSBundle *)bundleWithBundleName:(NSString *)bundleName podName:(NSString *)podName;
+ (NSBundle*) getBundleByName:(NSString*) name;

@end

NS_ASSUME_NONNULL_END
