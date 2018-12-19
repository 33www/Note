取代grunt的打包工具，减少grunt复杂的配置，痛点是不支持模块化

### 自动编译sass文件

```
const gulp = require('gulp')
const sass = require('gulp-sass')

gulp.task('default', function() {
  gulp.watch('assets/css/style.scss', function() {
    gulp.src('assets/css/style.scss')
      .pipe((sass({
        outputStyle: 'expanded'
      }))
      .pipe(gulp.dest('assets/css'))
  })
})
```
