//
//  UdpParamClient.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpClientAction.h"
#import "UdpParamRun.h"
#import "UdpClientBack.h"
#import "NetDevState.h"
#import "UdpDataCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpParamClient : NSObject

- (instancetype) initWithAction:(UdpClientAction*)action gateState:(NetDevState*) gate;

@property (nonatomic, copy) NSString* uuid;
@property (nonatomic, retain) UdpClientAction* action;
@property (nonatomic, copy) NSString* pVersion;
@property (nonatomic, retain) NetDevState* gate;
@property (nonatomic, retain) NSMutableDictionary<NSString*, NSArray*>* configMap;
@property (nonatomic, retain) NSMutableDictionary<NSString*, NSString*>* otherMap;
@property (nonatomic, retain) UdpParamRun* udpParamRun;
@property (nonatomic, retain) UdpDataCallBack* dataCallBack;
@property (nonatomic, retain) UdpClientBack* udpClientBack;
@property (nonatomic, retain) NSDate* dataSendTime;

-(BOOL) check_vali;

@end

NS_ASSUME_NONNULL_END
