//
//  JsCallBackFunc.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef JsCallBackFunc_h
#define JsCallBackFunc_h
#import <Foundation/Foundation.h>

@protocol JsCallBackFunc <NSObject>

- (void) onCallBack:(NSString*) data;

@end

#endif /* JsCallBackFunc_h */
