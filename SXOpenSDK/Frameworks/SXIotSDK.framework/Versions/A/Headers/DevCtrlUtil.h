//
//  DevCtrlUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/9.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"
#import "UdpClientBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface DevCtrlUtil : NSObject

+ (void) deviceControl:(NSInteger)deviceId value:(NSString*)value;
+ (void) deviceControl:(NSInteger)deviceId value:(NSString*)value callback:(void(^)(UdpClientBack* clientBack)) callback;
+ (void) commonRelayStudy:(NSInteger)deviceId callback:(void(^)(int code, DeviceInfo* deviceInfo))callback;
+ (void) commonSensorStudy:(NSInteger)deviceId callback:(void(^)(int code, DeviceInfo* deviceInfo))callback;
+ (void) commonStudy:(NSInteger)deviceId controlType:(NSString*)controlType callback:(void(^)(int code, DeviceInfo* deviceInfo))callback;
+ (void) handleCtrlFail:(DeviceInfo*)deviceInfo ctrlKey:(NSString*)ctrlKeyName backData:(UdpClientBack*)udpClientBack;
+ (void) handleCtrlSuccess:(DeviceInfo*)deviceInfo ctrlKey:(NSString*)ctrlKeyName backData:(UdpClientBack*)udpClientBack;

@end

NS_ASSUME_NONNULL_END
