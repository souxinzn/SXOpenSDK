//
//  RoomInfo.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "SXBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface RoomInfo : SXBaseInfo

@property (nonatomic, assign) NSInteger roomId;
@property (nonatomic, copy) NSString* serverRoomId;
@property (nonatomic, copy) NSString* profileId;
@property (nonatomic, copy) NSString* roomName;
@property (nonatomic, copy) NSString* roomIcon;
@property (nonatomic, assign) BOOL selected;

- (instancetype) initWithProfileId:(NSString*)profileId roomId:(NSInteger)roomId roomName:(NSString*)roomName;

- (void)reformData:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
