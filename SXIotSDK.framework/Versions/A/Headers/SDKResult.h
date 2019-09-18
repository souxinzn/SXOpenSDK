//
//  SDKResult.h
//  SXIotSDK
//
//  Created by admin on 2019/8/16.
//

#import <Foundation/Foundation.h>

#define SDK_RESULT_CODE_SUCCESS 1
#define SDK_RESULT_CODE_FAIL 0

NS_ASSUME_NONNULL_BEGIN

@interface SDKResult : NSObject

@property(nonatomic, assign) int code;
@property(nonatomic, strong) NSString* msg;
@property(nonatomic, retain) id objParam;

- (instancetype)initWithCode:(int)code;
- (instancetype)initWithCode:(int)code obj:(id)obj;
- (instancetype)initWithCode:(int)code msg:(NSString*)msg;

@end

NS_ASSUME_NONNULL_END
