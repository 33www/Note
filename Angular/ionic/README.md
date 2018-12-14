ionic是混合开发的ui框架

npm i -g ionic cordova //全局安装脚手架

ionic start projectname template

-template

tutorial 教程

ionic g component 创建组件

ionic g page 创建页面


ion-tabs 导航

ion-list

### page页面

页面需要app.module里引入，并注册组件，如果不页面不需要被其他页面引入，还要在entryComponents注册


### ionic 组件component与angular区别

component 被封装成一个模块 ComponentsModule

使用组件需要在app.module里引入ComponentsModule，并且注册模块

组件使用ng指令则需要在component.module里引入BrowserModule，并注册模块


### ion-nav 导航页面

相当于router-view，通常在根组件里使用












### ion-navbar 导航栏

默认二级页面会添加返回按钮，去掉返回文字需在app.module里面配置 import => IonicModule => (myApp, {backButtonText: ''})





### theme 修改默认样式

全局样式 theme => variables @import 自定义样式


### cards 卡片

ion-card ion-card-header ion-card-content 


### providers 服务

即angular的service


### list 列表

ion-list>ion-item

no-lines 清除边框

inset 清除外边框并添加边距 如果不是占满屏幕的需添加

ion-item-group 最后一个item不会没有边框

item-start/item-end item定位

ion-thumbnail 缩略图

在button内添加item属性，有默认有个三角图标


### ion-button 按钮类名 也可以使用ion-buttons组件将button包裹起来

标签可以自定义，但最好使用button标签

color属性改变颜色

outline属性改成边框按钮

clear使用无样式按钮

block 块级按钮

full/small/large 按钮大小

icon-start/ icon-end / icon-only 按钮图标位置
 





### showWhen ios/android 在不同机器显示


### config 全局设置


### theming 主题样式

text-left text-center text-right text-wrap text-nowrap

padding/margin 默认16px no-padding padding-vertical padding-horizontal

[attr.text-center]="isMD ? '' : null" 动态绑定

color 声明变量$colors

默认font-size = 62.5% （浏览器默认16px），1rem = 10px



### ion-header和ion-content

ion-header 是绝对定位的

ion-content 是占满整屏幕，有独自的滚动条，不会影响到header

ion-tabs 是绝对定位


### segment

ion-segment 选项卡标签 [(ngModel)]="segment"

ion-segment-button 绑定value="notice"

然后在显示内容的标签绑定 [ngSwitch]="segment"

对应的内容绑定 *ngSwitchCase = " 'notice' "

默认显示的页面需要在ts里定义 segment = 'notice'


## 组件

### ion-nav 视图容器，放在根组件里面

### ion-tabs 底部导航，通过absolut定位

[selectedIndex] = tabIndex 绑定index，然后通过push(tabpages {tabIndex: value})使用

[rootParams] = 绑定tab页面要接收的参数，传递的是一个对象，{key:value,key:value}


### ion-header 头部，通过absolut定位，二级页面会自动添加返回按钮

### ion-content 内容页面，充满整个页面，自带滚动条

### ion-grid

grid布局 相当于一个div，通过flex,column 将ion-row设置为grid的列；默认5px内边距

ion-row，ion-col 默认col是相等；还可以设置col-auto和offset-*

ion-row 可以设置flex属性justify-content-between/justify-content-around/justify-content-end/justify-content-center/justify-content-start/align-items-baseline/align-items-stretch/align-items-end/align-items-center/align-items-start

ion-col 可以设置flex属性align-self-start/align-self-center/align-self-end/align-self-stretch/align-self-baseline


### 统一ios/android模式

config => mode = 'ios/android'



### 实例成员

create

present




## 导航


### NavController 导航路由

this.navCtrl.push(pageName) => [navPush]="page"

this.navCtrl.pop() 返回 => navPop

如果来回切换，会产生页面堆栈问题，可通过push().then(()=>{this.navCtrl.remove(this.viewCtrl.index)})删除历史记录

this.navCtrl.remove(this.viewCtrl.index-1, 2) 删除多个页面

popToRoot返回根页面会自动删除页面栈

