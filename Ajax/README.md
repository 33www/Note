Xmlhttprequest对象向后端请求数据
实现数据传输，而不需要整个页面刷新



## 创建ajax对象

`var xmlhttp=new XMLHttpRequest();`  
//兼容IE7以下  
`var xmlhttp;  
if (window.XMLHttpRequest){  
  xmlhttp=new XMLHttpRequest();   
  }  
else{    
  xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");     
  }`  
  
## 事件驱动及DOM与响应数据绑定（数据发生变化）  
  
`xmlhttp.onreadystatechange=function(){    
    document.getElementById("ID").innerHTML=xmlhttp.responseText;    
  }`  
  
## 声明请求

`xmlhttp.open("GET","test1.txt",true);`

## 发送请求
`xmlhttp.send();`

>核心，轮询直至数据发生变化，触发操作DOM的函数
