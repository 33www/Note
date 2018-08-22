开始全新的vue

vue cli 这是一个脚手架

npm install -g vue-cli 在npm环境下安装脚手架

vue init webpack projectname 创建项目

npn run dev 跑项目 默认端口8080


eslintrc.js 修改es6代码风格

static 放置静态资源

src里引用需要用当前目录路径 ./

组件化三步骤 新建组件 import导入组件 export注册组件————全局组件  vue.component()

路由步骤 use路由 new实例 挂载路由 参数routes 引入组件，关联path和组件  router-link to=path + router-view 页面实现

指令绑定表达式

v-if 操作标签 boolean ————如果值为true，则show；否则hide

v-bind 操作属性 : 表达式
:class="isRed? 'red': 'green'"
:class {key:val,key1:val1,key2:val2}[key]

v-on 操作事件 @

methods this指向data

父子通信

过滤器 $refs

vue router 一个path对应一个.vue，路径=>html name相当于配置路径的类 入口link 出口view  $route $router
路由传参————query查询字符串————params
编程式导航————$router.go()————$router.push()
重定向
404 path:*

vue resource this.$http.get('url')/post('url',{key: value},{emulateJSON: true}).then(res => {}).catch(err => {})

axios vue.prototype.$axios = Axios
axios.defaults.baseURL = ''
this.$axios.get('url',{})/post('url',{key: value}/'key= value').them(res => {}).catch(err => {})
拦截器 属性计算

src绑定数据需要用require()请求 :src="require('./img'+data+'.png')"
