//
//  JSInterface.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef JSInterface_h
#define JSInterface_h
#import <Foundation/Foundation.h>
#import "JsCallBackFunc.h"

@protocol JSInterface <NSObject>

- (void) jsHandler_param:(NSString*) params
                callback:(void (^)(NSString*)) jsCallBackFunc;
- (void) jsHandler_result:(NSString*) params
                callback:(void (^)(NSString*)) jsCallBackFunc;

@end

#endif /* JSInterface_h */
