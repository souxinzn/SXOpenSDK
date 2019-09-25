//
//  DataClient.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "CategoryData.h"
#import "GateWayInfo.h"
#import "DeviceInfo.h"
#import "ProfileInfo.h"
#import "RoomInfo.h"
#import "FuncInfo.h"

#import "CateDevTableHelper.h"
#import "DeviceTableHelper.h"
#import "GateWayTableHelper.h"
#import "ProfileTableHelper.h"
#import "RoomTableHelper.h"
#import "DevFuncTableHelper.h"
#import "DevUsualluUseTableHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface DataClient : NSObject

+ (void)removeAllTables;

+(NSArray<CategoryData*>*)getCategoryData:(NSString*)cateType;
+(NSArray<GateWayInfo*>*)getGatewayData;
+(DeviceInfo*)getDeviceByDid:(NSString*)did;
+(DeviceInfo*)getDeviceById:(long)devId;
+(NSArray<DeviceInfo*>*)getDevices:(int)roomId isSensor:(BOOL)isSensor;
+(NSArray<DeviceInfo*>*)getSensorDevList;
+(NSArray<DeviceInfo*>*)getDevListByRoomId:(NSInteger)roomId;
+(NSArray<DeviceInfo*>*)getSwitchSceneDevList;
+(NSArray<DeviceInfo*>*)getDevListByType:(NSString*)devType;
+(NSArray<DeviceInfo*>*)getDevListByIdList:(NSArray<NSNumber*>*)devIds;
+(NSArray<DeviceInfo*>*)getDevListByZkId:(NSString*)zkId;
+(void)updateDevConfig:(DeviceInfo*)deviceInfo;
+(void)addDevToUsuallyUse:(long)devId;
+(void)removeDevFromUsuallyUse:(long)devId;
+(NSArray<DeviceInfo*>*)getUsuallyUseDev;
+(void)addDevice:(DeviceInfo*)deviceInfo;
+(void)removeDevice:(long)devId;
+(NSArray<ProfileInfo*>*)getProfiles;
+(void)addProfile:(ProfileInfo*)profileInfo;
+(void)updateProfileName:(ProfileInfo*)profileInfo;
+(void)setCurrentProfile:(NSString*)profileId;
+(NSString*)getCurrentProfileId;
+(ProfileInfo*)getCurrentProfileInfo;
+(NSArray<RoomInfo*>*)getRoomInfoList;
+(NSArray<RoomInfo*>*)getRoomInfoList:(NSString* _Nullable)profileId;
+(void)addRoom:(RoomInfo*)roomInfo;
+(void)delRoom:(long)roomId;
+(void)updateRoomInfo:(RoomInfo*)roomInfo;
+(void)removeProfileById:(NSString*)profileId;
+(void)removeGateway:(NSString*)zkId;
+(void)updateGatewayInfo:(GateWayInfo*)gateWayInfo;
+(void)addGatewayInfo:(GateWayInfo*)gatewayInfo;
+(long)createRoomId;
+(NSArray<FuncInfo*>*)getFuncInfoListByDeviceId:(long)deviceId;
+(void)saveFunInfoList:(NSArray<FuncInfo*>*)funcInfos;
+(BOOL)isZkIdSaved:(NSString*)zkId;
+(void)initSdkData;

+(DeviceInfo *)getLastInsertDataForDevice;
@end

NS_ASSUME_NONNULL_END
