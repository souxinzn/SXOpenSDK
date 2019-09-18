//
//  ProfileInfo.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "SXBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProfileInfo : SXBaseInfo

@property (nonatomic, copy) NSString* profileId;
@property (nonatomic, copy) NSString* serverProfileId;
@property (nonatomic, copy) NSString* profileName;
@property (nonatomic, assign) NSInteger isUpdate;
@property (nonatomic, assign) NSInteger isCurrent;

- (instancetype) initWithProfileId:(NSString*)profileId name:(NSString*)profileName isCurrent:(BOOL)isCurrent;

- (instancetype) initWithName:(NSString*)profileName;

@end

NS_ASSUME_NONNULL_END
