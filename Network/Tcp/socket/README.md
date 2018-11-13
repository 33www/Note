长连接，推送 -> 接收

```
var ws = new WebSocket(url, [protocol])   // 创建链接


ws.onopen = function() {    // 监听请求成功
  ws.send(data)  // 发送数据
}


ws.onmessage = function(res) {    // 监听响应成功，返回数据
  
}


ws.onclose = function() {  // 监听请求结束

}


ws.error = function() {  // 监听错误

}




ws.readyState // 读取链接状态


ws.bufferedAmount // 读取即将发送的消息
```
