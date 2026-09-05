#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student() {
        cout << "Constructor called" << endl;
    }

    // Destructor (prefixed with ~)
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s; // Constructor executes here

    cout << "Inside main ()" << endl;

    return 0; // Object 's' goes out of scope here; Destructor executes
}
