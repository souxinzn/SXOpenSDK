//
//  DevFuncTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/31.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "FuncInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DevFuncTableHelper : BaseTableHelper

- (void)removeDevFunc:(long)devId;
- (NSArray<FuncInfo*>*) qryFuncs:(long)devId;
- (void) addFuncs:(NSArray<FuncInfo*>*)funcInfoList;

@end

NS_ASSUME_NONNULL_END
