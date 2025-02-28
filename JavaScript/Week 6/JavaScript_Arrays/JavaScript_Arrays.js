let arr = [1, 2, 5, 7, 9];
// Index = 0, 1, 2, 3, 4
console.log(arr);
console.log(arr.length);
console.log(arr, typeof arr);
console.log("------------------------------");
console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);
console.log(arr[3]);
console.log(arr[4]);
console.log("------------------------------");
arr[0] = 566;
console.log(arr);
console.log(arr[0]);
console.log(arr[1]);
console.log(arr[2]);
console.log(arr[3]);
console.log(arr[4]);
console.log("------------------------------");

let str = "Dhairya";
str[0] = "M"; // It won't change as strings are immutable in javascript.
console.log(str, typeof str);
console.log(str);
console.log(str[0]);
console.log(str[1]);
console.log(str[2]);
console.log(str[3]);
console.log(str[4]);
console.log(str[5]);
console.log(str[6]);
console.log("------------------------------");

console.log(arr.toString());
console.log(arr.join(" and "));
console.log("------------------------------");

let a = [1, 2, 3, 4, 5, 6];
console.log("Element Popped from the array :- " + a.pop());
console.log("After Element popped from the array :- " + a);
console.log("------------------------------");

a.push(100);
console.log("Element Pushed in the array :- " + 100);
console.log("After Element Pushed in the array :- " + a);
a.push("Dhairya")
console.log("Element Pushed in the array :- Dhairya");
console.log("After Element Pushed in the array :- " + a);
console.log("------------------------------");

let b = [1, 2, 3, 4, 5, 6, 7];
console.log("Element popped from the array at front :- " + b.shift()); //Shift is pop's brother 
console.log("After Element popped from the array :- " + b);
b.unshift(1); //Unshift is push's brother
console.log("Element pushed in the array at front :- " + 1);
console.log("After element pushed in the array :- " + b);
console.log("------------------------------");

let numbers = [1, 2, 3, 4, 5];
// console.log(numbers.splice(1, 2));
// console.log(numbers);
console.log(numbers.splice(1, 3, 222, 333));
console.log(numbers);