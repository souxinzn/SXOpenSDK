//
//  AirConditionHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "UdpClientCallBack.h"
#import "SDKResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface AirConditionHelper : NSObject

+ (void)temp:(long)deviceId temp:(float)temp;
+ (void)high:(long)deviceId;
+ (void)middle:(long)deviceId;
+ (void)low:(long)deviceId;
+ (void)open:(long)deviceId;
+ (void)close:(long)deviceId;
+ (void)cold:(long)deviceId;
+ (void)hot:(long)deviceId;
+ (void)wet:(long)deviceId;
+ (void)wind:(long)deviceId;
+ (void)query:(long)deviceId;
+ (SDKResult*)study:(NSInteger)deviceId routeIndex:(NSString*)routeIndex;

@end

NS_ASSUME_NONNULL_END
