#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit();
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 4
        void show();
};

BankDeposit :: BankDeposit(){};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for(int i = 0; i < y; i++){
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for(int i = 0; i < y; i++){
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout << endl;
    cout << "Principal amount was " << principal << endl;
    cout << "Return value after " << years << " year(s) is :- " << returnValue << endl;
}

int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the principal amount :- ";
    cin >> p;
    cout << "Enter no. of years, you want to keep your principal amount :- ";
    cin >> y;
    /*
    cout << "Enter the interest rate(decimal only), best suitable for your principal amount :- ";
    cin >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();
    */
    cout << "Enter the interest rate(integer only), best suitable for your principal amount :- ";
    cin >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}