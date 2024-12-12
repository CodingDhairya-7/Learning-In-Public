#include<iostream>
using namespace std;

class Animal {
    public:
    void Bark(){
        cout << "Bhauu Bhauu !!\n";
    }
};

int main() {
    Animal dog;
    dog.Bark();
    return 0;
}