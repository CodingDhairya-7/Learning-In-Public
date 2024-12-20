#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout << "Enter the id of the employee " << count << endl;
            cin >> id;
        }
        void getData(){
            cout << "The id of the employee " << count << " is :- " << id << endl;
            count++;
        }
        //getCount() is a static method of Employee class
        static void getCount(){
            // cout << id; //will throw an error
            cout << "The value of count is :- " << count << endl;
        }
};

// count is the static data member of Employee class
int Employee :: count = 1; // Default value is 0

int main() {
    Employee harry, dhruv, ratan;
    // harry.id;    //cannot do this as id is a private member of Employee class
    // harry.count; //cannot do this as count is a private member of Employee class
    
    harry.setData();
    //harry.getCount(); //This will also work.
    Employee::getCount();
    harry.getData();
    

    dhruv.setData();
    // dhruv.getCount(); //This will also work.
    Employee::getCount();
    dhruv.getData();
    

    ratan.setData();
    // ratan.getCount(); //This will also work.
    Employee::getCount();
    ratan.getData();    
    

    return 0;
}