//
//  RelayNewWindHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface RelayNewWindHelper : NSObject

+ (void) low:(NSInteger)devId;
+ (void) middle:(NSInteger)devId;
+ (void) high:(NSInteger)devId;
+ (void) autoMode:(NSInteger)devId;
+ (void) hander:(NSInteger)devId;
+ (void) close:(NSInteger)devId;
+ (void) study:(NSInteger)devId callback:(void(^)(int code, DeviceInfo* _Nullable deviceInfo))callback;

@end

NS_ASSUME_NONNULL_END
