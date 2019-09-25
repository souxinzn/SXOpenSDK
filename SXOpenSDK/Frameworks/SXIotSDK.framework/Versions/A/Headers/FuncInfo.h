//
//  FuncInfo.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "SXBaseInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface FuncInfo : SXBaseInfo

@property(nonatomic, assign) long funcId;
@property(nonatomic, assign) int itemIndex;
@property(nonatomic, copy) NSString* funcCode;
@property(nonatomic, assign) int posX;
@property(nonatomic, assign) int posY;
@property(nonatomic, copy) NSString* funcName;
@property(nonatomic, copy) NSString* funcType;
@property(nonatomic, assign) int itemType;
@property(nonatomic, copy) NSString* funcStorageVal;
@property(nonatomic, assign) long deviceId;

@end

NS_ASSUME_NONNULL_END
