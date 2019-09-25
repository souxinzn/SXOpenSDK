//
//  HTTestBaseViewController+TestMethods.m
//  HTBaseViewController
//
//  Created by liutu on 2017/5/1.
//  Copyright © 2019年 liutu. All rights reserved.
//

#import "SXViewController.h"

//#import "UdpClientTool.h"
//#import "OnUdpDataListener.h"
//#import "LogTool.h"
#import "SXIoTSDK.h"
#import "DataClient.h"
#import "YYModel.h"
#import "SwitchHelper.h"
#import "SensorHelper.h"
#import "RelayNewWindHelper.h"

@implementation SXViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)viewWillAppear:(BOOL)animated {
    [self searchGateway];
}

#pragma mark - Base

//内网搜索主机
- (void)searchGateway {
    NSLog(@"正在搜索网关");
    //    [LogTool log:@"正在搜索网关"];
    [DeviceClient searchGatewayLocal];
}

//连接到特定网关
- (void)connectGateway {
    [DeviceClient connectGateway:[self getTestGatewayInfo]];
}

- (void)addGateway {
    [DataClient addGatewayInfo:[self getTestGatewayInfo]];
}

- (void)lightStudy {
    DeviceInfo* deviceInfo = [DataClient getDeviceById:1];
    if (deviceInfo == nil) {
        deviceInfo = [[DeviceInfo alloc] init];
        deviceInfo.device_study_status = @"Y";
        deviceInfo.device_name = @"测试设备";
        deviceInfo.device_icon = @"icon";
        deviceInfo.device_type = @"dev_Light";
        deviceInfo.sort_name = @"dev";
        deviceInfo.profileId = @"00000000";
        deviceInfo.room_id = 1;
        deviceInfo.zk_id = @"2b456e6224d1125badd50b0f8186f406";
        deviceInfo.device_id = 1;
        [DataClient addDevice:deviceInfo];
    }
    [self startLoading];
    [SwitchHelper study:deviceInfo.device_id callback:^(int code, DeviceInfo * _Nullable deviceInfo) {
        [self stopLoading];
        if (code == 1) {
            [self showAlert:@"学习成功"];
            NSLog(@"==linxin==学习成功：%@", [deviceInfo yy_modelToJSONString]);
        } else {
            [self showAlert:@"学习失败"];
            NSLog(@"==linxin==学习失败");
        }
    }];
}

- (void)newwindStudy {
    DeviceInfo* deviceInfo = [DataClient getDeviceById:3];
    if (deviceInfo == nil) {
        deviceInfo = [[DeviceInfo alloc] init];
        deviceInfo.device_study_status = @"Y";
        deviceInfo.device_name = @"测试新风设备";
        deviceInfo.device_icon = @"icon";
        deviceInfo.device_type = @"dev_newwind";
        deviceInfo.sort_name = @"dev";
        deviceInfo.profileId = @"00000000";
        deviceInfo.room_id = 1;
        deviceInfo.zk_id = @"2b456e6224d1125badd50b0f8186f406";
        deviceInfo.device_id = 3;
        [DataClient addDevice:deviceInfo];
    }
    [self startLoading];
    [RelayNewWindHelper study:deviceInfo.device_id callback:^(int code, DeviceInfo * _Nullable deviceInfo) {
        [self stopLoading];
        if (code == 1) {
            [self showAlert:@"学习成功"];
            NSLog(@"==linxin==学习成功：%@", [deviceInfo yy_modelToJSONString]);
        } else {
            [self showAlert:@"学习失败"];
            NSLog(@"==linxin==学习失败");
        }
    }];
}

- (void)sensorStudy {
    DeviceInfo* deviceInfo = [DataClient getDeviceById:2];
    if (deviceInfo == nil) {
        deviceInfo = [[DeviceInfo alloc] init];
        deviceInfo.device_study_status = @"Y";
        deviceInfo.device_name = @"测试传感器设备";
        deviceInfo.device_icon = @"icon";
        deviceInfo.device_type = @"dev_WXWenShiDu";
        deviceInfo.sort_name = @"sensor";
        deviceInfo.profileId = @"00000000";
        deviceInfo.room_id = 1;
        deviceInfo.zk_id = @"2b456e6224d1125badd50b0f8186f406";
        deviceInfo.device_id = 2;
        [DataClient addDevice:deviceInfo];
    }
    [self startLoading];
    [SensorHelper study:deviceInfo.device_id callback:^(int code, DeviceInfo * _Nullable deviceInfo) {
        [self stopLoading];
        if (code == 1) {
            [self showAlert:@"学习成功"];
            NSLog(@"==linxin==学习成功：%@", [deviceInfo yy_modelToJSONString]);
        } else {
            [self showAlert:@"学习失败"];
            NSLog(@"==linxin==学习失败");
        }
    }];
}

