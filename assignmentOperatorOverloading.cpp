#include <iostream>
using namespace std;

class Sample {
private:
    int x, y;

public:
    // Default Constructor
    Sample() {
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    Sample(int x1, int y1) {
        x = x1;
        y = y1;
    }

    // Overloaded Assignment Operator (supports chaining: s3 = s2 = s1)
    Sample& operator=(const Sample &m) {
        // Self-assignment check
        if (this != &m) {
            x = m.x;
            y = m.y;
        }
        return *this;
    }

    void show() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Sample s1(10, 20);
    Sample s2;

    // Call overloaded operator=
    s2 = s1;

    cout << "S1:" << endl;
    s1.show();

    cout << "\nS2:" << endl;
    s2.show();

    return 0;
}
