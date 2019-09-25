//
//  DeviceUtil.h
//  SXIoTSDK
//
//  Created by ShimLin on 2019/5/30.
//  Copyright © 2019 ShimLin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceUtil : NSObject

+ (void)sendWifiDeviceMsg:(NSDictionary*) dataDict forCount:(int) count
               onComplete:(void (^)(NSError* error)) onComplete;

@end

NS_ASSUME_NONNULL_END
