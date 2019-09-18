//
//  UdpClientCallBack.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef UdpClientCallBack_h
#define UdpClientCallBack_h

#import "UdpClientBack.h"

@protocol UdpClientCallBack <NSObject>

- (void) callBackResult:(UdpClientBack*)clientBack;

@end

#endif /* UdpClientCallBack_h */
