#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};

class Derived : protected Base{

};

int main() {
    Base b;
    Derived d;
    b.a; // Will not work since a is protected in both base and derived class.
    d.a;    
    return 0;
}