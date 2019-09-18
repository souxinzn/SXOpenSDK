//
//  LsNewWindHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "SDKResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface LsNewWindHelper : NSObject

+ (void)high:(long)deviceId;
+ (void)middle:(long)deviceId;
+ (void)low:(long)deviceId;
+ (void)open:(long)deviceId;
+ (void)close:(long)deviceId;
+ (void)autoMode:(long)deviceId;
+ (void)manual:(long)deviceId;
+ (void)stop:(long)deviceId;
+ (void)query:(long)deviceId;
+ (SDKResult*)study:(NSInteger)deviceId routeIndex:(NSString*)routeIndex;

@end

NS_ASSUME_NONNULL_END
