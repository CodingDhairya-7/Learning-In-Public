// Select the database to use.
use('SigmaWebDevelopment_CodeWithHarry');

// Insert a few documents into the courses collection.
db.getCollection('courses').insertMany([
  {
    "name": "Java",
    "price": 20000,
    "instructor": "Harry"
  },
  {
    "name": "Python",
    "price": 18000,
    "instructor": "Alice"
  },
  {
    "name": "JavaScript",
    "price": 22000,
    "instructor": "Bob"
  },
  {
    "name": "C++",
    "price": 19000,
    "instructor": "Charlie"
  },
  {
    "name": "Ruby",
    "price": 21000,
    "instructor": "David"
  },
  {
    "name": "Swift",
    "price": 23000,
    "instructor": "Eve"
  },
  {
    "name": "Kotlin",
    "price": 17500,
    "instructor": "Frank"
  },
  {
    "name": "PHP",
    "price": 16000,
    "instructor": "Grace"
  },
  {
    "name": "Go",
    "price": 25000,
    "instructor": "Hank"
  },
  {
    "name": "TypeScript",
    "price": 24000,
    "instructor": "Ivy"
  }
]);


// Print a message to the output window.
console.log(`Done Inserting Data.`);