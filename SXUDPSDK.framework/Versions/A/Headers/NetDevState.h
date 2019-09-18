//
//  NetDevState.h
//  CocoaAsyncSocket
//
//  Created by ShimLin on 2019/7/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetDevState : NSObject

- (instancetype) initWithDid:(NSString*)did;

@property (nonatomic, copy) NSString* did;//设备id
@property (nonatomic, assign) int connect_type;//0 未连接-网络无效，1内网，2外网
@property (nonatomic, copy) NSString* innerIp;
@property (nonatomic, assign) int innerPort;
@property (nonatomic, copy) NSString* serverIp;
@property (nonatomic, assign) int serverPort;
@property (nonatomic, assign) BOOL connect_ok;
@property (nonatomic, copy) NSString* connect_time;
@property (nonatomic, copy) NSString* connect_err;
@property (nonatomic, assign) int connect_errNum;
@property (nonatomic, assign) BOOL jump_ok;
@property (nonatomic, copy) NSString* jump_time;
@property (nonatomic, assign) int jump_errNum;
@property (nonatomic, assign) int jump_timeOut;
@property (nonatomic, copy) NSString* startInnerTime14;//内网搜索主机的时间
@property (nonatomic, copy) NSString* connect_state;//连接状态：内网连接（成功、失败） >> 外网连接（成功、失败）  A1B0内网开始，A2B1内网失败，A3B0内网成功，A2B2外网失败，A2B3外网成功
//1A2A   A0B0 初始状态

//1020    内网初始化
//1420    内网搜索开始
//1520    内网失败
//1620    内网成功
//1720    内网fe_OK
//1820    内网fd_OK
//1020    外网初始化
//1024    外网注册开始
//1025    外网注册失败
//1026    外网连接成功
//1028    外网fd_OK
@property (nonatomic, retain) NSString* run_state;//无状态 0，内网开始搜索 10，内网搜索成功 12，内网搜索失败 13
//14     内网搜索开始
//16     内网搜索成功
//17    1J_fe_OK
//18    1M_fd_OK
//24    2C_outerReg_run
//26    2G_outerReg_OK
//28    2M_fd_OK

@property (nonatomic, retain) NSString* token;
@property (nonatomic, retain) NSString* dmKey_sessionKey;
//public byte[] dmKeyB ;
@property (nonatomic, assign) long dSeq;

-(instancetype)init;
- (BOOL) isOnline;
- (NSDictionary<NSString*, NSString*>*) getTargetAddr;
- (NSString*) getTargetIp;
- (int) getTargetPort;
@end

NS_ASSUME_NONNULL_END
