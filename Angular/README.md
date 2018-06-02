angular MVVM框架，模块化，组件化  
angular cli 命令行工具（ng）  
webpack构建工具，本地服务器，浏览器自动刷新（http-server + livereload）
typescript angular基于ts开发的，是底层开发语言  
组件 app-root根组件 由组件选择器，组件html\css文件组成
模块 js模块  
websocket 传输协议
后端渲染
ng-zorro-antd 蚂蚁金服开发的一个angular组件  
ng-alain 这是一个基于ng-zorro开发的angular组件

# 版本变化

* angularJS 特性：controller/$scope

* angular2 特性：环境设置

* angular4.0 特性：cli


# 快速上手

## 命令

* ng new *projectName* 创建项目  

* ng serve 启动项目  

* ng generate component *componetName* 生成组件




## 目录

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


## 组件
> 组件化是angular的核心，将HTML切分成多个组件，每个组件有独立的HTML/CSS/JS，用组件选择器构造index.html
> app.component是根组件，对应app-root，新生成的组件有独立的文件夹

* src/app 文件夹

	* component.ts
		* import
		* @component
		* export
	* component.html
	* component.css
	* component.spec.ts
	

