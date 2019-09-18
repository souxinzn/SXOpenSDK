//
//  SDKConfig.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDKConfig : NSObject

+ (void)initial;
+ (NSString*) getLogPath;
+ (NSString*) getCrashPath;
+ (NSString*) getJsBridgeJsPath;
+ (NSString*) getDBPath;
+ (NSString*) getFilesPath;
+ (void) createPathIfNotExist:(NSString*) path;

@end

NS_ASSUME_NONNULL_END
