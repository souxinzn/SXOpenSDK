//
//  RoomTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "RoomInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface RoomTableHelper : BaseTableHelper

- (NSArray<RoomInfo*>*) getRoomList:(NSString*)profileId;
- (void) addRoom:(RoomInfo*)roomInfo;
- (void) updateRoom:(RoomInfo*)roomInfo;
- (long) getMaxRoomId;

- (void)removeRoom:(RoomInfo*)roomInfo;
- (void)removeRoomById:(long)roomId;
@end

NS_ASSUME_NONNULL_END
