//
//  GateWayInfo.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "NetDevParam.h"
#import "DevInfo.h"
#import "SXBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface GateWayInfo : SXBaseInfo

@property (nonatomic, copy) NSString* zkId;
@property (nonatomic, copy) NSString* zkPwd;
@property (nonatomic, copy) NSString* zkDesc;
@property (nonatomic, copy) NSString* zkName;

@property (nonatomic, copy) NSString* zkEnable;
@property (nonatomic, copy) NSString* zkInIp;
@property (nonatomic, copy) NSString* zkOutIp;
@property (nonatomic, assign) NSInteger zkInPort;
@property (nonatomic, assign) NSInteger zkOutPort;

@property (nonatomic, copy) NSString* zkLoginTime;
@property (nonatomic, copy) NSString* zkConfigMax;
@property (nonatomic, copy) NSString* pin;
@property (nonatomic, copy) NSString* pVersion;

@property (nonatomic, copy) NSString* profileId;

-(instancetype)initWithZkId:(NSString*)zkId;
-(instancetype)initWithNetDev:(NetDevParam*)netDevParam;
-(NetDevParam*)convert2Netdev;
-(DevInfo*)convert2DevInfo;

@end

NS_ASSUME_NONNULL_END
