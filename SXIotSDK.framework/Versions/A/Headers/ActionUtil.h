//
//  ActionUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/9.
//

#import <Foundation/Foundation.h>
#import "UdpClientAction.h"
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface ActionUtil : NSObject

+ (UdpClientAction*)buildAction:(DeviceInfo*)deviceInfo glType:(NSString*)glType value:(NSString*)value timeout:(NSInteger)timeout params:(NSMutableDictionary<NSString*, id>* _Nullable)params;
+ (UdpClientAction*)buildLearnAction:(DeviceInfo*)deviceInfo controlType:(NSString*)controlType;
+ (UdpClientAction*)buildAction:(DeviceInfo*)deviceInfo glType:(NSString*)glType value:(NSString*)value timeout:(NSInteger)timeout;
+ (UdpClientAction*)buildAction:(DeviceInfo*)deviceInfo glType:(NSString*)glType value:(NSString*)value;
+ (UdpClientAction*)buildCtrlAction:(DeviceInfo*)deviceInfo value:(NSString*)value;
+ (UdpClientAction*)buildQueryStatAction:(NSString*)zkId;
+ (UdpClientAction*)buildDevQueryAction:(DeviceInfo*)deviceInfo ctrlType:(NSString*)ctrlType;

@end

NS_ASSUME_NONNULL_END
