#include<iostream>
#include<string.h>
using namespace std;

// Demo 1
/*
class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout << "1 Displaying Base class varaiable var_base " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "2 Displaying Base class varaiable var_base " << var_base << endl;
            cout << "2 Displaying Derived class variable var_derived " << var_derived << endl;
        }
};
*/

// Demo 2
class Animal{
    protected:
        string name;
        float rating;
    public:
        Animal(string s, float r){
            name = s;
            rating = r;
        }
        virtual void display(){
            cout << "Bogus Code !!\n";
        }   
};

class Dog : public Animal{
    int count;
    public:
        Dog(string s, float r, int c) : Animal(s, r){
            count = c;
        }
        void display(){
            cout << "Name of Dog is: - " << name << endl;
            cout << "Ratings: " << rating << " out of 5 stars" << endl;
            cout << "No. Of Dogs is/are :- " << count << endl;
        }
};

class Cat : public Animal{
    int count;
    public:
        Cat(string s, float r, int c) : Animal(s, r){
            count = c;
        }
        // void display(){
        //     cout << "Name of Cat is: - " << name << endl;
        //     cout << "Ratings: " << rating << " out of 5 stars" << endl;
        //     cout << "No. Of Cats is/are :- " << count << endl;
        // }
};

int main() {
    // Demo 1
    /*
    BaseClass* baseclass_pointer;
    DerivedClass obj_derived;
    baseclass_pointer = &obj_derived;   

    baseclass_pointer->var_base = 45;
    baseclass_pointer->display(); 
    */

   // Demo 2
   string name;
   float rating;
   int dogcount, catcount;

    name = "Bruno";
    rating = 4.5;
    dogcount = 5;
    Dog d(name, rating, dogcount);
    d.display();
    cout << "---------------------------------\n";
    name = "Lisa";
    rating = 3.7;
    catcount = 2;
    Cat c(name, rating, catcount);
    c.display();
    cout << "---------------------------------\n";
    Animal* a[2];
    a[0] = &d;
    a[1] = &c;

    a[0]->display();
    a[1]->display();
    return 0;
}