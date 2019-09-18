//
//  CacheGateway.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CacheGateway : NSObject

@property(nonatomic, assign) BOOL netOuter;
@property(nonatomic, copy) NSString* did;
@property(nonatomic, copy) NSString* ip;
@property(nonatomic, assign) int port;
@property(nonatomic, assign) BOOL isOnLine;
@property(nonatomic, assign) int status;

-(instancetype)initWithNetOuter:(BOOL)netOuter did:(NSString*)did ip:(NSString*)ip port:(int)port isOnLine:(BOOL)isOnLine;

@end

NS_ASSUME_NONNULL_END
