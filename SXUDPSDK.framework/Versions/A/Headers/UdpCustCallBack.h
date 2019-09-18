//
//  UdpCustCallBack.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpCustInterface.h"
#import "UdpDataCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpCustCallBack : NSObject

+ (void) initInterface:(NSObject<UdpCustInterface>*) v_custInterface;
+ (void) udpServer_callBack:(BOOL) isRunning;
+ (void) devConnect_callBack:(BOOL) netOuter did:(NSString*) did ip:(NSString*) ip port:(int) port isOnLine:(BOOL) isOnLine;
+ (void) devData_callBack:(UdpDataCallBack*) udpDataCallBack;

@end

NS_ASSUME_NONNULL_END
