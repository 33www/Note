`npm install --save @ionic/storage`

如果使用SQLite 需要 `ionic cordova plugin add cordova-sqlite-storage` 不需要

在app.module挂载
`import { IonicStorageModule } from '@ionic/storage'`
`IonicStorageModule.forRoot()`

在page里面使用
`import { Storage } from '@ionic/storage';`
`private storage: Storage`
`storage.set('name', 'Max');`
```
storage.get('age').then((val) => {
    console.log('Your age is', val);
  });
```  
