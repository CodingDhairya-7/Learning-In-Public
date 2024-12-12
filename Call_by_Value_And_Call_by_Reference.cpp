#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

// Call by value :- this function will not swap values of a and b.
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers :- this function will swap values of a and b.
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using C++ reference variables :- this function will swap values of a and b.
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b; 
    b = temp;
}
int main() {
    int a = 4, b = 5;
    cout << "The sum of " << a << " and " << b << " is :- " << sum(a,b) << endl;
    cout << "Before Swapping\nThe value of a is :- " << a << "\nThe value of b is :- " << b << endl;
    //swap(a, b); // This will not swap the values of a and b.
    //swapPointer(&a, &b); // This will swap values of a and b using pointers.
    swapReferenceVar(a, b); // This will swap values of a and b using reference variables.
    cout << "After Swapping\nThe value of a is :- " << a << "\nThe value of b is :- " << b << endl;
    return 0;
}