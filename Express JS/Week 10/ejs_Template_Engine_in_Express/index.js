const express = require('express')
const app = express()
const port = 3000

app.set('view engine', 'ejs');

app.get('/', (req, res) => {
    // res.send('Hello World!')
    let siteName = "Nike"
    let searchText = "Search Now"
    let arr = ["Hey", 54, 65]
    // res.sendFile('templates/index.html', {root: __dirname})
    res.render('index', {site_Name: siteName, search_Text: searchText, arr})
})

app.get('/blog/:slug', (req, res) => {
    let blogName = "Is Nike Important In Our Lives";
    let blogContent = "Nike is a very good brand but it's not that important in our lives, there're many other competitiors personally recommend to try others first then choose Nike as you can know the difference between Nike and other brands."
    res.render('blogpost', {blog_Name: blogName, blog_Content: blogContent})
})
app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})