setRoot 设置根页面，TabsPage可以返回到首页，并可以传参。或许可以用来设置堆栈中的页面

parent.select(index) 跳转到tab页面，但是不能传参

如果导航到tab页面，并需要传参，navCtrl.push(TabsPage, {tabIndex: num, key: value})


!! nav返回不能传参

nav返回传参解决方案： this.navCtrl.push().then(() => {this.navCtrl.getActive().onDidDismiss(data => {console.log(data)})})

this.viewCtrl.dismiss()

!! select跳转不能传参

### ModalController 模态页面（默认没有返回，要求做出某些行为后自动关闭，配合dismiss）

通常用于登录和注册等临时页面 this.modalCtrl.create(ModalPage)

modal和nav的区别在于，一个是新页面，一个是带tab的二级页面

modal不能返回根页面，只能dismiss掉。（navCtrl.popToRoot()直接返回根页面）

onDidDismiss(fn) 用于模态框关闭时回调函数


### ViewController 页面

index返回当前页面

dismiss() 删除当前页面

onDisDismiss(fn) 页面关闭前触发函数




## 交互


### toast 消息提示框

通常用于消息提示


### alert 信息确定框

通常用于信息确认

alertCtrl.creater() 创建alert实例 

option: 

title => str

subTitle => str

message => str

buttons => [] , [{text: str, handler: fn, role: str}]

input => 


### action-sheet 行动表

create options =>

title 标题

buttons 按钮 => text, icon, handler, role

 




### popover 内容展示框

通常用于某个菜单下的列表，如果传入$event，并在present挂载{ev: event}，这样就会有三角提示


### loading 加载框



## 表单


### ion-input 输入框

ion-label fixed固定，stacked上边，float输入时变stacked

placeholder


### ion-checkbook 复选框

ion-label 默认在checkbook右侧

checked="true" 默认选中 disabled="true" 禁用


### ion-select 选项框

ion-select => ion-option

prop => 

okText 确定按钮文本

cancelText 返回按钮文本

interface 弹出框类型 => alert(默认)，action-sheet，popover

selectOptions 弹框设置

multiple 是否多选

close 关闭弹出框（#id.close）

### InfiniteScroll 无限滚动

ion-infinite-scroll 组件放置在list下面，(ionInfinite)监听事件，doInfinite($event)绑定方法

doInfinite(infiniteScroll){ // 当下拉时触发
 infiniteScroll.complete()  // 完成下拉刷新
} 

### item-sliding 滑动隐藏按钮

close 隐藏按钮(#id.close)

### events 发布订阅事件

events.publish('name', data, Date.now()) 发布

events.subscribe('name', (data, time)=>{}) 订阅 // tiem是发布的时间

## providers 服务

注入服务，就是实例化方法类

ionic g providers api 新建api服务



## Platform 平台功能

### registerBackButtonAction 返回键方法

registerBackButtonAction(() => {this.platform.exitApp()}) 返回直接退出APP


### 启动页和图标 ionic cordova resources

cli => ionic cordova resources

第一步，将resources下的splash替换成启动页图片，删除ios和android下的图片，splash最小2732*2732，icon最小1024*1024
第二步，执行ionic cordova resources android | ios -s(只生成启动页)， -i(只生成图标)




## native 原生功能

### clipboard 复制粘贴

this.clipboard.copy(this.myRecommendUrl)

### inAppBrowser 打开浏览器

this.inAppBrowser.create（url, '_blank', {option}）




## http 

this.http.get(url).subscribe((data) => {成功回调}，(err) => {失败回调})

数据处理 let data = JSON.parse(data['_body'])

this.http.post(url,JSON.stringify({suername: 'admin'}),{headers:this.headers}).subscribe((res) => {成功回调})


## 状态码

401 没有权限，需要带token，找后端



### ws版本3.3.3不支持浏览器自动刷新，改为3.3.2版本
```
read ECONNRESET
at _errnoException (util.js:992:11)
at TCP.onread (net.js:618:25)
```

### 如果node-sass版本报错，先卸载，然后npm cache clean --forc，再npm i

### 如果npm未能加载Visual C++组件，运行npm install --global --production windows-build-tools 



