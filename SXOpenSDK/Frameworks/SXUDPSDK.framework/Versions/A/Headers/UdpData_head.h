//
//  UdpData_head.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UdpData_head : NSObject

@property (nonatomic, copy) NSString* pVer;
@property (nonatomic, copy) NSString* source;
@property (nonatomic, copy) NSString* target;
@property (nonatomic, copy) NSString* type;
@property (nonatomic, copy) NSString* action;
@property (nonatomic, copy) NSString* dId;
@property (nonatomic, copy) NSString* dSeq;
@property (nonatomic, copy) NSString* acId;
@property (nonatomic, copy) NSString* acSeq;
@property (nonatomic, copy) NSString* time;
@property (nonatomic, copy) NSString* token;
@property (nonatomic, copy) NSString* result;

@end

NS_ASSUME_NONNULL_END
