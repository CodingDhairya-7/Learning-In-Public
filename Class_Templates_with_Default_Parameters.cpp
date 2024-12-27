#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class myClass{
    public:
        T1 a;
        T2 b;
        T3 c;
        myClass(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
        }
};
int main() {
    myClass<> obj(3, 5.78, 'c');
    obj.display();
    cout << "-----------------------\n";
    myClass<float, char, char> obj1(4.67, 'd', 'g');
    obj1.display();
    return 0;
}