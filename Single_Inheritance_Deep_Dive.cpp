#include<iostream>
using namespace std;

class Base{
    int data1; // private by default and it's not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

//Public Visibility Mode
/*
class Derived : public Base{ // Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout << "value of data 1 is :- " << getData1() << endl;
    cout << "value of data 2 is :- " << data2 << endl;
    cout << "value of data 3 is :- " << data3 << endl;
}
*/

// Private Visibility Mode
class Derived : private Base{ // Class is being derived privately
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    setData();
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout << "value of data 1 is :- " << getData1() << endl;
    cout << "value of data 2 is :- " << data2 << endl;
    cout << "value of data 3 is :- " << data3 << endl;
}
int main() {
    //Public Visibility Mode
    /*
    Derived der;
    der.setData();
    der.process();
    der.display();
    */

    //Private Visibility Mode
    Derived der;
    //der.setData(); //will throw an error
    der.process();
    der.display();
    return 0;
}