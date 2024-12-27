#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    float rating;

public:
    Animal(string s, float r)
    {
        name = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function or pure virtual function
};

class Dog : public Animal
{
    int count;

public:
    Dog(string s, float r, int c) : Animal(s, r)
    {
        count = c;
    }
    void display()
    {
        cout << "Name of Dog is: - " << name << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No. Of Dogs is/are :- " << count << endl;
    }
};

class Cat : public Animal
{
    int count;

public:
    Cat(string s, float r, int c) : Animal(s, r)
    {
        count = c;
    }
    void display()
    {
        cout << "Name of Cat is: - " << name << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No. Of Cats is/are :- " << count << endl;
    }
};

int main()
{
    string name;
    float rating;
    int dogcount, catcount;

    name = "Bruno";
    rating = 4.5;
    dogcount = 5;
    Dog d(name, rating, dogcount);
    d.display();
    cout << "---------------------------------\n";
    name = "Lisa";
    rating = 3.7;
    catcount = 2;
    Cat c(name, rating, catcount);
    c.display();
    cout << "---------------------------------\n";
    Animal *a[2];
    a[0] = &d;
    a[1] = &c;

    a[0]->display();
    a[1]->display();
    
    return 0;
}