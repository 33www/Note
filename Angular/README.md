## Angular

angular 前端模块化、组件的开发平台及MVVM框架  
angular cli 命令行工具（ng）  
webpack构建工具，本地服务器，浏览器自动刷新（http-server + livereload)  
typescript angular基于ts开发的，是底层开发语言   
websocket 传输协议



## 版本变化

* angularJS 特性：controller/$scope

* angular2 特性：环境设置

* angular4.0 特性：cli


## 快速上手

### 命令

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

> angular既是一个开发平台，也是一个JS框架，是一个独立的模块，基于node_module，能与其他模块合作，模块与模块间耦合性低


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
	
	* module.ts 模块配置文件，配置需要导入的组件
	
		`import { BrowserModule } from '@angular/platform-brower'; 导入浏览器组件`
		
		`import { NgModule } from '@angular/core'; 导入核心组件`
		
		`import { AppComponent } from './app.component'；导入根组件`
		
		`@NgModule({
  			declarations: [
    				AppComponent 声明组件
  			],
  			imports: [
    				BrowserModule 导入组件
  			],
  			providers: [],
  			bootstrap: [AppComponent]
		})`

* 内置组件

	* FormsModule 表单组件，数据双向绑定
	
### 数据绑定

> 单向绑定数据来源于ts文件的export

> 双向绑定数据来源[(ngModel)]，需要引入ngModel，类似于数据暂存

* {{}} 数据表达式

### 管道

> 用于格式化数据

* | uppercase 转换为大写字母 
