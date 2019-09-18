//
//  UdpClientBack.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpDataCallBack.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpClientBack : NSObject

@property (nonatomic, copy) NSString* actionId;
@property (nonatomic, copy) NSString* familyid;
@property (nonatomic, copy) NSString* did;
@property (nonatomic, copy) NSString* runDeviceId;
@property (nonatomic, copy) NSString* runIndex;
@property (nonatomic, copy) NSString* resultCode;
@property (nonatomic, copy) NSString* resultMess;
@property (nonatomic, copy) NSString* resultTime;
@property (nonatomic, retain) NSDictionary<NSString*, id>* resultMap;
@property (nonatomic, retain) UdpDataCallBack* _Nullable callBackTemp;

@end

NS_ASSUME_NONNULL_END
