#include <iostream>

using namespace std;

int main()
{
    /*
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    */

    // 1. Selection control structure: If else-if else ladder
    /*
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    */

    // 2. Selection control structure: Switch Case statements
    /*
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    cout << "Done with switch case";
    */

    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    // 1. Loop control structure: For Loop
    /*For loop in C++*/

    /*
     int i=1;
     cout<<i;
     i++;
     */

    /*
    for (int i = 1; i <= 40; i++)
    {
        cout<<i<<endl;
    }
    */

    // Example of infinite for loop
    /*
    for (int i = 1; 34 <= 40; i++)
    {
        cout<<i<<endl;
    }
    */

    // 2. Loop control structure: While Loop
    /*While loop in C++*/

    //  Printing 1 to 40 using while loop
    /*
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    */

    // Example of infinite while loop
    /*
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
    }
    */

    // 1. Loop control structure: Do-While Loop
    /* do While loop in C++*/

    // Printing 1 to 40 using d0-while loop
    /*
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);
    */

    // Homework :- Writing multiplication table for 6
    // for loop
    /*
    for (int i = 1; i <= 10; i++)
    {
        cout << "6 X " << i << " :- " << i * 6 << endl;
    }
    */
    // while loop
    /*
    int i = 1;
    while (i <= 10)
    {
        cout << "6 X " << i << " :- " << i * 6 << endl;
        i++;
    }
    */
    // do-while loop
    int i = 1;
    do
    {
        cout << "6 X " << i << " :- " << i * 6 << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}