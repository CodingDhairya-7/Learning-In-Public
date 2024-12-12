#include<iostream>
using namespace std;

// Inline function
inline int product(int a, int b){
    return a * b;
}

// Default Argument
float moneyReceived(int money, float factor = 1.04){
    return money * factor;
}

//Constant Argument
void display(const int x) {
    // x = x + 10; // Error: x is constant
    cout << x;
}


int main() {
    // Inline function
    /*
    int a, b;
    cout << "Enter the value of a :- \n";
    cin >> a;
    cout << "Enter the value of b :- \n";
    cin >> b;
    cout << "Product of " << a << " and " << b << " is :- " << product(a, b) << endl;
    */

    //Default Argument
    /*
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << 
    " Rs after one year\n";
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << 
    " Rs after one year\n";
    */

    //Constant Argument
    display(5);
    return 0;
}