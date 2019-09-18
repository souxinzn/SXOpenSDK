//
//  RandomUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RandomUtil : NSObject

+(NSString*) str:(int)len;
+(NSString*) numStr:(int)len;

@end

NS_ASSUME_NONNULL_END
