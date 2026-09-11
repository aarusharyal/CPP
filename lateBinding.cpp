#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function enables dynamic/late binding
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *ptr;

    Dog d;
    Cat c;

    // Base pointer pointing to Dog object
    ptr = &d;
    ptr->sound(); // Output: Dog barks (Runtime Binding)

    // Base pointer pointing to Cat object
    ptr = &c;
    ptr->sound(); // Output: Cat meows (Runtime Binding)

    return 0;
}
