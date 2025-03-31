const express = require('express')
const app = express()
const port = 3000
const fs = require("fs");
// app.use(express.static("public"));

// Middleware 1
app.use((req, res, next) => {
    // console.log('m1');
    console.log(req.headers);
    req.newprop = "I am CodingDhairya-7";
    // fs.writeFileSync("logs.txt", `${Date.now()} is a ${req.method}`)
    fs.appendFileSync("logs.txt", `${Date.now()} is a ${req.method}\n`)
    console.log(`${Date.now()} is a ${req.method}`);
    // res.send("Hacked By Middleware 1");
    next()
})

// Middleware 2
app.use((req, res, next) => {
    console.log('m2');
    req.newprop = "I am Rohan Bhai !!";
    next()
})

app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.get('/contact', (req, res) => {
    res.send("Hello Contact !!")
})

app.get('/about', (req, res) => {
    res.send("Hello About !!" + req.newprop);
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})