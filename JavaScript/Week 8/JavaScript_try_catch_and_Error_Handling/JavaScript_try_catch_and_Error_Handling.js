
let a = prompt("Enter First Number");
let b = prompt("Enter Second Number");
if (isNaN(a) || isNaN(b)) {
    throw SyntaxError("Please enter numbers only");
}
let sum = parseInt(a) + parseInt(b);

function main() {
    let x = 1;
    try {
        console.log("Sum Is :- ", sum * x);
        return true;
    } catch (error) {
        console.log("Error aa gya bhaisaab, isko pehle resolve kro fir koi dusra kaam krna, problem ho jaayegi bht bdi !!");
        return false;
    }
    // finally {
    //     console.log('files are being closed and db connection is being closed !!');
    // }
    console.log('files are being closed and db connection is being closed !!');
}

let c = main();
