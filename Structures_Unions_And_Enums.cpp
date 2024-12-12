#include<iostream>
using namespace std;

//Structure
typedef struct Employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

//Union
typedef union money
{
    int rice;
    char car;
    float pound;
} up;

int main() {
    //Structures
    /*
    ep e1;
    e1.eid = 1;
    e1.favchar = 'c';
    e1.salary = 120000;
    cout << "e1 id :- " << e1.eid << endl;
    cout << "e1 favchar :- " << e1.favchar << endl;
    cout << "e1 salary :- " << e1.salary << endl;
    struct Employee e2;
    e2.eid = 2;
    e2.favchar = 'd';
    e2.salary = 4500;
    cout << "e2 id :- " << e2.eid << endl;
    cout << "e2 favchar :- " << e2.favchar << endl;
    cout << "e2 salary :- " << e2.salary << endl;
    */

    //Unions
    /*
    up u1;
    u1.rice = 56;
    u1.car = 'd';
    cout << u1.rice << endl; //It'll print garbage value
    cout << u1.car << endl;
    union money u2;
    u2.car = 'e';
    u2.pound = 45;
    cout << u2.car << endl; //It'll print garbage value
    cout << u2.pound << endl;
    */

    //Enum
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;
    cout << "m1 is :- " << m1 << endl;
    cout << "m2 is :- " << m2 << endl;
    cout << "m3 is :- " << m3 << endl;
    /*
    cout << "Breakfast :- " << breakfast << endl;
    cout << "Lunch :- " << lunch << endl;
    cout << "Dinner :- " << dinner << endl;
    */
    return 0;
}