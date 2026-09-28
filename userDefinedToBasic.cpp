#include <iostream>
using namespace std;

class Number {
private:
    int x;

public:
    // Parameterized constructor
    Number(int a) {
        x = a; // Fixed: assign parameter 'a' to member variable 'x'
    }

    // Conversion operator: User-defined (Number) -> Basic (int)
    operator int() {
        return x;
    }
};

int main() {
    Number n(50);

    // Implicit conversion from Number object to int primitive
    int a = n; 

    cout << "Converted integer value: " << a << endl;

    return 0;
}
