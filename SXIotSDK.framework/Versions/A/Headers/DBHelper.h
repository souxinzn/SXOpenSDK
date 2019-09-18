//
//  DBHelper.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "common.h"
#import "FMDatabase.h"
#import "FMDatabaseQueue.h"
#import "NSObject+PropertyList.h"

NS_ASSUME_NONNULL_BEGIN

@interface DBHelper : NSObject
SX_SINGLETON_DEF

@property (nonatomic, retain) FMDatabaseQueue* dbQueue;
- (void) insertInto:(NSString*)tableName values:(NSArray<id>*)colsValList;
-(void)doSqlForUpdateWithTableName:(NSString *)tableName model:(id)model;

- (void) doSqlForUpdate:(NSString *)sql;
- (void) doSqlForCreatWithTableName:(NSString *)tableName model:(id)model specialKeyMap:(NSDictionary<NSString*, NSString*>*)specialKeyMap;
- (void) doSqlForUpdateWithTableName:(NSString *)tableName where:(NSString*)whereSql model:(id)model;
- (void) clearData:(NSString *)tableName;
- (NSMutableArray *) doSqlForSelect:(NSString *)sql modelClass:(Class)modelClass;
- (NSMutableArray<NSDictionary<NSString*, id>*>*) queryMapListIn:(NSArray<NSString*>*)colsName from:(NSString*)tableName where:(NSString*)whereSql;
- (void) deleteFrom:(NSString*)tableName where:(NSString* _Nullable)whereCond;
- (NSMutableArray*) queryListFrom:(NSString*)tableName where:(NSString*)whereSql with:(Class)modelClass;
- (NSMutableArray*) queryListFrom:(NSString*)tableName with:(Class)modelClass;
- (id) queryOneFrom:(NSString*)tableName where:(NSString*)whereSql with:(Class)modelClass;
- (id) queryOneFrom:(NSString*)tableName with:(Class)modelClass;

@end

NS_ASSUME_NONNULL_END
