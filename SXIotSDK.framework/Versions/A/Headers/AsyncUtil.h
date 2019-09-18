//
//  AsyncUtil.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AsyncUtil : NSObject

+(void)complete:(NSString*)progressName instance:(id)instance;
+(void)addGroupProgress:(NSString*)groupName progressName:(NSString*)progressName;
+(void)completeGroupProgress:(NSString*)groupName progressName:(NSString*)progressName;
+(void)waitForGroup:(NSString*)groupName;
+(id)waitFor:(NSString*)progressName;

@end

NS_ASSUME_NONNULL_END
