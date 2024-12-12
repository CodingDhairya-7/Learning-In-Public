#include<iostream>
using namespace std;

int main() {

    //Arrays
    /*
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout << "------------Math Marks are------------\n";
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;


    int marks[4] = {23, 45, 56, 89};
    //You can change the value of an array
    marks[2] = 455;
    cout << "------------Marks are------------\n";
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    for(int i = 0; i < 4; i++){
        cout << "The value of marks " << i << " is :- " << marks[i] << endl;
    }
    
    //Quick quiz : do the same using while and do-while loops 
    
    //while loop
    cout << "This is while loop\n";
    int i = 0;
    while(i < 4){
        cout << "The value of marks " << i << " is :- " << marks[i] << endl;
        i++;
    }

    //do-while loop
    cout << "This is do-while loop\n";
    int l = 0;
    do{
        cout << "The value of marks " << l << " is :- " << marks[l] << endl;
        l++;
    }
    while(l<4);
    */

    //Pointers Arithmetic
    int marks[4] = {10, 20, 30, 40};
    int* p = marks;
    cout << "The value of *p is :- " << *p << endl;
    cout << "The value of *(p+1) is :- " << *(p+1) << endl;
    cout << "The value of *(p+2) is :- " << *(p+2) << endl;
    cout << "The value of *(p+3) is :- " << *(p+3) << endl;
    
    return 0;
}