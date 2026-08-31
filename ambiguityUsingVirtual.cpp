#include <iostream>
using namespace std;

// Base class
class A {
public:
    void display() {
        cout << "\nI'm base class" << endl;
    }
};

// Class B inheriting A virtually
class B : virtual public A {
};

// Class C inheriting A virtually
class C : virtual public A {
};

// Derived class D inheriting from both B and C (Diamond structure)
class D : public B, public C {
    // Single shared instance of class A is available here
};

int main() {
    D d;

    // Calls display() without ambiguity because of virtual base class
    d.display();

    return 0;
}
