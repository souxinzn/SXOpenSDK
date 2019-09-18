//
//  SwitchHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/9.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface SwitchHelper : NSObject

+ (void) open:(NSInteger)devId;
+ (void) close:(NSInteger)devId;
+ (void) study:(NSInteger)devId callback:(void(^)(int code, DeviceInfo* _Nullable deviceInfo))callback;

@end

NS_ASSUME_NONNULL_END
