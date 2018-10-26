````
flex => 先切行

row => 再切列  //  item => 

图片固宽 col-auto（元素项可以省略col）  // item-start,item-end（自定义位置）

文字不固宽 flex=1(如果是文字，需要加text-nowrap,overflow,max-width)  // ion-label（默认给非end和start的元素包裹label）


col => 再切行

````

flex实现justify-self

```
居中的 flex = 1, width = 100%

中间的居中，需要左右的width相等
```

确定了，用ion-row + ion-label

```

<ion-row>
  <ion-label></ion-label>
<ion-row>

```
