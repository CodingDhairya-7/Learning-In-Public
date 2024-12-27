#include<iostream>
using namespace std;

/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template<class T1, class T2>
class myClass{
    T1 data1;
    T2 data2;
    public:
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout << this->data1 << " " << this->data2 << endl;
        }
};
int main() {
    myClass<int, char> obj(1, 'c');
    obj.display();
    myClass<int, float>obj1(2, 5.78);
    obj1.display();
    myClass<char, float> obj2('a', 7.23);
    obj2.display();
    return 0;
}