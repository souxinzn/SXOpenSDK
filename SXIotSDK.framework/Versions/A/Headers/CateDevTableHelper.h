//
//  CateDevTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "BaseTableHelper.h"
#import "CategoryData.h"

NS_ASSUME_NONNULL_BEGIN

@interface CateDevTableHelper : BaseTableHelper

-(NSArray<CategoryData*>*)getCategoryData:(NSString*)byCateType;

@end

NS_ASSUME_NONNULL_END
