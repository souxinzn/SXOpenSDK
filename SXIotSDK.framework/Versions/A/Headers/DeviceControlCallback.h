//
//  DeviceControlCallback.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/9.
//

#import <Foundation/Foundation.h>
#import "UdpClientCallBack.h"
#import "UdpClientBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface DeviceControlCallback : NSObject<UdpClientCallBack>

typedef void(^ DEV_CTRL_CALLBACK)(UdpClientBack* udpClientBack);
@property(atomic, copy) DEV_CTRL_CALLBACK callback;

- (instancetype)initByCallback:(DEV_CTRL_CALLBACK)callback;

@end

NS_ASSUME_NONNULL_END
