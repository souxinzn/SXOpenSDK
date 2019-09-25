//
//  ProfileTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "ProfileInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProfileTableHelper : BaseTableHelper

- (NSArray<ProfileInfo*>*) qryProfiles;
- (void) addProfileInfo:(ProfileInfo*)profileInfo;
- (void) updateProfileInfoName:(ProfileInfo*)profileInfo;
- (void) setCurrentProfile:(NSString*)profileId;
- (NSString*) getCurrentProfileId;
- (ProfileInfo*) getCurrentProfileInfo;
- (void) removeProfileById:(NSString*)profileId;

@end

NS_ASSUME_NONNULL_END
