#include <iostream>
using namespace std;

// Base / Parent class
class A {
public:
    void display() {
        cout << "\nIn parent class display()";
    }
};

// Derived / Child class inheriting from A
class B : public A {
public:
    // Overrides display() from class A
    void display() {
        cout << "\nIn child class display()";
    }
};

int main() {
    B obj;

    // Calls the overridden display() in derived class B
    obj.display();

    // Note: If you want to invoke parent's display using obj, use scope resolution:
    // obj.A::display();

    cout << endl;
    return 0;
}
