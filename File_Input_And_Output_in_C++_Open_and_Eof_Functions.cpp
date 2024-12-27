#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me";
    out.close();

    ifstream in;
    string st;
    in.open("sample60.txt");
    // in >> st;
    /*
    getline(in, st);
    cout << "First Line :- " << st << endl;
    getline(in, st);
    cout << "Second Line :- " << st << endl;
    getline(in, st);
    cout << "Third Line :- " << st << endl;    
    */
    while(in.eof() == 0){
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}