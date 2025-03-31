const express = require('express')
const app = express()
const port = 3000

app.use(express.static('public'))

app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.get('/about', (req, res) => {
    res.send('Hello about!')
})

app.get('/contact', (req, res) => {
    res.send('Hello contact!')
})

app.get('/blog', (req, res) => {
    res.send('Hello blog!')
})
// For URL = http://127.0.0.1:3000/blog/dhairya/rohan?mode=dark&region=in
app.get('/blog/:slug/:second', (req, res) => {
    console.log(req.params); // params :-  { slug: 'dhairya', second: 'rohan' }
    console.log(req.query); // query :-  { mode: 'dark', region: 'in' }
    res.send(`Hello ${req.params.slug} and ${req.params.second}`)
})

/*
app.get('/blog/intro-to-js', (req, res) => {
    res.send('Hello JavaScript!')
})

app.get('/blog/intro-to-python', (req, res) => {
    res.send('Hello Python!')
})
*/

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})