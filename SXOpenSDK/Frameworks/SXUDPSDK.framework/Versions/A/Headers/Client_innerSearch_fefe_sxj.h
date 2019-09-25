//
//  Client_innerSearch_fefe_sxj.h
//  CocoaAsyncSocket
//
//  Created by admin on 2019/7/19.
//

#import <Foundation/Foundation.h>

#import "NetDevParam.h"
#import "DevSearch_back.h"

NS_ASSUME_NONNULL_BEGIN

@interface Client_innerSearch_fefe_sxj : NSObject

+ (instancetype)sharedInstance;

-(void)push_new_data:(int) dataType dataS:(NSString *)dataS dataB:(NSData *)dataB ip:(NSString *)ip port:(int)port;
-(NSDictionary<NSString*,DevSearch_back*>*)search_all:(NSDictionary<NSString*,NetDevParam*>*)map_id_netDevParam;

@end

NS_ASSUME_NONNULL_END
