#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout << "Displaying Base class variable var_base " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "Displaying Base class variable var_base " << var_base << endl;
            cout << "Displaying Derived class variable var_derived " << var_derived << endl;
        }
};

int main() {
    BaseClass* baseclass_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseclass_pointer = &obj_derived; // Pointing base class pointer to derived class

    baseclass_pointer->var_base = 34;
    // baseclass_pointer->var_derived = 134; // Will throw an error
    baseclass_pointer->display();

    baseclass_pointer->var_base = 134;
    baseclass_pointer->display();

    cout << "------------------------------------------\n";
    
    DerivedClass* derivedclass_pointer;
    derivedclass_pointer = &obj_derived;

    derivedclass_pointer->var_derived = 98;
    derivedclass_pointer->display();

    cout << "------------------------------------------\n";

    derivedclass_pointer->var_base = 9448;
    derivedclass_pointer->var_derived = 85;
    derivedclass_pointer->display();
    return 0;
}