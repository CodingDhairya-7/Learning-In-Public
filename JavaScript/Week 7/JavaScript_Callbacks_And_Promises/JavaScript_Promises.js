console.log('Discussing Promises in JavaScript tonight !!');

let prom1 = new Promise((resolve, reject) => {
    let a = Math.random();
    console.log('Random Number :- ' + a);
    if(a<0.5){
        reject("random number was not supporting you ....");
    }
    else{
        setTimeout(() => {
        console.log('Yess I am done');
        resolve("Dhairya");
        }, 6000);
    }
})

let prom2 = new Promise((resolve, reject) => {
    let a = Math.random();
    console.log('Random Number :- ' + a);
    if(a<0.5){
        reject("random number was not supporting you .... 2");
    }
    else{
        setTimeout(() => {
        console.log('Yess I am done 2');
        resolve("Dhairya 2");
        }, 3000);
    }
})

/*
prom1.then((a)=>{
    console.log(a);
}).catch((err)=>{
    console.log(err);
})
*/

/*
let p3 = Promise.all([prom1, prom2]);
p3.then((a)=>{
    console.log(a);
}).catch((err)=>{
    console.log(err);
})
*/

/*
let p4 = Promise.allSettled([prom1, prom2]);
p4.then((a) => {
    console.log(a);
}).catch((err) => {
    console.log(err);
})
*/

let p5 = Promise.race([prom1, prom2]);
p5.then((a) => {
    console.log(a);
}).catch((err) => {
    console.log(err);
})
