#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l = 0) : length(l) {}

    Box operator+(const Box &other) const {
        return Box(length + other.length);
    }

    void display() const {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b1(5);
    Box b2(3);
    Box b3 = b1 + b2;

    cout << "b1: ";
    b1.display();
    cout << "b2: ";
    b2.display();
    cout << "b3: ";
    b3.display();

    return 0;
}
