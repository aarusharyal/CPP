#include <iostream>

void greet(const std::string &name = "Guest") {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    greet();
    greet("Aarush");
    return 0;
}
