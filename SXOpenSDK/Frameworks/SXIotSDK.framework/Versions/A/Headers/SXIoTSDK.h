//
//  SXIoTSDK.h
//  SXIoTSDK
//
//  Created by ShimLin on 2019/5/27.
//  Copyright © 2019 ShimLin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DeviceClient.h"
#import "OnStatusChangeListener.h"

//! Project version number for SXIoTSDK.
FOUNDATION_EXPORT double SXIoTSDKVersionNumber;

//! Project version string for SXIoTSDK.
FOUNDATION_EXPORT const unsigned char SXIoTSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SXIoTSDK/PublicHeader.h>

@interface SXIoTSDK : NSObject

+ (BOOL)isServerStart;
+ (void)initial:(NSString*)appId appSecret:(NSString *)appSecret callback:(void (^)(int)) callback;
+ (void)loginWithPhone:(NSString*) phone passowrd:(NSString*) passowrd callback:(void (^)(int)) callback;
+ (void)loginWithUnionId:(NSString*) unionId passowrd:(NSString*) passowrd callback:(void (^)(int)) callback;
+ (void)loginWithUid:(NSString*) uid passowrd:(NSString*) passowrd callback:(void (^)(int)) callback;
+ (void)loginWithIMEI:(NSString*) imei passowrd:(NSString*) passowrd callback:(void (^)(int)) callback;
+(void)setOnStatusChangeListener:(NSObject<OnStatusChangeListener>*)listener;
+(NSObject<OnStatusChangeListener>*)getOnStatusChangeListener;

@end
