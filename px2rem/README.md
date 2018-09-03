npm install px2rem-loader

build => utils.js => cssLoaders =>

const px2remLoader = {
  loader: 'px2rem-loader',
  options: {
    remUnit: 75 //dpr*2，如果设计图750px，则1rem=75px
}

build => utils.js => generateLoaders => [cssLoader, px2remLoader] : [cssLoader, px2remLoader]

