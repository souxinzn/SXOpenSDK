//
//  UdpClientInterface.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/12.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef UdpClientInterface_h
#define UdpClientInterface_h

#import <Foundation/Foundation.h>
#import "UdpParamClient.h"

@protocol UdpClientInterface <NSObject>

- (void) udpServer_callBack:(BOOL) isRunning;
- (void) devConnect_callBack:(BOOL) netOuter did:(NSString*) did
                          ip:(NSString*) ip port:(int) port isOnLine:(BOOL) isOnLine;
- (void) devChange_callBack:(UdpParamClient*) udpParamData;

@end

#endif /* UdpClientInterface_h */
