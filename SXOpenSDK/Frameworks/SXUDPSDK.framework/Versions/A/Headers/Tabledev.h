//
//  Tabledev.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Tabledev : NSObject

@property (nonatomic, strong) NSNumber *device_id;
@property (nonatomic, strong) NSNumber *room_id;
@property (nonatomic, copy) NSString *device_name;
@property (nonatomic, copy) NSString *device_type;
@property (nonatomic, copy) NSString *device_code;
@property (nonatomic, copy) NSString *device_study_status;
@property (nonatomic, copy) NSString *device_route_index;
@property (nonatomic, copy) NSString *device_ip;

@property (nonatomic, copy) NSString *device_storage_index;
@property (nonatomic, copy) NSString *device_icon;

@property (nonatomic, strong) NSNumber *device_order_num;
@property (nonatomic, strong) NSNumber *server_id;
@property (nonatomic, copy) NSString *zk_id;

@property (nonatomic, copy) NSString *device_switch_statu;
@property (nonatomic, copy) NSString *device_description;

@property (nonatomic, strong) NSNumber *countFuncInScene;
@property (nonatomic, copy) NSString *device_did;
@property (nonatomic, copy) NSString *device_uname;
@property (nonatomic, copy) NSString *device_password;
@property (nonatomic, strong) NSNumber *loc_left;
@property (nonatomic, strong) NSNumber *loc_top;

@property (nonatomic) BOOL isInScene;

@end

NS_ASSUME_NONNULL_END
