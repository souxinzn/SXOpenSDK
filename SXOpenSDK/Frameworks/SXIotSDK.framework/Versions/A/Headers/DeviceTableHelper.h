//
//  DeviceTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DeviceTableHelper : BaseTableHelper

- (DeviceInfo*) getDeviceByDeviceId:(long)deviceId;
- (DeviceInfo*) getDeviceByDeviceDID:(NSString*)deviceDID;
- (NSArray<DeviceInfo*>*) getDevListByQuery:(NSString*)sqlWhere;
- (NSArray<DeviceInfo*>*) obtainDevList:(NSString*)profileId roomId:(long)roomId isSensor:(BOOL)isSensor;
- (NSArray<DeviceInfo*>*) getDevListByRoomId:(NSInteger)roomId profileId:(NSString*)profileId;
- (NSArray<DeviceInfo*>*) getSensorDevList:(NSString*)profileId;
- (NSArray<DeviceInfo*>*) getDevListByType:(NSString*)devType profileId:(NSString*)profileId;
- (NSArray<DeviceInfo*>*) getDevListByZkId:(NSString*)zkId profileId:(NSString*)profileId;
- (NSArray<DeviceInfo*>*) getDevListByIdList:(NSArray<NSNumber*>*)idList;
- (NSArray<DeviceInfo*>*) getSwitchSceneDevList:(NSString*)profileId;
- (void)updateDevConfig:(DeviceInfo*)deviceInfo;
- (void)delDev:(long)devId;
- (void)removeDevByZkId:(NSString*)zkId;

@end

NS_ASSUME_NONNULL_END
