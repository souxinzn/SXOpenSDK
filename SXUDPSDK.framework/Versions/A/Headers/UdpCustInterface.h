//
//  UdpCustInterface.h
//  Pods
//
//  Created by ShimLin on 2019/7/14.
//

#ifndef UdpCustInterface_h
#define UdpCustInterface_h

#import <Foundation/Foundation.h>
#import "UdpDataCallBack.h"

@protocol UdpCustInterface <NSObject>

- (void) udpServer_callBack:(BOOL) isRunning;

- (void) devConnect_callBack:(BOOL) netOuter did:(NSString*) did ip:(NSString*) ip port:(int) port isOnLine:(BOOL) isOnLine;

- (void) devData_callBack:(UdpDataCallBack*) backData;

@end

#endif /* UdpCustInterface_h */
