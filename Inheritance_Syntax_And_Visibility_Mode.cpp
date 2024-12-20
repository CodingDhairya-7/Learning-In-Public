#include<iostream>
using namespace std;

//Base class
class Employee{
    float salary;
    public:
        int id;
        Employee(){}
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        float getSalary(){
            return salary;
        }
};

//Derived class
class Programmer : public Employee{
    int languageCode = 9;
    public:
        Programmer(int inpId){
            id = inpId;
        }
        int getlanCode(){
            return languageCode;
        }
        int getid(){
            return id;
        }
};

int main() {
    Employee dhruv(1), ratan(2);
    cout << "Dhruv Salary is :- " << dhruv.getSalary() << endl;
    cout << "Ratan Salary is :- " << ratan.getSalary() << endl;
    Programmer skillF(1);
    cout << "skillF language code is :- " << skillF.getlanCode() << endl;
    cout << "skillF id is :- " << skillF.getid() << endl;
    return 0;
}