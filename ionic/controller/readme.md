ViewController

页面生命周期



modalController

从下往上推出

可以返回值



navController

ios从右往左，Android从下往上，WP淡出

返回值，this.navCtrl.push().then(()=>{this.navCtrl.getActive().onDidDismiss(data=>{console.log(data)})})
