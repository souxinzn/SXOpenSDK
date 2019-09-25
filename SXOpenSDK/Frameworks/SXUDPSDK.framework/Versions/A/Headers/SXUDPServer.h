//
//  SXUDPServer.h
//  SXUDPSDK
//
//  Created by admin on 2019/7/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SXUDPServer : NSObject

+ (instancetype)sharedInstance;

-(BOOL)startServer;

-(BOOL)stopServer;

-(BOOL)writeAndFlush_strS:(NSString *)ip port:(int)port dataStr:(NSString *)dataStr;
-(BOOL)writeAndFlush_strB:(NSString *)ip port:(int)port dataB:(NSData *)dataB;

-(BOOL)writeAndFlush_hexS:(NSString *)ip port:(int)port dataHex:(NSString *)dataHex netType:(int)netType zk_id:(NSString *)zk_id;
-(BOOL)writeAndFlush_hexB:(NSString *)ip port:(int)port dataB:(NSData *)dataB netType:(int)netType zk_id:(NSString *)zk_id;

@end

NS_ASSUME_NONNULL_END
