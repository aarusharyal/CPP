#include <iostream>
using namespace std;

// Class A grants friendship to Class B
class A {
private:
    int a = 5; // Private member variable

    // Grant Class B access to private members of Class A
    friend class B;
};

// Friend Class
class B {
public:
    // Member function accepting an object of Class A
    void display(A obj) {
        // Direct access to private member 'a' of Class A
        cout << "Value of private member a: " << obj.a << endl;
    }
};

int main() {
    A obj;
    B b;

    // Pass object of Class A to Class B's member function
    b.display(obj);

    return 0;
}
