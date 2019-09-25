window.jsHandlersMap = {
    functionInJs: function(bridge, data, responseCallback) {
        if (responseCallback) {
            try {
//                window.getConfigInfo({}, function(resData) {
//                    responseCallback(resData);
//                });
                window.outerTest();
            } catch (e) {
                console.error(e);
            }
        }
    },
    initHandlers: function(bridge, data, responseCallback) {
        var handlerArr = data;
        if (typeof(handlerArr)=='string') {
            handlerArr = JSON.stringify(handlerArr);
        }
        for (var index in handlerArr) {
            var handle = handlerArr[index];
            window[handle.fnName] = function(handle) {
                return function(params, callback) {
                    bridge.callHandler(
                        handle.fnName,
                        params,
                        function(resData) {
                          callback(resData);
                        }
                    );
                }
            }(handle);
        }
        responseCallback("success");
    },
    refreshOuterHandlers: function(bridge, data, responseCallback) {
        for (var key in window) {
            if (new RegExp("^jsHandler_").test(key)) {
                bridge.registerHandler(key, window[key]);
            }
        }
        responseCallback("success");
    }
};
