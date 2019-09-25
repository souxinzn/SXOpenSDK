function FunctionRegister(bridge) {
//    bridge.init(function(message, responseCallback) {
//        console.log('JS got a message', message);
//        var data = {};
//        if (responseCallback) {
//            console.log('JS responding with', data);
//            responseCallback(data);
//        }
//    });

    for (var handlerName in window.jsHandlersMap) {
        bridge.registerHandler(handlerName, function(localBridge, localJsHandlersMap, localHandlerName) {
            return function(data, callback) {
                localJsHandlersMap[localHandlerName](localBridge, data, callback);
            }
        }(bridge, window.jsHandlersMap, handlerName));
    }
}
