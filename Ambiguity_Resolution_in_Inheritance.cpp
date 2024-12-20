#include<iostream>
using namespace std;

// Using Scope Resolution Operator (::)
/*
// Ambiguity 1
class Base1{
    public:
        void greet(){
            cout << "How are you ??" << endl;
        }
};

class Base2{
    public:
        void greet(){
            cout << "Kaise ho ??" << endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            //cout << "Kya haal chaal ??" << endl;
            Base1 :: greet();
        }
};

// Ambiguity 2
class B{
    public:
        void say(){
            cout << "Hello World From Class B !!" << endl;
        }
};

class D : public B{
    int a;
    public:
        // D's new say() method will automatically override the b's class say() method
        void say(){
            cout << "Hello World From Class D !!" << endl;
        }
};
*/

// Using Virtual Base Class
/*
Student --> Test --> Test class is inherited by Student class
Student --> Sports --> Sports class is inherited by Student class
Test & Sports --> Result --> Result class is inherited by Test & Sports class
*/

class Student{
    protected:
        int roll_no;
        void print_rollno(){
            cout << "Roll No. is :- " << roll_no << endl;
        }
    public:
        void set_rollno(int a){
            roll_no = a;
        }
};

class Test : virtual public Student{
    protected:
    float maths, physics;
        void get_marks(){
            cout << "Your maths marks are here :- " << maths << endl;
            cout << "Your physics marks are here :- " << physics << endl;
            cout << "Calling roll no var from Test class :- " << roll_no << endl;
        }
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
        void get_score(){
            cout << "Your Sports score are here :- " << score << endl;
            cout << "Calling roll no var from Sports class :- " << roll_no << endl;
        }
    public:
        void set_score(float sc){
            score = sc;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_rollno();
            get_marks();
            get_score();
            cout << "Your total score is :- " << total << endl;
        }
};   
int main() {
    // Using Scope Resolution Operator (::)
    /*
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();    

    // Ambiguity 2
    B b;
    D d;
    b.say();
    d.say();
    */

    // Using Virtual Base Class
    Test t;
    Sports s;

    Result r1;
    r1.set_rollno(45);
    r1.set_marks(76, 81);
    r1.set_score(75);
    r1.display();
    return 0;
}