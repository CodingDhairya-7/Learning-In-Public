#include<iostream>
using namespace std;

// Function Prototype
// int add(int a, int b); --> Acceptable
// int add(int a, b); --> Not Acceptable --> will throw an error
int add(int, int); //Acceptable
void g();

int main() {
    int num1, num2;
    cout << "Enter first number :- \n";
    cin >> num1;
    cout << "Enter second number :- \n";
    cin >> num2;
    // num1 and num2 are actual parameters.
    int sum = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is :- " << sum << endl;    
    g();
    return 0;
}

int add(int a, int b){
    // a and b are formal parameters.
    int c = a + b;
    return c;
}

void g(){
    cout << "Hello, Good Morning !!" << endl;
}