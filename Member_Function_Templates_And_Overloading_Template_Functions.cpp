#include<iostream>
using namespace std;

template<class T>
class myClass{
    T data;
    public:
        myClass(T a){
            data = a;
        }
        void display();
};

template<class T>
void myClass<T> :: display(){
    cout << "The value of a :- " << data << endl;
}


void func(int a){
    cout << "I am first func() " << a << endl;
}

template<class T>
void func(T a){
    cout << "I am templatized func() " << a << endl;
}

template<class T>
void func1(T a){
    cout << "I am templatized func1() " << a << endl;
}

int main() {
    myClass<int> obj(5);
    obj.display();

    myClass<float> obj1(4.786);
    obj1.display();

    func(4); // Exact match takes the highest priority
    func1(4); // Exact match takes the highest priority
    return 0;
}