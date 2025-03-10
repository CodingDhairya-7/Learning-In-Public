/*
async function getData() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve(455);
        }, 3000);
    })
}
*/

async function getData(){
    // Simulate getting data from a server
    let x = await fetch('https://jsonplaceholder.typicode.com/todos/1');
    let data = await x.json();
    console.log("Data inside async function getData :- ", data);
    console.log("x inside async function getData :- ", x);
    return 455;
}

async function main() {
    console.log("Loading Modules");

    console.log("Do something else");

    console.log("Load data");

    let data = await getData();

    console.log("Data :- ", data);

    console.log("Process data");
    
    console.log("Task 2 !!");
}

main();

/*
data.then((e) => {
    console.log("Data :- ", data);
    console.log("Process data");
    console.log("Task 2 !!");
})
*/
