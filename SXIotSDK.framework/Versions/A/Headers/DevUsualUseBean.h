//
//  DevUsualUseBean.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/1.
//

#import <Foundation/Foundation.h>
#import "SXBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DevUsualUseBean : SXBaseInfo

@property(nonatomic, assign) long dataId;
@property(nonatomic, assign) long devId;
@property(nonatomic, copy) NSString* devDid;
@property(nonatomic, copy) NSString* familyId;

- (instancetype) initWithDevId:(long)devId devDid:(NSString*)devDid familyId:(NSString*)familyId;

@end

NS_ASSUME_NONNULL_END
