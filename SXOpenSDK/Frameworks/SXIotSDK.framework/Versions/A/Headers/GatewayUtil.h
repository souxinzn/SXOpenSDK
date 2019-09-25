//
//  GatewayUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "NetDevParam.h"

NS_ASSUME_NONNULL_BEGIN

@interface GatewayUtil : NSObject

+(void)buildGatewayParamById:(NSString*)zkId callback:(void(^)(NetDevParam* netDevParam))callback;
+(NSArray<NSNumber*>*)isZkIdsSaved:(NSArray<NSString*>*)zkIdList;
+(BOOL)isZkIdSaved:(NSString*)zkId;

@end

NS_ASSUME_NONNULL_END
