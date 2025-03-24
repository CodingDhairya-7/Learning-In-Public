const fs = require("fs");
// console.log(fs);

console.log('Starting');
// fs.writeFileSync("main.txt", "This is a main file");

fs.writeFile("index.txt", "This is a index file", () => {
    console.log('Done !!');
    fs.readFile("index.txt", (error, data) => {
        console.log(error, data.toString());
    })
})
// console.log('Ending');

fs.appendFile("index.txt", "index file is here", (error, data) => {
    console.log(data);
})

