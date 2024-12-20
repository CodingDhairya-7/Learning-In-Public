#include<iostream>
using namespace std;

//Example 1
//Forward declaration
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
        friend void add(X, Y);
};

void add(X o1, Y o2){
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num << endl;
}

//Example 2
//Forward declaration
class c2;

class c1{
    int val1;
    public:
        void indata(int num){
            val1 = num;
        }

        void display(){
            cout << val1 << endl;
        }

        friend void exchange(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void indata(int num){
            val2 = num;
        }

        void display(){
            cout << val2 << endl;
        }

        friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
};

int main() {
    //Example 1
    /*
    X a1;
    a1.setValue(3);
    
    Y b1;
    b1.setValue(5);

    add(a1, b1);
    */

    //Example 2
    c1 o1;
    c2 o2;

    o1.indata(34);
    o2.indata(67);

    cout << "The value of c1.val1 before exchanging :- ";
    o1.display();
    cout << "The value of c2.val2 before exchanging :- ";
    o2.display();
    exchange(o1, o2);
    cout << "The value of c1.val1 after exchanging :- ";
    o1.display();
    cout << "The value of c2.val2 after exchanging :- ";
    o2.display();
    return 0;
}