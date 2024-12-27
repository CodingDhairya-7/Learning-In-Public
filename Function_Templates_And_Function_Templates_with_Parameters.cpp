#include<iostream>
using namespace std;

float funcAverage(float a, float b){
    float avg = (a+b)/2;
    return avg;
}

template<class T1, class T2>
float templatefuncAverage(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}

template<class T1>
void swapp(T1 &a, T1 &b){
    T1 temp = a;
    a = b; 
    b = temp;
}

int main() {
    float res = funcAverage(5.67, 3.45);
    cout << "Average is :- " << res << endl;

    float template_res = templatefuncAverage(7, 5);
    cout << "Average is :- " << template_res << endl;
    float template_res1 = funcAverage(5.67, 3.45);
    cout << "Average is :- " << template_res1 << endl;

    int x = 7, y = 9;
    cout << "Before Swap :- \n";
    cout << "Value of x :- " << x << endl;
    cout << "Value of y :- " << y << endl;
    swapp(x, y);
    cout << "After Swap :- \n";
    cout << "Value of x :- " << x << endl;
    cout << "Value of y :- " << y << endl;

    return 0;
}