//
//  BaseTableHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "DBHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaseTableHelper : NSObject

@property (nonatomic, copy) NSString* tableName;

- (void) clearData;
- (void) addDataList:(NSArray<id>*)dataList;
- (void) addData:(id)data;

- (id)getLastInsertData;

@end

NS_ASSUME_NONNULL_END
