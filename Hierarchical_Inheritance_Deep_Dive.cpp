#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    // Object of Dog class
    Dog dog;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Defined in Dog

    // Object of Cat class
    Cat cat;
    cat.eat();  // Inherited from Animal
    cat.meow(); // Defined in Cat

    return 0;
}
