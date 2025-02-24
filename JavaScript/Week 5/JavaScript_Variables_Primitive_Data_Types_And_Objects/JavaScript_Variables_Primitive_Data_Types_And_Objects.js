console.log("Welcome Back .....");

let a = 5;
var b = 6;
let c = "Harry"
console.log(a + b + 8 + " " + c);
console.log(typeof a, typeof b, typeof c);

const a1 = 6;
// a1 = a1 + 1; //will give you error

{
    let a = 8;
    console.log(a);
}
console.log(a);

{
    var b = 10;
    console.log(b);
}
console.log(b);

let x = "Harry Bhai";
let y = 22;
let z = 3.55;
const p = true;
let q = undefined;
let r = null;
console.log(x, y, z, p, q, r);
console.log(typeof x, typeof y, typeof z, typeof p, typeof q, typeof r);


let o = {
    "Name" : "Rachit",
    "Job Code" : 5600,
    "Is_Handsome" : false
}
console.log(o);
o.salary = "100 crores";
console.log(o);
o.salary = "500 crores";
console.log(o);
