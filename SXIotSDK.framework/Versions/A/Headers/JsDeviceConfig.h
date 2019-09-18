//
//  JsDeviceConfig.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/8/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JsDeviceConfig : NSObject

@property(nonatomic, copy) NSString* control_model;
@property(nonatomic, strong) NSArray<NSString*>* studyType;
@property(nonatomic, strong) NSArray<NSString*>* queryType;
@property(nonatomic, copy) NSString* controlType;

@end

NS_ASSUME_NONNULL_END
