#include<iostream>
using namespace std;

/*
Case 1:
class B : public A{
    //Order of execution of constructor -> first A() then B()
};

Case 2:
class A : public B, public C{
    //Order of execution of constructor -> first B() then C() then A()
}

Case 3:
class A : public B, virtual public C{
    //Order of execution of constructor -> first C() then B() then A()
}
*/

// DERIVED CLASS CONSTRUCTORS IN MULTIPLE INHERITANCE
/*
class Base1{
    int data1;
    public:
        Base1(int num){
            data1 = num;
            cout << "Base1 class constructor called !!\n";
        }
        void printDataBase1(){
            cout << "Number is :- " << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int num){
            data2 = num;
            cout << "Base2 class constructor called !!\n";
        }
        void printDataBase2(){
            cout << "Number is :- " << data2 << endl;
        }
};

class Derived : public Base2, public Base1{
    int der1, der2;
    public:
        Derived(int b1, int b2, int d1, int d2): Base1(b1), Base2(b2){
            der1 = d1;
            der2 = d2;
            cout << "Derived class constructor called\n";
        }
        void printDataDerived(){
            cout << "Data is :- " << der1 << endl;
            cout << "Data is :- " << der2 << endl;
        }
};
*/

// DERIVED CLASS CONSTRUCTORS IN MULTILEVEL INHERITANCE
/*
class Base1{
    int data1;
    public:
    Base1(int num1){
        data1 = num1;
        cout << "Base1 class constructor is called !!\n";
    }
    void printDataBase1(){
        cout << "Number is :- " << data1 << endl;
    }
};

class Base2 : public Base1{
    int data2;
    public:
    Base2(int b1, int num2) : Base1(b1){
        data2 = num2;
        cout << "Base2 class constructor is called !!\n";
    }
    void printDataBase2(){
        cout << "Number is :- " << data2 << endl;
    }
};

class Derived : public Base2{
    int der1, der2;
    public:
    Derived(int b1, int b2, int d1, int d2) : Base2(b1, b2){
        der1 = d1;
        der2 = d2;
        cout << "Derived class constructor called !!\n";
    }
    void printDataDerived(){
        cout << "Data Is :- " << der1 << endl;
        cout << "Data Is :- " << der2 << endl;
    }
};
*/

// DERIVED CLASS CONSTRUCTORS IN VIRTUAL BASE CLASS
class Base1{
    int data1;
    public:
    Base1(int num1){
        data1 = num1;
        cout << "Base1 class constructor is called !!\n";
    }
    void printDataBase1(){
        cout << "Number is :- " << data1 << endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int num2){
        data2 = num2;
        cout << "Base2 class constructor is called !!\n";
    }
    void printDataBase2(){
        cout << "Number is :- " << data2 << endl;
    }
};

class Derived : public Base2, virtual public Base1{
    int der1, der2;
    public:
    Derived(int b1, int b2, int d1, int d2) : Base2(b2), Base1(b1){
        der1 = d1;
        der2 = d2;
        cout << "Derived class constructor called !!\n";
    }
    void printDataDerived(){
        cout << "Data Is :- " << der1 << endl;
        cout << "Data Is :- " << der2 << endl;
    }
};

int main() {
    // DERIVED CLASS CONSTRUCTORS IN MULTIPLE INHERITANCE 
    /*
    Derived d(1, 2, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
    */

    // DERIVED CLASS CONSTRUCTORS IN MULTILEVEL INHERITANCE
    /* 
    Derived d(1, 2, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
    */

    // DERIVED CLASS CONSTRUCTORS IN VIRTUAL BASE CLASS
    Derived d(1, 2, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();

    return 0;
}