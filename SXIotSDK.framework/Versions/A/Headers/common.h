//
//  common.h
//  Pods
//
//  Created by ShimLin on 2019/7/16.
//

#ifndef common_h
#define common_h

#define SX_SINGLETON_DEF \
+ (instancetype)sharedInstance;\

#define SX_SINGLETON_IMP(_type_) \
static _type_ *theSharedInstance = nil;\
+ (instancetype)sharedInstance{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        theSharedInstance = [[super alloc] init];\
    });\
    return theSharedInstance;\
}\
+ (instancetype) allocWithZone:(struct _NSZone *)zone {\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        if (theSharedInstance == nil) {\
            theSharedInstance = [super allocWithZone:zone];\
        }\
    });\
    return theSharedInstance;\
}\
- (instancetype)copyWithZone:(struct _NSZone *)zone {\
    return self;\
}\
- (instancetype)mutableCopyWithZone:(struct _NSZone *)zone {\
    return self;\
}\
- (instancetype)copy {\
return self;\
}\
- (instancetype)mutableCopy {\
return self;\
}

#endif /* common_h */
