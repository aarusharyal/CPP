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

    // Friend function declaration for unary operator overloading
    friend void operator++(unary &obj);
};

// Friend function definition (takes object reference as parameter)
void operator++(unary &obj) {
    obj.a++;
    obj.b++;
    obj.c++;
}

int main() {
    unary obj(10, 20, 30);

    cout << "Before increment:\n";
    obj.display();

    // Invokes friend operator++(obj)
    ++obj;

    cout << "\nAfter increment:\n";
    obj.display();

    return 0;
}
