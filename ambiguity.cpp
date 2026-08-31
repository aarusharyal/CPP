#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void show() {
        cout << "show A";
    }
};

// Base class B
class B {
public:
    void show() {
        cout << "show B";
    }
};

// Derived class C inheriting from both A and B
class C : public A, public B {
    // Inherits show() from both A and B
};

int main() {
    C obj;

    // Direct call causes ambiguity error:
    // obj.show(); // ERROR: request for member 'show' is ambiguous

    // Ambiguity resolution using scope resolution operator (::)
    obj.A::show();
    cout << endl;
    obj.B::show();
    cout << endl;

    return 0;
}
