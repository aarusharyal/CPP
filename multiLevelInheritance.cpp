#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal breathes air" << endl;
    }
};

// Derived class from Mammal (multilevel inheritance)
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();      // inherited from Animal
    myDog.breathe();  // inherited from Mammal
    myDog.bark();     // defined in Dog
    return 0;
}
