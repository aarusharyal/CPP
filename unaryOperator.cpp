#include <iostream>
using namespace std;

class unary {
private:
    int a, b, c;

public:
    // Constructor
    unary(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void display() {
        cout << "a = " << a << "\nb = " << b << "\nc = " << c << endl;
    }

    // Overloading prefix ++ operator
    void operator++() {
        a++;
        b++;
        c++;
    }
};

int main() {
    unary obj(10, 20, 30);

    cout << "Before incrementation:\n";
    obj.display();

    // Overloaded unary operator call
    ++obj;

    cout << "\nAfter incrementation:\n";
    obj.display();

    return 0;
}
