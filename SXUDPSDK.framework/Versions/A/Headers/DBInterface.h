//
//  DBInterface.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/11.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef DBInterface_h
#define DBInterface_h

#import <Foundation/Foundation.h>
#import "DevInfo.h"
#import "Tabledev.h"

@protocol DBInterface <NSObject>

- (NSArray<DevInfo*>*) query_tableGate_all:(NSString*) familyId;
- (DevInfo*) query_tableGate_ByZKID:(NSString*)familyId zk_id:(NSString*)zk_id;
- (NSArray<Tabledev*>*) query_tableDev_all;
- (NSArray<Tabledev*>*) query_tableDev_listByZkid:(NSString *)familyid zk_id:(NSString*) zk_id;
- (Tabledev*) query_tableDev_listByZkidSubid:(NSString*)familyid zk_id:(NSString*)zk_id subId:(NSString*)subId;
- (NSArray<Tabledev*>*) query_tableDev_listByZkidDeviceType:(NSString*)familyid zk_id:(NSString*)zk_id deviceType:(NSString*)deviceType;

@end

#endif /* DBInterface_h */
