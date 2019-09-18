//
//  CateDev.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "SXBaseInfo.h"

#define CATE_TYPE_GATEWAY @"gateway"
#define CATE_TYPE_WIFI @"wifi"

NS_ASSUME_NONNULL_BEGIN

@interface CateDev : SXBaseInfo

@property (nonatomic, copy) NSString* cateCode;
@property (nonatomic, copy) NSString* cateType;
@property (nonatomic, copy) NSString* cateSort;
@property (nonatomic, copy) NSString* cateName;
@property (nonatomic, copy) NSString* detailType;
@property (nonatomic, copy) NSString* detailName;
@property (nonatomic, copy) NSString* deviceType;

- (instancetype) initWithType:(NSInteger)type cateCode:(NSString*)cateCode
                   detailType:(NSString*)detailType detailName:(NSString*)detailName
                   deviceType:(NSString*)deviceType;

@end

NS_ASSUME_NONNULL_END
