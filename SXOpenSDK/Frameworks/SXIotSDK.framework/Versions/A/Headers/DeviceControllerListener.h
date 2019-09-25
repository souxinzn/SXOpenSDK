//
//  SendCommandAsynListener.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "UdpClientCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface DeviceControllerListener : NSObject<UdpClientCallBack>

@end

NS_ASSUME_NONNULL_END
