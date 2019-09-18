//
//  JsHandlers.h
//  WebViewJSBridgeDemo
//
//  Created by admin on 2019/5/6.
//  Copyright © 2019 叶建华. All rights reserved.
//

#import "WebViewJavascriptBridge.h"
#ifndef JsHandlers_h
#define JsHandlers_h

@interface JsHandlers: NSObject

-(void)sayHello:(id)data responseCallback:(WVJBResponseCallback) responseCallback;

@end

#endif /* JsHandlers_h */
