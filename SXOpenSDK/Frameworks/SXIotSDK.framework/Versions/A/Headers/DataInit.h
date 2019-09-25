//
//  DataInit.h
//  SXIotSDK
//
//  Created by ShimLin on 2019/7/16.
//

#import <Foundation/Foundation.h>
#import "tableinfo.h"

/**
 * 灯光
 */
#define DEV_TYPE_LIGHT @"dev_Light"

/**
 * 酒店開関
 */
#define DEV_TYPE_HOTEL_LIGHT @"dev_HotelLight"

/**
 * 电视机
 */
#define DEV_TYPE_TV @"dev_TV"

/**
 * 机顶盒
 */
#define DEV_TYPE_TOP_BOX @"dev_TopBox"
/**
 * 音响
 */
#define DEV_TYPE_MUSIC @"dev_Music"

/**
 * 空调
 */
#define DEV_TYPE_AIR_CONDITION @"dev_AirCondition"

/**
 * 小米盒子
 */
#define DEV_TYPE_XIAOMI_BOX @"dev_XiaoMi"

/**
 * 无线转接头
 */
#define DEV_TYPE_TRANSFER @"dev_Transfer"

/**
 * 温湿传感器
 */
#define DEV_TYPE_GNA_YING @"dev_GanYing"

/**
 * 窗帘
 */
#define DEV_TYPE_CURTAIN @"dev_Curtain"
/**
 * 高清播放器 (遥控器)
 */
#define DEV_TYPE_ABPAYER @"dev_ABPayer"
/**
 * 爱威解码器 (遥控器)
 */
#define DEV_TYPE_DECODER @"dev_Decoder"

/**
 * 天龙解码器(遥控器)
 */
#define DEV_TYPE_TIAN_LONG_DECODER @"dev_TianLongDecoder"
/**
 * 切换器(遥控器)
 */
#define DEV_TYPE_TTANSFER_CONTROL @"dev_TransferControl"

/**
 * 投影仪(遥控器)
 */
#define DEV_TYPE_PROJECTOR @"dev_Projector"
/**
 * 矩阵(遥控器)
 */
#define DEV_TYPE_MATRIX @"dev_Matrix"
/**
 * 燃气感应
 */
#define DEV_TYPE_GAS_SENSOR @"dev_GasSensor"

/**
 * 燃气阀门
 */
#define DEV_TYPE_GAS_VALVE @"dev_GasValve"

/**
 * 浇花
 */
#define DEV_TYPE_WATERING_VALVE @"dev_WateringValve"

/**
 * 甲醛
 */
#define DEV_TYPE_JIAQUAN @"dev_JiaQuan"

/**
 * 人体感应
 */
#define DEV_TYPE_BODY_INDUCTION @"dev_BodyInduction"
/**
 * 电子锁
 */
#define DEV_TYPE_ELOCK @"dev_Elock"
/**
 * 调光灯
 */
#define DEV_TYPE_DIMMING_LIGHT @"dev_DimmingLight"

#define DEV_TYPE_GUANG_GAN @"dev_guanggan"
/**
 * 摄像头
 */
#define DEV_TYPE_CAMERA @"dev_Camera"

/**
 * 新未来摄像头
 */
#define DEV_TYPE_BLUE_CAMERA @"dev_Camera_NewFeature"

/**
 * 雄迈摄像头
 */
#define DEV_TYPE_XM_CAMERA @"dev_Camera_xm"

/**
 * 无限门锁
 */
#define DEV_TYPE_WIFI_LOCK @"dev_Wireless_DoorLock"
/**
 * 情景开关设备
 */
#define DEV_TYPE_DEV_SWITCH_SCENE @"dev_SwitchScene"
/**
 * 大金空调
 */
#define DEV_TYPE_DEV_DAKIN @"dev_CenterAirCondition_DAKIN"
/**
 * 大金空调
 */
#define DEV_TYPE_DEV_ZH @"dev_CenterAirConditionZH"
/**
 * 日立中央空调
 */
