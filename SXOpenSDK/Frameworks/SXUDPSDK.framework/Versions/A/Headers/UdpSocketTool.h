//
//  UdpSocketTool.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NetDevParam.h"
#import "NetDevState.h"
#import "UdpTaskBean.h"
#import "UdpCustTaskInterface.h"
#import "DevSearch_back.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpSocketTool : NSObject

+ (NSArray<NetDevParam*>*) getNetDevParamList:(NSArray<NSString*>*) didN;
+ (NSArray<NetDevState*>*) getNetDevStateList:(NSArray<NSString*>*) didN;

/**
 * 启动服务
 **/
+ (BOOL) start_server;
+ (void) stop_server:(NSObject<UdpCustTaskInterface>*) custTaskInterface;
+ (void) stop_serverByBlock:(void(^)(void)) block;
+ (void) jump_task_run;
+ (void) start_conncet_devN:(NSDictionary<NSString*,NetDevParam*>*) notOneLine_map;
+ (BOOL) set_appParam:(NSString*) localPath appVersion:(NSString*) appVersion
           sysVersion:(NSString*) sysVersion netOk:(BOOL) netOk
               isWifi:(BOOL) isWifi localIp:(NSString*) localIp;
+ (void) set_netChange:(BOOL) netOK isWifi:(BOOL) isWifi localIp:(NSString*) localIp;
+ (void) set_netChange:(BOOL) netOK isWifi:(BOOL) isWifi localIp:(NSString*) localIp
          dev_startRun:(BOOL) dev_startRun;
/**
 * 所有设备一同连接
 **/
+ (void) start_connectNetDev_all;
+ (BOOL) reset_dev_paramAll:(NSArray<NetDevParam*>*) netDevParam_list;
+ (BOOL) set_dev_param_andRun:(NetDevParam*) netDevParam;
+ (NetDevState*) get_dev_state_byInnerAddr:(NSString*) ip port:(int) port;
+ (BOOL) del_dev_paramAndState:(NSString*) did;
+ (void) dealData:(int) dataType dataS:(NSString*) dataS dataB:(NSData*) dataB
               ip:(NSString*) ip port:(int) port;
+ (NetDevState*) get_netDev_state:(NSString*) did;
+ (NSArray<NetDevState*>*) get_netDev_state_all;
+ (NetDevParam*) get_netDev_param:(NSString*) did;
+ (NSArray<NetDevParam*>*) get_netDev_param_all;
+ (NSArray<DevSearch_back*>*) search_fefe_only;
@end

NS_ASSUME_NONNULL_END
