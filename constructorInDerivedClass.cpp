#include <iostream>
using namespace std;

// Base Class 1
class Base1 {
protected:
    int a;

public:
    Base1(int x) {
        a = x;
        cout << "\nBase 1 initialized";
    }

    void display1() {
        cout << "\na = " << a;
    }
};

// Base Class 2
class Base2 {
protected:
    float b;

public:
    Base2(float y) {
        b = y;
        cout << "\nBase 2 initialized";
    }

    void display2() {
        cout << "\nBase 2 b = " << b << endl;
    }
};

// Derived Class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
private:
    int c;

public:
    // Passing arguments to base class constructors via initializer list
    Derived(int i, float j, int k) : Base1(i), Base2(j) {
        c = k;
        cout << "\nDerived initialized\n";
    }

    void show() {
        cout << "c = " << c << endl;
    }
};

int main() {
    // Instantiate Derived object
    Derived Obj(1, 2.2f, 3);

    // Call member functions
    Obj.display1();
    Obj.display2();
    Obj.show();

    return 0;
}
