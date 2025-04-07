// CRUD Operations
use("CrudDB");
// console.log(db);

// CREATE
/* 
db.createCollection("courses");

db.courses.insertOne({
    name: "Sigma Web Dev Course",
    price: 11,
    assignments: 12,
    projects: 45
})

db.courses.insertMany([
    {
      "name": "Sigma Web Dev Course",
      "price": 11,
      "assignments": 12,
      "projects": 45
    },
    {
      "name": "Alpha JavaScript Bootcamp",
      "price": 15,
      "assignments": 10,
      "projects": 30
    },
    {
      "name": "React Mastery Course",
      "price": 20,
      "assignments": 8,
      "projects": 25
    },
    {
      "name": "Node.js Deep Dive",
      "price": 18,
      "assignments": 6,
      "projects": 20
    },
    {
      "name": "HTML & CSS Essentials",
      "price": 9,
      "assignments": 14,
      "projects": 18
    },
    {
      "name": "Full Stack Developer Track",
      "price": 30,
      "assignments": 16,
      "projects": 50
    },
    {
      "name": "Frontend Crash Course",
      "price": 12,
      "assignments": 9,
      "projects": 22
    },
    {
      "name": "Backend with Express",
      "price": 17,
      "assignments": 11,
      "projects": 28
    },
    {
      "name": "MongoDB for Beginners",
      "price": 14,
      "assignments": 7,
      "projects": 19
    },
    {
      "name": "Advanced JavaScript Concepts",
      "price": 22,
      "assignments": 13,
      "projects": 35
    }
  ]
)
*/

// READ
/* 
let a = db.courses.find({price: 11});
console.log(a.count());

let b = db.courses.findOne({price: 11});
console.log(b);
*/

// UPDATE
db.courses.updateOne({price: 11}, {$set:{price: 100}});
db.courses.updateMany({price: 11}, {$set:{price: 1000}});

// DELETE
db.courses.deleteOne({price: 100});
db.courses.deleteMany({price: 1000});
