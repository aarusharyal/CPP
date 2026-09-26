#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "The address of the Object is: " << this << endl;
    }
};

int main() {
    // Instantiate two distinct objects of class Base
    Base object1, object2;

    // Display memory addresses using the 'this' pointer
    object1.display();
    object2.display();

    return 0;
}
