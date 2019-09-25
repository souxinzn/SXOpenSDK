//
//  SensorHelper.h
//  SXIotSDK
//
//  Created by admin on 2019/8/28.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface SensorHelper : NSObject

+ (void) study:(NSInteger)devId callback:(void(^)(int code, DeviceInfo* _Nullable deviceInfo))callback;

@end

NS_ASSUME_NONNULL_END
