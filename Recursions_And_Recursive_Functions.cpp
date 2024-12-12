#include<iostream>
using namespace std;

//Factorial
int fact(int n){
    if(n < 2)
        return 1;

    return n * fact(n-1);
}

// Step By Step calculation of fact(4)
// fact(4) = 4 * fact(3)
// fact(4) = 4 * 3 * fact(2)
// fact(4) = 4 * 3 * 2 * fact(1)
// fact(4) = 4 * 3 * 2 * 1
// fact(4) = 24 

//Fibonacci Series
int fib(int n){
    if(n < 2)
        return 1;

    return fib(n-2) + fib(n-1);
}

int main() {
    //Factorial
    /*
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)!

    int a;
    cout << "Enter a number :- \n";
    cin >> a;
    cout << "The factorial of " << a << " is :- " << fact(a) << endl;
    */

    int a;
    cout << "Enter a number :- \n";
    cin >> a;
    cout << "The term in fibonacci sequence at position " << a << " is :- " << fib(a) << endl;
    return 0;
}