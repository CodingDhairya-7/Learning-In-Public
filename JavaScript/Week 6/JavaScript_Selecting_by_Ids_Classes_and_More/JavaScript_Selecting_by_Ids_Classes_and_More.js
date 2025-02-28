console.log("Hello World !!");

// let boxes = document.getElementsByClassName("box");
// console.log(boxes);

// boxes[2].style.backgroundColor = "green";

// document.getElementById("redbox").style.backgroundColor = "red"

// document.querySelector(".box").style.backgroundColor = "blue";

// console.log(document.querySelectorAll(".box"));
document.querySelectorAll(".box").forEach(e => {
    // console.log(e);
    e.style.backgroundColor = "yellow";
})

/*
let e = document.getElementsByTagName("div");
console.log(e[4].matches("#redbox"));
console.log(e[3].matches("#redbox"));
console.log(e[4].closest("#redbox"));
console.log(e[3].closest("#redbox"));
console.log(e[2].closest(".box"));
console.log(e[2].closest(".container"))

console.log(document.querySelector(".container").contains(e[2])); 
console.log(document.querySelector(".container").contains(e[4])); 
console.log(document.querySelector(".container").contains(e[25]));
console.log(document.querySelector(".container").contains(document.querySelector("body")));
console.log(document.querySelector("body").contains(document.querySelector(".container")));
*/


