//
//  SDKClient.h
//  SXIoTSDK
//
//  Created by ShimLin on 2019/5/27.
//  Copyright © 2019 ShimLin. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "GateWayInfo.h"
#import "OnDeviceStudyListener.h"
#import "CacheGateway.h"
#import "DownProfileInfo.h"
#import "SDKResult.h"

#ifndef DeviceClient_h
#define DeviceClient_h

@interface DeviceClient : NSObject

//触发获取设备状态信息，通过监听函数回调
+ (NSString*) getModelByDeviceType:(NSString*)deviceType;
+ (CacheGateway*) getGatewayStatCache:(NSString*)zkId;
+ (void) cacheDevStat:(DeviceInfo*)deviceInfo param:(NSDictionary<NSString*, id>*)param;
+ (void) downloadProfilesByZkId:(NSString*)zkId pass:(NSString*)pass;
+ (void)queryDeviceStatus:(DeviceInfo*) deviceInfo;
+ (void)queryDeviceStatusByDevList:(NSArray<DeviceInfo*>*) deviceInfoList;
+ (void)queryDeviceStatusByRoomId:(NSInteger) roomId;
+ (void)queryDeviceStatusByZkIdInRoom:(NSString*)zkId roomId:(long)roomId;
+ (void)connectGateway:(GateWayInfo*)gatewayInfo;
+ (void)connectGateways:(NSArray<GateWayInfo*>*) gatewayInfos;
+ (NSDictionary<NSString*, id>*)getStatusCacheById:(long)deviceId;
+ (void)onNetStatChange;
+ (void)searchGatewayLocal;
+ (SDKResult*)addGatewayById:(NSString*)zkId;
+ (NSDictionary<NSString*, id>*)getFunDeviceCache;
+ (void)triggerRefreshFunDevCache;
+ (void)wifiDeviceConnect:(NSString*) ssid password:(NSString*)password;
+ (void)wifiDeviceJoinNet:(NSString*) ssid withPassword:(NSString*) password
                 sendSsid:(NSString*) sendSsid andPassword:(NSString*) sendPassword
               onComplete:(void (^)(NSError* error)) onComplete;


@end

#endif /* SDKClient_h */
