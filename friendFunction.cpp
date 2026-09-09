#include <iostream>
using namespace std;

// Abstract Base Class
class Animal {
public:
    // Pure virtual function (makes Animal an abstract class)
    virtual void sound() = 0; 

    // Virtual destructor for safe polymorphic cleanup
    virtual ~Animal() = default;
};

// Derived Class
class Dog : public Animal {
public:
    // Overriding the pure virtual function (case matches Base class)
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Instantiating concrete derived class
    Dog d;
    d.sound();

    // Alternatively, using a base class pointer:
    // Animal* ptr = &d;
    // ptr->sound();

    return 0;
}