#define DEV_TYPE_DEV_CAC @"dev_CenterAirCondition"
/**
 * 中央空调(艺林)
 */
#define DEV_TYPE_DEV_CAC_YL @"dev_CenterAirCondition_YiLin"
/**
 * 美的中央空调
 */
#define DEV_TYPE_DEV_MEDIA @"dev_CenterAirCondition_MEDIA"
/**
 * 格力中央空调
 */
#define DEV_TYPE_DEV_GREE @"dev_GreeAirCondition"


/**
 * 中央空调（日立2）
 */
#define DEV_TYPE_DEV_H2M1C @"dev_CenterAirConditionH2M1C"
/**
 * 485地暖(西蒙)
 */
#define DEV_TYPE_DEV_WARM @"dev_Warm"
/**
 * 艺林地暖
 */
#define DEV_TYPE_DEV_YLTEMP @"dev_YLTemp"

/**
 * 海林485地暖
 */
#define DEV_TYPE_DEV_WARM_HL @"dev_Warm_HL"

/**
 * 海林485地暖
 */
#define DEV_TYPE_DEV_NEWWIND_AIDISHI @"dev_newwind_aidishi"

/**
 * 兰舍新风
 */
#define DEV_TYPE_DEV_NEWWIND_LS @"dev_LanSheNewWind"

/**
 * 兰舍新风KD-1-E
 */
#define DEV_TYPE_DEV_NEWWIND_LS_KD @"dev_LanSheNewWind_KD"

/**
 * 杜亚窗帘
 */
#define DEV_TYPE_DEV_CURTAIN_DOYA @"dev_dooyaCurtain"

/**
 * 背景音乐
 */
#define DEV_TYPE_DEV_BGMUSIC @"dev_BGMusic"

#define DEV_TYPE_DEV_BGMUSIC_2 @"dev_BGMusic2"

/**
 * pm2.5
 */
#define DEV_TYPE_DEV_PM25 @"dev_pm2.5"

/**
 * nest
 */
#define DEV_TYPE_DEV_NEST @"dev_nest"

/**
 * 二氧化碳
 */
#define DEV_TYPE_DEV_VOC @"dev_voc"

/**
 * 无线温湿度
 */
#define DEV_TYPE_DEV_WX_HUMITURE @"dev_WXWenShiDu"


/**
 * 新风
 */
#define DEV_TYPE_DEV_NEWWIND @"dev_newwind"
/**
 * 机器人
 */
#define DEV_TYPE_DEV_PAD_BOT @"dev_padbot"

/**
 * 电表
 */
#define DEV_TYPE_DEV_AMMETER @"dev_ElecMeter"

/**
 * 氨气
 */
#define DEV_TYPE_DEV_NH3 @"dev_nh3"

/**
 * 硫化氢
 */
#define DEV_TYPE_DEV_H2S @"dev_h2s"
/**
 * 水表
 */
#define DEV_TYPE_DEV_WATERMETER @"dev_WaterMeter"

/**
 * 酒店新风
 */
#define DEV_TYPE_HOTEL_NEW_WIND @"dev_newwind_hotel"

/**
 * 酒店窗帘
 */
#define DEV_TYPE_HOTEL_CURTAIN @"dev_Curtain_hotel"

/**
 * 海林温控器
 */
#define DEV_TYPE_DEV_WENKONGQ_HL @"dev_HaiLinAirCondition"

/**
 * 水浸传感器
 */
#define DEV_TYPE_DEV_WATER_LOGGING @"dev_waterLogging"
/**
 * 门磁传感器
 */
#define DEV_TYPE_DEV_DOOR_CONTACT @"dev_doorContact"
/**
 * 自定义
 */
#define DEV_TYPE_CUSTOM @"dev_Custom"

NS_ASSUME_NONNULL_BEGIN

@interface DataInit : NSObject

+ (void)initial;

@end

NS_ASSUME_NONNULL_END
