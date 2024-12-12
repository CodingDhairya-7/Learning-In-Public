#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

// Calculate the volume of cylinder
int volume(int r, int h){
    return (3.14*r*r*h);
}

// Calculate the volume of cube
int volume(int a){
    return (a*a*a);
}

// Calculate the volume of rectangle
int volume(int l, int b, int h){
    return (l*b*h);
}

int main() {
    // Sum Function Overloading
    /*
    cout << "The Add() containing 2 parameters :- " << add(5, 7) << endl;
    cout << "The Add() containing 3 parameters :- " << add(5, 7, 8) << endl;
    */

    // Volume Function Overloading
    cout << "Volume of cylinder with radius = 3 and height = 4 is :- " << volume(3, 4) << endl;
    cout << "Volume of cube with side = 4 is :- " << volume(4) << endl;
    cout << "Volume of rectangle with length = 2, breadth = 5 and height = 7 is :- " << volume(2, 5, 7) << endl;
    
    return 0;
}