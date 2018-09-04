## Angular

angular 前端模块化、组件的开发平台及MVVM框架    
webpack构建工具，本地服务器，浏览器自动刷新（http-server + livereload)  
typescript angular基于ts开发的，是底层开发语言   
websocket 传输协议



## 版本变化

* angularJS 特性：controller/$scope

* angular2 特性：环境设置

* angular4.0 特性：cli


## 快速上手

### Angular/cli

> 这是一个angular脚手架，可以看成是angular的应用程序，命令行接口，用于自动化开发angular项目

* npm install -g @angular/cli(@指定版本)

* npm uninstall -g @angular/cli 卸载

* ng v 查看版本

* ng new *projectName* 创建项目  

* ng serve 启动项目  

* ng generate component *componetName* 生成组件


### 目录

* e2e 这是测试用的

* node_modules 这是node环境

* README.md 这是自述文件

* src 这是放要写的代码  

	**app/ 存放代码**  
     
	app.component.ts 组件  
	app.component.html 组件html代码  
	app.component.css 组件css代码  
	app.module.ts 模块  
     
	**assets/ 存放图片**   
	 
	**index.html 主页**  
	
	**style.css 全局样式**  
	
	**favicon.ico 图标**
	
	
### 模块

> angular既是一个开发平台，也是一个JS框架，NgModule是一个独立的模块，基于node_module，能与其他模块合作，模块与模块间耦合性低

	* module.ts 模块配置文件，配置需要导入的模块和组件
	
		`import { BrowserModule } from '@angular/platform-brower'; 导入浏览器模块`
		
		`import { NgModule } from '@angular/core'; 导入根模块`
		
		`import { AppComponent } from './app.component'；导入根组件`
		
		`@NgModule({
  			declarations: [
    				AppComponent 声明组件
  			],
  			imports: [
    				BrowserModule 导入外部模块
  			],
  			providers: [],
  			bootstrap: [AppComponent]
		})`

* 内置模块

	* FormsModule 表单模块，数据双向绑定


### 组件

> 组件化是angular的核心，将HTML切分成多个组件，每个组件有独立的HTML/CSS/JS，用组件选择器构造index.html，组件基于angular框架，组件间内聚强
> 组件=UI模板+交互数据
> app.component是根组件，对应app-root，新生成的组件有独立的文件夹
> ng-zorro-antd 蚂蚁金服开发的一个angular组件  
> ng-alain 这是一个基于ng-zorro开发的angular组件

* src/app 文件夹

	* component.ts 组件配置文件

		`import { Component, OnInit } from '@angular/core'; 组件导入声明`
		
		`@Component({
			selector: 'app-root', 声明组件选择器
			templateUrl: './app.component.html', 组件的html链接
			styleUrls: ['./app.component.css'], 组件的CSS链接
		})`
		
		`export class AppComponent{
			title = 'myAngular'; 数据绑定接口
		}`
		
	* component.html 组件模板
	
	* component.css 模板CSS
	
	* component.spec.ts
	
### 数据绑定

> 单向绑定数据来源于ts文件的export

> 双向绑定数据来源[(ngModel)]，需要引入ngModel，类似于数据暂存

* {{}} 数据表达式

### 管道

> 用于格式化数据

* | uppercase 转换为大写字母 

### 循环

`*ngFor`循环，用let of声明变量

### 事件

* （click）点击事件

### 方法

onSelect(){}
onSelect = fn() {}
onSelect(e:type):type{}

### 

`*ngIf`判断，true显示，false隐藏

###

* [class.selected]="true"，true添加，false移除

### 父子传信

[hero]="selectedHero" 父

import Input from angular/core => @input() hero

### 装饰器

@component 组件类装饰器
@input 父传子属性装饰器
@Injectable 依赖注入类装饰器

### 服务

ng g service name 创建服务

服务类的方法可以在其他组件调用，服务就是把一些公用方法提取出来，在组件内import sevice，然后在constructor的参数里private heroService: HeroService

这样就可以通过this.heroService调用服务类的方法，最后还要在ngOnInit里面调用