- (void)lightOpen {
    DeviceInfo* deviceInfo = [DataClient getDeviceById:1];
    if (deviceInfo == nil) {
        deviceInfo = [[DeviceInfo alloc] init];
        deviceInfo.device_study_status = @"Y";
        deviceInfo.device_name = @"测试设备";
        deviceInfo.device_icon = @"icon";
        deviceInfo.device_type = @"dev_Light";
        deviceInfo.sort_name = @"dev";
        deviceInfo.profileId = @"00000000";
        deviceInfo.room_id = 1;
        deviceInfo.zk_id = @"2b456e6224d1125badd50b0f8186f406";
        deviceInfo.device_id = 2;
        deviceInfo.device_ip = @"c0a80005";
        deviceInfo.device_code = @"180.172.042.122";
        deviceInfo.device_route_index = @"2";
        deviceInfo.device_storage_index = @"23";
        [DataClient addDevice:deviceInfo];
    }
    [SwitchHelper open:deviceInfo.device_id];
}

- (void)lightClose {
    DeviceInfo* deviceInfo = [DataClient getDeviceById:1];
    if (deviceInfo == nil) {
        deviceInfo = [[DeviceInfo alloc] init];
        deviceInfo.device_study_status = @"Y";
        deviceInfo.device_name = @"测试设备";
        deviceInfo.device_icon = @"icon";
        deviceInfo.device_type = @"dev_Light";
        deviceInfo.sort_name = @"dev";
        deviceInfo.profileId = @"00000000";
        deviceInfo.room_id = 1;
        deviceInfo.zk_id = @"2b456e6224d1125badd50b0f8186f406";
        deviceInfo.device_id = 2;
        deviceInfo.device_ip = @"c0a80005";
        deviceInfo.device_code = @"180.172.042.122";
        deviceInfo.device_route_index = @"2";
        deviceInfo.device_storage_index = @"23";
        [DataClient addDevice:deviceInfo];
    }
    [SwitchHelper close:deviceInfo.device_id];
}

- (void)testAddProfile {
    ProfileInfo* profileInfo = [[ProfileInfo alloc] initWithName:@"测试家庭2"];
    [DataClient addProfile:profileInfo];
    NSLog(@"profileInfo: %@", [profileInfo yy_modelToJSONString]);
    
}

-(GateWayInfo*) getTestGatewayInfo {
    //    [{"zkEnable":"Y","zkPwd":"123456","zkOutPort":3345,"zkName":"2b45","profileId":"","zkOutIp":"47.97.17.125","zkId":"2b456e6224d1125badd50b0f8186f406","pVersion":"1","zkInPort":55555}]
    GateWayInfo* gateWayInfo = [[GateWayInfo alloc] init];
    gateWayInfo.zkEnable = @"Y";
    gateWayInfo.zkPwd = @"123456";
    gateWayInfo.zkOutPort = 3345;
    gateWayInfo.zkName = @"2b45";
    gateWayInfo.profileId = @"00000000";
    gateWayInfo.zkOutIp = @"47.97.17.125";
    gateWayInfo.zkId = @"2b456e6224d1125badd50b0f8186f406";
    gateWayInfo.pVersion = @"1";
    gateWayInfo.zkInPort = 55555;
    return gateWayInfo;
}

- (void) showAlert:(NSString*)msg {
    UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"提示" message:msg preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        NSLog(@"action = %@", action);
    }];
    
    UIAlertAction* cancelAction = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        NSLog(@"action = %@", action);
    }];
    
    [alert addAction:defaultAction];
    [alert addAction:cancelAction];
    [self presentViewController:alert animated:YES completion:nil];
}
UIAlertController* loadingAlert;
- (void) startLoading {
    if (loadingAlert == nil) {
        UIActivityIndicatorView* spinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge];
        [self.view addSubview:spinner];
        
        loadingAlert = [UIAlertController alertControllerWithTitle:nil message:@"Loading..." preferredStyle:UIAlertControllerStyleAlert];
        [loadingAlert.view addSubview:spinner];
        [spinner startAnimating];
    }
    
    [self presentViewController:loadingAlert animated:YES completion:nil];
}

- (void) stopLoading {
    if (loadingAlert != nil) {
        [loadingAlert dismissViewControllerAnimated:YES completion:nil];
    }
}

@end
