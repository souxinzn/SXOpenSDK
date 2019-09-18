//
//  LsNewWindQueryListener.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"
#import "UdpClientCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface LsNewWindQueryListener : NSObject<UdpClientCallBack>

@property(nonatomic, retain) DeviceInfo* deviceInfo;

- (instancetype)initWithDeviceInfo:(DeviceInfo*)deviceInfo;

@end

NS_ASSUME_NONNULL_END
