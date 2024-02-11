function fun(){
    return new Promise(function gun(resolve,reject){
       console.log('done');
       resolve();
    })
}
fun();
