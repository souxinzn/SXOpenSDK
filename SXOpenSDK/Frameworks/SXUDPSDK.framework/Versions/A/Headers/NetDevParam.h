//
//  NetDevParam.h
//  CocoaAsyncSocket
//
//  Created by ShimLin on 2019/7/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetDevParam : NSObject

@property (nonatomic, copy) NSString* familyId;//设备id
@property (nonatomic, copy) NSString* did;//设备id
@property (nonatomic, copy) NSString* pass;//设备密码
@property (nonatomic, copy) NSString* serIp;//默认的外网IP
@property (nonatomic, copy) NSString* pVersion;//协议版本 1.0.1 旧版UDP协议；2.0.1 新版UDP协议
@property (nonatomic, copy) NSString* pin;
@property (nonatomic, copy) NSString* isValid;//1有效，0无效  不启动服务
@property (nonatomic, assign) int serPort;//默认的外网端口
@property (nonatomic, assign) int innerPort;//默认内网端口
@property (nonatomic, assign) int connectType;//内外网方式：1内网，2外网，3自动
@property (nonatomic, assign) int connect_timeOut;//内外网连接主机 超时时间
@property (nonatomic, assign) int jump_timeSec;
@property (nonatomic, assign) int jump_timeOut;
@property (nonatomic, assign) int control_timeOut;

- (instancetype) initWithObj:(NetDevParam*)obj;

@end

NS_ASSUME_NONNULL_END
