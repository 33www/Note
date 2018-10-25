##  ion-content

占满整个页面，独立的滚动条。会自动计算tabs,header,footer的高度

通常在不需要导航的页面，只需要放置一个ion-content

默认样式 => {

  ion-content.content.content-ios{
  
  color:#000, background: #fff
  
  fixed-content{没什么用}
  
  scroll-content{没什么用}
  
  }

}

## ion-footer

## ion-toolbar


## ion-slides

```
<ion-slides>
  <ion-slide></ion-slide>
  <ion-slide></ion-slide>
  <ion-slide></ion-slide>
</ion-slides>
```

ion-slides容器，ion-slide内容页

```
@ViewChild(Slides) slides: Slides;
```

实例方法，不是注入依赖，而且导入ViewChild

`this.slides.slideTo() ` 跳转到第几个slide

`autoplay	` 属性，延迟时间

`direction` 属性，滑动方向

`effect` 属性，动画特效

`pager` 属性，显示页码
