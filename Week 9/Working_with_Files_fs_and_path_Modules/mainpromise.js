import fs from "fs/promises"

let a = await fs.readFile("index.txt");
console.log(a.toString());

// let b = await fs.writeFile("index.txt", "\n\n\n\n This is amazing promise");
let b = await fs.appendFile("index.txt", "\n\n\n\n This is amazing promise");
console.log(a.toString(), b);

