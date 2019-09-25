//
//  UdpClientTool.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpSocketTool.h"
#import "DBInterface.h"
#import "JSInterface.h"
#import "UdpClientDeal.h"
#import "UdpClientInterface.h"
#import "UdpCustTaskInterface.h"
#import "DevSearch_back.h"
#import "UdpClientAction.h"
#import "UdpCustCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpClientTool : NSObject

+ (NSObject<JSInterface>*) getJsInterface;
+ (NSObject<DBInterface>*) getDbInterface;
/**
 * 设置应用参数
 **/
+ (BOOL) set_appParam:(NSString*) localPath appVersion:(NSString*) appVersion
           sysVersion:(NSString*) sysVersion netOk:(BOOL) netOk
               isWifi:(BOOL) isWifi localIp:(NSString*) localIp;

+ (void) set_interface:(NSObject<UdpClientInterface>*) clientInterface
           jsInterface:(NSObject<JSInterface>*) v_jsInterface
           dbInterface:(NSObject<DBInterface>*) v_dbInterface;

+ (BOOL) reset_dev_paramAll:(NSArray<NetDevParam*>*) devParam_list;

+ (BOOL) set_dev_param_andRun:(NetDevParam*) netDevParam;

+ (BOOL) del_netDev_param:(NSString*) did;

+ (BOOL) start_server;
+ (NetDevState*) get_netDev_state:(NSString*) did;

+ (NSArray<NetDevState*>*) get_netDev_state_all;


+ (NetDevParam*) get_netDev_param:(NSString*) did;

+ (NSArray<NetDevParam*>*) get_netDev_param_all;

+ (void) start_connectNetDev_all;

+ (void) stop_server:(NSObject<UdpCustTaskInterface>*) custTaskInterface;
+ (void) stop_serverByBlock:(void(^)(void)) block;

+ (void) set_netChange:(BOOL) netOK isWifi:(BOOL)isWifi localIp:(nonnull NSString *)localIp;
+ (NSArray<DevSearch_back*>*) search_fefe_only;
+ (void) setLogOpen:(BOOL) logOpen;
+ (void) setSysLogOpen:(BOOL) sysLogOpen;
+ (NSArray<NetDevParam*>*) getNetDevParamList:(NSArray<NSString*>*) didN;
+ (NSArray<NetDevState*>*) getNetDevStateList:(NSArray<NSString*>*) didN;
+ (UdpParamClient*) send_noBack:(UdpClientAction*) callAction;
+ (NSArray<UdpParamClient*>*) send_noBackN:(NSArray<UdpClientAction*>*) callActionList;
+ (void) send_asyn:(UdpClientAction*) callAction callback:(NSObject<UdpClientCallBack>*) clientCallBack;
@end

NS_ASSUME_NONNULL_END
