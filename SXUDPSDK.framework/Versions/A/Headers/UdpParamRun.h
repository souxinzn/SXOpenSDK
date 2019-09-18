//
//  UdpParamRun.h
//  SXUDPSDK
//
//  Created by ShimLin on 2019/7/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UdpParamRun : NSObject

@property (nonatomic, copy) NSString* feCmd;
@property (nonatomic, copy) NSString* feData;
@property (nonatomic, copy) NSString* feCode;
@property (nonatomic, copy) NSString* feMess;
@property (nonatomic, copy) NSString* feSendType;
@property (nonatomic, copy) NSString* feBackType;
@property (nonatomic, copy) NSString* feTemp;

@end

NS_ASSUME_NONNULL_END
