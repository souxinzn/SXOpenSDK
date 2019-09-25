//
//  CategoryData.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>
#import "CateDev.h"

NS_ASSUME_NONNULL_BEGIN

@interface CategoryData : NSObject

@property(nonatomic, copy) NSString* cateName;
@property(nonatomic, strong) NSArray<CateDev*>* cateDevList;

@end

NS_ASSUME_NONNULL_END
