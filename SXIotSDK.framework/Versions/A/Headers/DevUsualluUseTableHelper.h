//
//  DevUsualluUseTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/31.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "DevUsualUseBean.h"

NS_ASSUME_NONNULL_BEGIN

@interface DevUsualluUseTableHelper : BaseTableHelper

- (void) addToUsual:(DevUsualUseBean*)devBean;
- (void) removeById:(long)devId;
- (NSArray<DevUsualUseBean*>*) getUsuallyUseDevIdsWithProfileId:(NSString*)profileId;

@end

NS_ASSUME_NONNULL_END
