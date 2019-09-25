//
//  DevInfo.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DevInfo : NSObject

@property (nonatomic, copy) NSString* zk_id;
@property (nonatomic, copy) NSString* zk_mark_id;
@property (nonatomic, copy) NSString* zk_mipass;
@property (nonatomic, copy) NSString* zk_enable;
@property (nonatomic, copy) NSString* zk_desc;
@property (nonatomic, assign) long zk_config_max;
@property (nonatomic, copy) NSString* zk_serip;
@property (nonatomic, copy) NSString* zk_bakips;
@property (nonatomic, copy) NSString* zk_lastserip;
@property (nonatomic, copy) NSString* zk_lastlandtime;
@property (nonatomic, copy) NSString* zk_version;
@property (nonatomic, copy) NSString* zk_toiletname;
@property (nonatomic, assign) int used_boney;
@property (nonatomic, assign) int used_agent;
@property (nonatomic, copy) NSString* pVersion;
@property (nonatomic, copy) NSString* zk_type;

@end

NS_ASSUME_NONNULL_END
