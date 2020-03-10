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



## IonicModule 核心模块

### forRoot(appRoot, config, deepLinkConfig) config可以配置参数


## IonicPageModule page模块

### forChild(PageName)

### PageName: string 使用时不需要在app.module挂载


statusbar

如果状态栏悬浮，header会重叠，所以暂不支持，设置背景为黑色。防止没有header的页面上顶，添加header.none设置0.55px像素的toolbar，背景为黑色

admob,alipay,Full Screen,Fingerprint Auth,push,Launcher,Update,Version,Browser,Camera

[ERROR] An error occurred while running subprocess cordova.

no target specified

没有找到设备，请检查adb devices

ionic codova run android <--opt>

-l 热连接，和server一样实时刷新
