//
//  FloorWarmQuery3Listener.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>
#import "DeviceInfo.h"
#import "UdpClientCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface FloorWarmQuery3Listener : NSObject<UdpClientCallBack>

@property(nonatomic, retain) DeviceInfo* deviceInfo;
@property(nonatomic, copy) NSMutableDictionary<NSString*, id>* param;

- (instancetype)initWithDeviceInfo:(DeviceInfo*)deviceInfo param:(NSMutableDictionary<NSString*, id>*)param;

@end

NS_ASSUME_NONNULL_END
