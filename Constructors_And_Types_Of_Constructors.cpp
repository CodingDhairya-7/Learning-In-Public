#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(); // constructor declaration
        Complex(int, int); // constructor declaration
        void printNumber(){
            cout << "Your complex number is :- " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(){ // ---> This is a default constructor as it takes no parameters.
    a = 10;
    b = 20; 
    cout << "Hello World!! This is a default constructor. \n";
}

Complex :: Complex(int x, int y){ // ---> This is a parameterized constructor as it takes one or more parameter.
    a = x;
    b = y;
    cout << "Hello World!! This is a parameterized constructor. \n"; 
}

class Point{
    int x, y;
    public:
        Point(int  a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout << "The point is (" << x << " , " << y << ")" << endl;
        }

        friend double DistanceBtwTwoPoints(Point, Point);
};

double DistanceBtwTwoPoints(Point o1, Point o2){
    double distance = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    return distance;
}

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor.
        Number(Number &obj){ // ---> This is a copy constructor as it takes same class reference as its parameter.
            cout << "Copy Constructor called !!\n";
            a = obj.a;
        }
        Number(int num){
            a = num;
        }
        void display(){
            cout << "The number for this object is :- " << a << endl;
        }
};
int main() {
    /*
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    // Implicit call
    Complex a1(4, 6);
    a1.printNumber();

    // Explicit call
    Complex a2 = Complex(5, 7);
    a2.printNumber();
    */

    /*
    Point p1(1, 0);
    p1.displayPoint();
    Point p2(70, 0);
    p2.displayPoint();

    double res = DistanceBtwTwoPoints(p1, p2);
    cout << "Distance between p1 and p2 point is :- " << res << endl;
    */
   
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy constructor invoked
    cout << "z1 display :- ";
    z1.display();
    z2 = z; // Copy constructor not called 
    cout << "z2 display :- ";
    z2.display();
    Number z3 = z; // Copy constructor invoked
    cout << "z3 display :- ";
    z3.display();
    return 0;
}

//