//
//  LightStudyUdpClientListener.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "UdpClientCallBack.h"
#import "OnDeviceStudyListener.h"
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface LightStudyUdpClientListener : NSObject<UdpClientCallBack>

typedef void(^ STUDY_LISTENER_CALLBACK)(int code, DeviceInfo*  _Nullable deviceInfo);
@property(atomic, copy) STUDY_LISTENER_CALLBACK callback;
@property(nonatomic, retain) DeviceInfo* outDeviceInfo;
-(instancetype)initWithCallback:(void(^)(int code, DeviceInfo* deviceInfo))callback deviceInfo:(DeviceInfo*)deviceInfo;

@end

NS_ASSUME_NONNULL_END
