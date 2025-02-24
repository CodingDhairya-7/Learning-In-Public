console.log("Hello, I am a conditional tutorial.");

let age = 17;
let grace = 2;

age += grace
console.log(age);
console.log(age+grace); 
console.log(age-grace);
console.log(age*grace);
console.log(age/grace);
console.log(age**grace);
console.log(age%grace);

//If-else condition
if((age + grace)>18){
    console.log("You can drive.");
}
else{
    console.log("You cannot drive.");
}

//If-else if ladder
if(age>=18){
    console.log("You can drive.");
}
else if(age == 0){
    console.log("You can't even touch the car.");
}
else{
    console.log("You can't drive.")
}

// ---> Single Line Comment
/*
This is
a
multi line
comment
*/

//Ternary Operator
let a = 6;
let b = 8;
let c = a > b ? (a - b) : (b - a);
console.log(c);