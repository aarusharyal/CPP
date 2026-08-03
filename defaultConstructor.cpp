#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called!" << endl;
    }
};

int main() {
    MyClass obj;  // Calls default constructor
    return 0;
}
