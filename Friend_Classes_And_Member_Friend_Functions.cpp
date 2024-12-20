#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex , Complex );
    int sumCompComplex(Complex , Complex );
};

class Complex
{
    int a, b;
    // friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

    //Declare the entire class Calculator as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();
    o2.setNumber(5, 7);
    o2.printNumber();
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int res1 = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part o1 and o2 is :- " << res << endl;
    cout << "The sum of complex part of o1 and o2 is :- " << res1 << endl;
    return 0;
}