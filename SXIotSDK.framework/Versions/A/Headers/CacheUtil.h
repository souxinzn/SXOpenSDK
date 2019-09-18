//
//  CacheUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"
#import "CacheGateway.h"
#import "JsDeviceConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface CacheUtil : NSObject

+(void)cacheGatewayStatus:(CacheGateway*)cacheGateway;
+(CacheGateway*)getGatewayStatusCache:(NSString*)zkId;
+(NSString*) getCommandActionId;
+(NSString*) getCommandCount;
+(void) saveDevStatus:(DeviceInfo*)deviceInfo params:(NSDictionary<NSString*, id>*)param;
+(void) saveDevsStatus:(NSArray<DeviceInfo*>*)devicesInfo params:(NSDictionary<NSNumber*, id>*)params;
+(void)syncDevsStatusCache:(long)deviceId;
+(void)rollbackDevsStatusCache:(long)deviceId;
+(void)cacheCtrlValue:(long)deviceId key:(NSString*)key value:(id)value;
+(NSMutableDictionary<NSString*, id>*)getStatusCacheById:(NSInteger)devId;
+(NSMutableDictionary<NSString*, id>*)getStatusOldCacheById:(NSInteger)devId;
+(JsDeviceConfig*)getJsDeviceConfig:(NSString*)deviceType;
+(NSArray<NSString*>*)getJsFunShowConfig:(NSString*)deviceType;
+(NSArray<NSString*>*)getJsFunRunConfig:(NSString*)deviceType;
+(NSString*)getJsControlModel:(NSString*)deviceType;

@end

NS_ASSUME_NONNULL_END
