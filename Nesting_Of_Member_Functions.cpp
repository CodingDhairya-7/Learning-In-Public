#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;
    void chk_bin();

public:
    void read();
    void ones();
    void display();
}; 

void Binary :: read(){
    cout << "Enter your binary number :- " << endl;
    cin >> s;
}

void Binary :: chk_bin(){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect Binary Number !!\n";
            exit(0);
        }
    }
    cout << "Correct Binary Number !!\n";
}

void Binary :: ones(){
    chk_bin();
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';
        }
    }
}

void Binary :: display(){
    cout << "Displaying Your Binary Number :- ";
    for(int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}