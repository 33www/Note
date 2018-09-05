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


### NavController 导航路由

this.navCtrl.push(pageName)

this.navCtrl.pop() 返回


### ModalController 模态页面

通常用于登录和注册等临时页面 this.modalCtrl.create(ModalPage)


### theme 修改默认样式

全局样式 theme => variables @import 自定义样式


### cards 卡片

ion-card ion-card-header ion-card-content 


### providers 服务

即angular的service


