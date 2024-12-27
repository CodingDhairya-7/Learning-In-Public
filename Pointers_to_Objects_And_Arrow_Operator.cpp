#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout << "The real part is :- " << real << endl;
            cout << "The imaginary part is  :- " << imaginary << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main() {
    Complex c1;
    c1.setData(22, 32);
    c1.getData();
    // Complex *ptr = &c1;
    
    Complex *ptr = new Complex;
    (*ptr).setData(22, 32);
    (*ptr).getData();
    //using Arrow Operator
    cout << "------ Using Arrow Operator ------" << endl;
    ptr->setData(45, 56);
    ptr->getData();
    return 0;
}