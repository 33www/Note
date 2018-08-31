vue 脚手架

npm install -g @vue/cli 这是3.0版本的安装（目录结构发生变化）

npm install -g @vue/cli-init 使用2.X的init创建项目方式

vue init webpack projectname 创建项目

npm run dev 跑项目 默认端口8080

npm run build 打包项目

# 目录结构

eslintrc.js 修改es6代码风格

dist 打包后的文件

static 放置静态资源，不会被webpack打包

src里引用需要用当前目录路径 ./

@/路径指向src

src/assets 放静态资源

src/components 放组件

src/views 放页面

src/router 放路由

app.vue 根组件

main.js 入口文件
