// const http = require('node:http'); // type --> CommonJS --> default value when "type" property is not specified in
//package.json

/*
import http from "http"

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    // res.setHeader('Content-Type', 'text/plain');
    // res.end('Hello World');
    res.setHeader('Content-Type', 'text/html');
    res.end('<h1>Hello World</h1>');
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
*/

/*
import {a, b, d} from "./mymodule.js"
console.log(a, b, d);
*/

/*
import obj from "./mymodule.js"
console.log(obj);
*/

/* 
import dha from "./mymodule.js";
console.log(dha);
*/

const a = require("./mymodule2.js");
console.log(a, __dirname, __filename);

const b = require("./mymodule2.js");
console.log(b);


