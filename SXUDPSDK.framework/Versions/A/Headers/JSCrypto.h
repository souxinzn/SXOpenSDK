//
//  JSAES.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSCrypto : NSObject

+ (NSString*) decrypt:(NSString*) fileContent;

@end

NS_ASSUME_NONNULL_END
