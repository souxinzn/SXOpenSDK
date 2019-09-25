//
//  GateWayTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "GateWayInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface GateWayTableHelper : BaseTableHelper

- (NSArray<GateWayInfo*>*) qryZkInfo:(NSString*)profileId enable:(BOOL)enable;
- (void) removeZkInfo:(NSString*)zkId;
- (void) updateZkInfo:(GateWayInfo*)gateWayInfo;
- (GateWayInfo*)qryZkInfoById:(NSString*)zkId;

@end

NS_ASSUME_NONNULL_END
