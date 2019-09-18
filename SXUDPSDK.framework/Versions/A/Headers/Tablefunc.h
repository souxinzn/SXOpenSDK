//
//  Tablefunc.h
//  CocoaAsyncSocket
//
//  Created by admin on 2019/8/15.
//

#import <Foundation/Foundation.h>

@interface Tablefunc : NSObject

@property (nonatomic, strong) NSNumber *func_id;
@property (nonatomic, copy) NSString *func_code;
@property (nonatomic, strong) NSNumber *func_index;
@property (nonatomic, copy) NSString *func_name;
@property (nonatomic, copy) NSString *func_type;
@property (nonatomic, copy) NSString *func_bgcolor;
@property (nonatomic, copy) NSString *func_size;
@property (nonatomic, copy) NSString *func_storage_val;
@property (nonatomic, strong) NSNumber *device_id;
@property (nonatomic, copy) NSString *zk_id;
@property (nonatomic, strong) NSNumber *server_id;
@property (nonatomic, strong) NSNumber *isInScene;
@property (nonatomic, strong) NSNumber *func_position;
@property (nonatomic, copy) NSString *order_index;  //指令号 硬场景使用
@property (nonatomic, strong) NSNumber *delay_time; //指令执行间隔时间 单位毫秒
@property (nonatomic, copy) NSString *func_port;  //指令执行端口号 (串口:1-4;  485:11; 红外:21-28; 网口:61)
@property (nonatomic, strong) NSNumber *func_bt_rate; //波特率 十进制
@property (nonatomic, strong) NSNumber *func_valid_bit; //校验位 0-无校验  1-奇校验  2-偶校验
@property (nonatomic, strong) NSNumber *func_stop_bit;  //停止位
@property (nonatomic, strong) NSNumber *func_data_bit;  //数据位

@end
