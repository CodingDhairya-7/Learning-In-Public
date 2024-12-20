#include <iostream>
using namespace std;
// Array of Objects
class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        cout << "Enter the id of the Employee :- ";
        cin >> id;
    }
    void getId()
    {
        cout << "The id of the Employee is :- " << id << endl;
    }
};

// Passing Objects as Function Arguments
class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(){
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    } 
};

int
main()
{
    // Array of Objects
    /*
    Employee harry, dhruv, ratan, abhi;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for(int i = 0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }
    */

    //Passing Objects as Function Arguments
    Complex c1, c2, c3;
    c1.setData(4, 5);
    c1.printNumber();
    c2.setData(6, 7);
    c2.printNumber();
    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}