### var app = new Vue(opt) 创建vue实例

```
opt{
  el: '#app'
  data: {}
  computed: () => {}
  watch: () => {}
  create: () => {}
}
```

el 挂载dom

data 数据

computed 计算数据

watch 监听数据

create 生命周期


### Vue.component(selector, {opt})

selector 组件选择器

```
opt{
  template 模板
}
```


### 指令

{{}} 插值，注意：只能绑定表达式，不能绑定语句

v-html 渲染数据带标签

v-once 数据只渲染一次

v-bind/: 属性绑定

v-on/@ 事件绑定

v-if 条件渲染
