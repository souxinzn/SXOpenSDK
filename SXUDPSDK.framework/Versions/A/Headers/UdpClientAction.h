//
//  UdpClientAction.h
//  SXUDPSDK
//
//  Created by ShimLin on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "Tablefunc.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpClientAction : NSObject

@property (nonatomic, copy) NSString* actionId;
@property (nonatomic, copy) NSString* isAsyn;//是否异步：Y异步，N同步
@property (nonatomic, copy) NSString* familyid;
@property (nonatomic, copy) NSString* did;
@property (nonatomic, copy) NSString* runDeviceId;

@property (nonatomic, copy) NSString* runIndex;

@property (nonatomic, copy) NSString* actionid_runIndex;

@property (nonatomic, copy) NSString* deviceType;//灯光-查询，灯光学习
@property (nonatomic, copy) NSString* glType;//关联方式：devThis 当前设备，获取设备信息，    、func表、场景表
@property (nonatomic, copy) NSString* controlType;//查询，控制，学习
@property (nonatomic, copy) NSString* action;//控制电源
@property (nonatomic, copy) NSString* value;
@property (nonatomic, copy) NSString* route;

@property (nonatomic, assign) long delayTime;

@property (nonatomic, retain) NSString* actionTime;

@property (nonatomic, retain) NSDictionary<NSString*, id>* otherParam;

-(void)setOtherMap_tablefun:(Tablefunc *)tablefunc;

- (instancetype) initWithFamilyId:(NSString* _Nullable)familyId did:(NSString*)did runDeviceId:(NSString*)runDeviceId actionId:(NSString*)actionId runIndex:(NSString*)runIndex deviceType:(NSString*)deviceType glType:(NSString*)glType controlType:(NSString*)controlType action:(NSString*)action value:(NSString*)value route:(NSString*)route delayTime:(long)delayTime otherParam:(NSDictionary<NSString*,id>* _Nullable)otherParam;

@end

NS_ASSUME_NONNULL_END
