//
//  Client_innerSearch_fefe.h
//  SXUDPSDK
//
//  Created by admin on 2019/7/19.
//

#import <Foundation/Foundation.h>

#import "DevSearch_back.h"

NS_ASSUME_NONNULL_BEGIN

@interface Client_innerSearch_fefe : NSObject

+ (instancetype)sharedInstance;

-(void)push_new_data:(int) dataType dataS:(NSString *)dataS dataB:(NSData *)dataB ip:(NSString *)ip port:(int)port;
-(NSArray<DevSearch_back*> *)search_all;

@end

NS_ASSUME_NONNULL_END
