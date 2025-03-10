console.log("Dhairya is nothing");
console.log("World is everything");

setTimeout(() => {
    console.log("I am inside settimeout");
}, 5000);

setTimeout(() => {
    console.log("I am inside settimeout 2");
}, 2000);

console.log("THE END");

const fn = () => {
    console.log("Nothing");
}

const callback = (arg, fn) => {
    console.log(arg);
    fn();
}

const loadScript = (src, callback) => {
    let sc = document.createElement("script");
    sc.src = src;
    sc.onload = callback("Dhairya", fn);
    document.head.append(sc);
}

loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js", callback);