console.log(a1);
(async function main(){
    // IIFE
    let a = await sleep();
    console.log(a);
    let b = await sleep();
    console.log(b);

    // Destructuring 
    // let [x, y, ...rest] = [1, 5, 7, 8, 9, 10];
    // console.log("x :- ", x);
    // console.log("y :- ", y);
    // console.log('rest :- ', rest);
    // let obj = {
    //     a: 1,
    //     b: 2,
    //     c: 3
    // }
    // let {a, b} = obj;
    // console.log(a);
    // console.log(b);


    //Spread operator
    // let arr = [1, 4, 6];
    // let obj = {...arr}

    // for (const element of obj) {
    //     console.log(element);
    // }


    //Hoisting
    // var a1 = 6;
    let a1 = 6;
})()

var a1 = 6;

// async function sleep(){
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve(45);
//         }, 1000);
//     })
// }

const sleep = async() =>{
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(45);
        }, 1000);
    })
}

const sum = async(a, b, c) =>{
    return a + b + c;
}