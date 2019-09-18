//
//  UdpClientDeal.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpCustInterface.h"
#import "UdpParamClient.h"
#import "UdpClientCallBack.h"
#import "UdpClientInterface.h"
#import "UdpClientTool.h"

#define DEBUG
#ifdef DEBUG

#define NSLog(FORMAT, ...) fprintf(stderr, "%s:%zd\t%s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);

#else

#define NSLog(FORMAT, ...) nil

#endif

NS_ASSUME_NONNULL_BEGIN

@interface UdpClientDeal : NSObject<UdpCustInterface>

+ (void) add_udpParamCust:(UdpParamClient*) udpParamClient callBack:(NSObject<UdpClientCallBack>*) callBack;

+ (void) remove_udpParamCust:(UdpParamClient*) udpParamClient;

- (void) setUdpClientInterface:(NSObject<UdpClientInterface>*) clientInterface;
+ (BOOL) checkSendBackOK:(NSString*)needBackType realBackType:(NSString*)realBackType;
+ (UdpParamClient*) send_noBack:(UdpClientAction*) clientAction;
+ (UdpParamClient*) send_comm:(UdpClientAction*) clientAction callback:(NSObject<UdpClientCallBack>* _Nullable) clientCallBack needCallBack:(BOOL) needCallBack;
+ (void) send_asyn:(UdpClientAction*) clientAction callback:(NSObject<UdpClientCallBack>*) clientCallBack;
+ (UdpParamClient*) gen_paramCust:(UdpClientAction*) clientAction;

@end

NS_ASSUME_NONNULL_END
