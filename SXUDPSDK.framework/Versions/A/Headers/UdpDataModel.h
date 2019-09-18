//
//  UdpDataModel.h
//  SXUDP
//
//  Created by ShimLin on 2019/6/19.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UdpData_head.h"

NS_ASSUME_NONNULL_BEGIN

@interface UdpDataModel : NSObject

@property (nonatomic, strong) UdpData_head* head;

@property (nonatomic, copy) NSString* body;

@end

NS_ASSUME_NONNULL_END
