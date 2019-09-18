//
//  CurtainHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface CurtainHelper : NSObject

+ (void)open:(NSInteger)deviceId;
+ (void)close:(NSInteger)deviceId;
+ (void)stop:(NSInteger)deviceId;
+ (void)study:(NSInteger)deviceId callback:(void(^)(int code, DeviceInfo* _Nullable deviceInfo))callback;

@end

NS_ASSUME_NONNULL_END
