//
//  DeviceInfo.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/18.
//

#import <Foundation/Foundation.h>
#import "Tabledev.h"
#import "SXBaseInfo.h"

FOUNDATION_EXPORT NSString *kCustom;
FOUNDATION_EXPORT NSString *kLight; //灯
FOUNDATION_EXPORT NSString *kHotelLight;
FOUNDATION_EXPORT NSString *kTV;   //电视机
FOUNDATION_EXPORT NSString *kTopBox;
FOUNDATION_EXPORT NSString *kMusic;
FOUNDATION_EXPORT NSString *kAirControl;
FOUNDATION_EXPORT NSString *kXiaoMi;
FOUNDATION_EXPORT NSString *kTransfer;
FOUNDATION_EXPORT NSString *kCurtain;
FOUNDATION_EXPORT NSString *kRemoter;
FOUNDATION_EXPORT NSString *kDecoder;
FOUNDATION_EXPORT NSString *kTianLongDecoder;
FOUNDATION_EXPORT NSString *kTransferControl;
FOUNDATION_EXPORT NSString *kProjector;
FOUNDATION_EXPORT NSString *kJuZhen;
FOUNDATION_EXPORT NSString *kCenterAirControl;
FOUNDATION_EXPORT NSString *kGreeAirControl;
FOUNDATION_EXPORT NSString *kDKQ01AirControl;
FOUNDATION_EXPORT NSString *kWarm485; //
FOUNDATION_EXPORT NSString *kYLTemp;
FOUNDATION_EXPORT NSString *kHLWarm;
FOUNDATION_EXPORT NSString *kMRDWarm;
FOUNDATION_EXPORT NSString *kHaiLinAirControl;
FOUNDATION_EXPORT NSString *kZHCenterAirCondition;
FOUNDATION_EXPORT NSString *kTempSensor;
FOUNDATION_EXPORT NSString *kGasSensor;
FOUNDATION_EXPORT NSString *kWaterValve;
FOUNDATION_EXPORT NSString *kGuangGan;
FOUNDATION_EXPORT NSString *kRenTi;
FOUNDATION_EXPORT NSString *kPM2_5;
FOUNDATION_EXPORT NSString *kDianZiSuo;
FOUNDATION_EXPORT NSString *kDimmingLight;
FOUNDATION_EXPORT NSString *kDimmingRGBLight;
FOUNDATION_EXPORT NSString *kWirelessDoorLock;
FOUNDATION_EXPORT NSString *kWirelessDoorHotelLock;
FOUNDATION_EXPORT NSString *kDevCamera_XM;
FOUNDATION_EXPORT NSString *kDevCamera;
FOUNDATION_EXPORT NSString *kNewWind;
FOUNDATION_EXPORT NSString *kNest; //Nest
FOUNDATION_EXPORT NSString *kBGMusic;
FOUNDATION_EXPORT NSString *kBGMusic2;
FOUNDATION_EXPORT NSString *kWaterMeter;
FOUNDATION_EXPORT NSString *kElecMeter;
FOUNDATION_EXPORT NSString *kNewWind_Hotel;
FOUNDATION_EXPORT NSString *kCurtain_Hotel;
FOUNDATION_EXPORT NSString *kSwitchScene;
FOUNDATION_EXPORT NSString *kCenterAirControl_DAKIN;
FOUNDATION_EXPORT NSString *kCenterAirControl_YL;
FOUNDATION_EXPORT NSString *kCenterAirControl_DAKIN_2;
FOUNDATION_EXPORT NSString *kCenterAirControl_MEDIA;
FOUNDATION_EXPORT NSString *kCenterAirControl_H2M1C;
FOUNDATION_EXPORT NSString *kCenterAirControl_SX;
FOUNDATION_EXPORT NSString *kWireLessSwitch;
FOUNDATION_EXPORT NSString *kVOC; //voc 二
FOUNDATION_EXPORT NSString *kWXWenShiDu;
FOUNDATION_EXPORT NSString *kLSNewWind;
FOUNDATION_EXPORT NSString *kDev_newwind_aidishi;
FOUNDATION_EXPORT NSString *kDooyaCurtain;
FOUNDATION_EXPORT NSString *kCurtain485;
FOUNDATION_EXPORT NSString *kMirhz_newwind;
FOUNDATION_EXPORT NSString *kWXCurtain;
FOUNDATION_EXPORT NSString *kWaterLogging;
FOUNDATION_EXPORT NSString *kDoorContact;
FOUNDATION_EXPORT NSString *kDev_nh3; //氨
FOUNDATION_EXPORT NSString *kDev_h2s; //硫
FOUNDATION_EXPORT NSString *kDev_WXGasSensor;
FOUNDATION_EXPORT NSString *kDev_GreeAirCondition_DLJ;

FOUNDATION_EXPORT NSString *kDevStudyStatusSuccess; //设备学习成功
FOUNDATION_EXPORT NSString *kDevStudyStatusFailed; //设备学习失败

FOUNDATION_EXPORT NSString *kDevSwitchStatusOn; //设备打开状态
FOUNDATION_EXPORT NSString *kDevSwitchStatusOff; //设备关闭状态

NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfo : SXBaseInfo

@property (nonatomic, assign) NSInteger device_id;
@property (nonatomic, assign) NSInteger room_id;
@property (nonatomic, copy) NSString* device_name;
@property (nonatomic, copy) NSString* device_type;
@property (nonatomic, copy) NSString* device_code;
@property (nonatomic, copy) NSString* device_study_status;
@property (nonatomic, copy) NSString* device_route_index;
@property (nonatomic, copy) NSString* device_ip;
@property (nonatomic, copy) NSString* device_storage_index;
@property (nonatomic, copy) NSString* device_icon;
@property (nonatomic, assign) NSInteger device_order_num;
@property (nonatomic, copy) NSString* dev_LightSensor;
@property (nonatomic, copy) NSString* zk_id;
@property (nonatomic, assign) NSInteger r_id;
@property (nonatomic, copy) NSString* ver_num;
@property (nonatomic, copy) NSString* device_mac;
@property (nonatomic, copy) NSString* device_did;
@property (nonatomic, assign) NSInteger device_port;
@property (nonatomic, copy) NSString* device_description;
@property (nonatomic, copy) NSString* device_switch_statu;
@property (nonatomic, copy) NSString* device_uname;
@property (nonatomic, copy) NSString* device_password;
@property (nonatomic, assign) NSInteger isInScene;
@property (nonatomic, assign) NSInteger countFuncInScene;
@property (nonatomic, assign) NSInteger loc_left;
@property (nonatomic, assign) NSInteger loc_top;
@property (nonatomic, copy) NSString* profileId;
@property (nonatomic, copy) NSString* sort_name;

@property (nonatomic, assign) CGFloat rowHeight;

- (void)reformData:(NSDictionary *)dic;

- (Tabledev*) convert2Tabledev;

- (BOOL)getWarmIsOn;
- (NSString *)getWarmSetTemp;
- (NSString *)getWarmCurTemp;
- (void)setWarmIsOn:(BOOL)isOn;
- (void)setWarmSetTemp:(NSInteger)temp;
//是否是传感器
- (BOOL)isSensorType;

@end

NS_ASSUME_NONNULL_END
