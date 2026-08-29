#include <iostream>
using namespace std;

class Number {
private:
    int x;

public:
    // Single-argument constructor acts as a conversion constructor (basic -> user-defined)
    Number(int a) {
        x = a;
    }

    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    int n = 10;

    // Implicit conversion from basic type (int) to user-defined type (Number)
    Number obj = n; 

    obj.display();

    return 0;
}
