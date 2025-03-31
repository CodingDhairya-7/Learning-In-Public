const express = require('express')
const blog = require('./routes/blog')
const app = express()
const port = 3000

app.use(express.static("public"));
app.use('/blog', blog)


/*
app.get('/', (req, res) => {
    console.log('Hey!! This is a GET request.');
    res.send('Hello World!')
})

app.post('/', (req, res) => {
    console.log('Hey!! This is a POST request.');
    res.send('Hello World POST request.');
})

app.put('/', (req, res) => {
    console.log('Hey!! This is a PUT request.');
    res.send('Hello World PUT request.');
})

app.delete('/', (req, res) => {
    console.log('Hey!! This is a DELETE request.');
    res.send('Hello World DELETE request.');
})
*/

//Works in the same way as above lines also known as Chaining of requests
app.get('/', (req, res) => {
    console.log('Hey!! This is a GET request.');
    res.send('Hello World!')
}).post('/', (req, res) => {
    console.log('Hey!! This is a POST request.');
    res.send('Hello World POST request.');
}).put('/', (req, res) => {
    console.log('Hey!! This is a PUT request.');
    res.send('Hello World PUT request.');
}).delete('/', (req, res) => {
    console.log('Hey!! This is a DELETE request.');
    res.send('Hello World DELETE request.');
})

app.get('/index', (req, res) => {
    console.log('Hey!! This is a GET request by index.html');
    // res.send("Hello World GET request by index.html");
    res.sendFile('templates/index.html', {root: __dirname});
})

app.get('/api', (req, res) => {
    res.json({a: 1, b: 2, c: 3, d: 4, name: ["Dhruv", "Ayush"]});
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})