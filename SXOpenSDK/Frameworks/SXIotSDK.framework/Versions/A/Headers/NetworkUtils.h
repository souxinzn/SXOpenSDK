//
//  NetworkUtils.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/31.
//

#import <Foundation/Foundation.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <arpa/inet.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetworkUtils : NSObject

+(NSString*) getIPAddress;

@end

NS_ASSUME_NONNULL_END
