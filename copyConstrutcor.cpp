#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    Sample() : x(0) {}

    Sample(const Sample &obj) {
        x = obj.x;
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Sample a;
    a.x = 10;

    Sample b = a; // copy constructor called
    Sample c(a);  // copy constructor called

    cout << "b.x = " << b.x << endl;
    cout << "c.x = " << c.x << endl;

    return 0;
}
