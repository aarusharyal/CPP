#include <iostream>

class Box {
    int length;

public:
    Box(int l) : length(l) {}

    void show() const {
        std::cout << "Length: " << length << std::endl;
    }
};

int main() {
    Box b(10); // calling parameterized constructor
    b.show();
    return 0;
}
