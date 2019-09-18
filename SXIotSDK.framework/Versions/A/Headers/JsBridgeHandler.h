//
//  JsBridgeHandler.h
//  JsBridgeHandler
//
//  Created by admin on 2019/5/16.
//  Copyright © 2019 admin. All rights reserved.
//
#import <WebKit/WebKit.h>
#import <UIKit/UIKit.h>
#import "WebViewJavascriptBridge.h"
#import "JsHandlers.h"
#import "common.h"
#import "OnJsLoadComplete.h"
#ifndef JsBridgeHandler_h
#define JsBridgeHandler_h

//! Project version number for JsBridgeHandler.
FOUNDATION_EXPORT double JsBridgeHandlerVersionNumber;

//! Project version string for JsBridgeHandler.
FOUNDATION_EXPORT const unsigned char JsBridgeHandlerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JsBridgeHandler/PublicHeader.h>

@interface JsBridgeHandler : NSObject<WKNavigationDelegate>
SX_SINGLETON_DEF

@property(nonatomic, retain) WebViewJavascriptBridge *bridge;
@property(nonatomic, retain) WKWebView *webView;
@property(nonatomic, retain) NSMutableDictionary* jsFilesMap;
@property(nonatomic, retain) NSObject<OnJsLoadComplete>* onJsLoadComplete;

- (void)call:(NSString *)handlerName data:(NSString*)jsonStr
responseCallback:(WVJBResponseCallback)responseCallback;
- (void)call:(NSString *)handlerName data:(NSString*)jsonStr;
- (void)call:(NSString *)handlerName;

- (void)loadJsFile:(NSString*) jsTag jsFilePath:(NSString*) jsFilePath;
- (void)loadJsFileComplete;

@end

#endif /* JsBridgeHandler_h */
