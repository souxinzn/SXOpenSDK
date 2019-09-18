//
//  UdpDataCallBack.h
//  SXUDP
//
//  Created by ShimLin on 2019/7/12.
//  Copyright © 2019 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UdpDataCallBack : NSObject

@property (nonatomic, assign) int dataType;
@property (nonatomic, assign) BOOL netOuter;
@property (nonatomic, copy) NSString* did;
@property (nonatomic, strong) NSArray<NSString*>* subDidN;
@property (nonatomic, copy) NSString* ip;
@property (nonatomic, assign) int port;
@property (nonatomic, copy) NSString* backData;
@property (nonatomic, copy) NSString* mingHead;
@property (nonatomic, copy) NSString* mingData;
@property (nonatomic, copy) NSString* backType;
@property (nonatomic, copy) NSString* backTime;

- (instancetype) initWithData:(int)dataType netOuter:(BOOL)netOuter did:(NSString *)did subDidN:(NSArray<NSString*>*)subDidN ip:(NSString*)ip port:(int)port backData:(NSString *)backData mingHead:(NSString *)mingHead mingData:(NSString *)mingData;

@end

NS_ASSUME_NONNULL_END
