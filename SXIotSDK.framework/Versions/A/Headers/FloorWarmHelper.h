//
//  FloorWarmHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "SDKResult.h"
#import "DeviceInfo.h"
#import "UdpClientBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface FloorWarmHelper : NSObject

+ (void)open:(long)deviceId;
+ (void)close:(long)deviceId;
+ (void)temp:(long)deviceId temp:(float)temp;
+ (void)query:(long)deviceId;
+ (void)saveStatus:(DeviceInfo*)deviceInfo param:(NSMutableDictionary<NSString*, id>*)param backData:(UdpClientBack*) udpClientBack;
+ (SDKResult*)study:(NSInteger)deviceId routeIndex:(NSString*)routeIndex;

@end

NS_ASSUME_NONNULL_END
