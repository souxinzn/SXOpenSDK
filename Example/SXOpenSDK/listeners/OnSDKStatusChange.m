//
//  OnSDKStatusChange.m
//  SXIotSDK_Example
//
//  Created by ShimLin on 2019/7/30.
//  Copyright © 2019 ShimLin. All rights reserved.
//

#import "OnSDKStatusChange.h"
//#import "LogTool.h"
#import "YYModel.h"
#import "SXIoTSDK.h"
#import "NetDevParam.h"

@implementation OnSDKStatusChange

- (void)handleGatewayStateChange:(CacheGateway *)cacheGateway {
    NSLog(@"==linxin==网关状态改变：%@", cacheGateway);
//    [LogTool log:[NSString stringWithFormat:@"网关状态改变：%@", cacheGateway]];
}

- (void)onDevStatusChange:(DeviceInfo *)deviceInfo params:(NSDictionary<NSString *,id> *)params {
    NSLog(@"==linxin==设备状态改变了：%@，带了参数：%@", deviceInfo, params);
}

- (void)onDevsStatusChange:(NSArray<DeviceInfo *> *)deviceInfoList params:(NSDictionary<NSNumber *,NSDictionary<NSString *,id> *> *)params {
    NSLog(@"==linxin==设备列表状态改变了：%@，带了参数：%@", deviceInfoList, params);
}

- (void)onScanedLocalGateway:(NSArray<GateWayInfo *> *)gateWayInfos {
    if (gateWayInfos != nil && gateWayInfos.count > 0) {
        NSLog(@"==linxin==找到内网网关了：%@",[gateWayInfos yy_modelToJSONString]);
    } else {
        NSLog(@"==linxin==没找到内网网关");
    }
}

@end
