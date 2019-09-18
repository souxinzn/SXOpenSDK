//
//  NSObject+PropertyList.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (PropertyListing)

/* 获取对象的所有属性 */
- (NSMutableDictionary *) sxProperties;

@end

NS_ASSUME_NONNULL_END
