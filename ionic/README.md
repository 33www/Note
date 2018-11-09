cli

`npm i g ionic`



组件

`ionic g component`
```
@NgModule({  
  declarations: []， // 声明 page需要在这里声明
  entryComponents： []， // 入口组件
})
```

页面

`ionic g page`


tab


nav


modal


view



provider


storage




remark

清除图片缓存  在url后+ ? + 随机数，可以是时间戳


### 生命周期

## constructor() 构造函数，只会触发一次

## ionViewDidLoad() 页面被加载时触发，当页面栈被删除后又重新加载，就会重新触发



## ionicModule 核心模块

### forRoot(appRoot, config, deepLinkConfig) config可以配置参数
