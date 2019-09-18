//
//  OnDeviceStudyListener.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/30.
//

#ifndef OnDeviceStudyListener_h
#define OnDeviceStudyListener_h
#import "DeviceInfo.h"

@protocol OnDeviceStudyListener <NSObject>

-(void)success:(DeviceInfo*)deviceInfo;
-(void)fail;

@end

#endif /* OnDeviceStudyListener_h */
