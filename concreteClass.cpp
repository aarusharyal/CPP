#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;

    virtual ~Animal() = default;
};

// Concrete class (provides full implementation of sound())
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Valid instantiation of a concrete class object
    Dog d;
    d.sound();

    return 0;
}
