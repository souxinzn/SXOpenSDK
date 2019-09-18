//
//  OnStatusChangeListener.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#ifndef OnStatusChangeListener_h
#define OnStatusChangeListener_h

#import <Foundation/Foundation.h>
#import "CacheGateway.h"
#import "GateWayInfo.h"
#import "DeviceInfo.h"

@protocol OnStatusChangeListener <NSObject>

-(void)handleGatewayStateChange:(CacheGateway*)cacheGateway;
-(void) onScanedLocalGateway:(NSArray<GateWayInfo*>*)gateWayInfos;
-(void) onDevsStatusChange:(NSArray<DeviceInfo*>*)deviceInfoList params:(NSDictionary<NSNumber*, NSDictionary<NSString*, id>*>*)params;
-(void) onDevCtrlError:(DeviceInfo*)deviceInfo code:(NSString*)resultCode msg:(NSString*)resultMsg;

@end

#endif /* OnStatusChangeListener_h */
