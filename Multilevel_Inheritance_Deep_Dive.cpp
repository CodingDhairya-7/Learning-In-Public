#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_rollno(int);
        void get_rollno();
};

void Student :: set_rollno(int num){
    roll_number = num;
}

void Student :: get_rollno(){
    cout << "Roll number is :- " << roll_number << endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks();
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout << "Maths Marks :- " << maths << endl;
    cout << "Physics Marks :- " << physics << endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_rollno();
            get_marks();
            cout << "Your percentage is :- " << (maths + physics) / 2 << "%" << endl;
        };
};
    
int main() {
    Result ratan;
    ratan.set_rollno(25);
    ratan.set_marks(75, 85);
    ratan.display();
    return 0;
}