#include <iostream>
#include <string>
using namespace std;

void display(int a) {
    float b = 2.0f;
    float d = 2.0f;

    try {
        if (a == 0) {
            throw string("Exception found"); // Throws std::string
        }
        if (a == 1) {
            throw 3.5f;                     // Throws float
        }

        d = b / a;
        cout << "Result: " << d << endl;
    }
    catch (const string& n) {
        // Handles std::string exceptions
        cout << n << endl;
    }
    catch (float t) {
        // Handles float exceptions
        cout << "This is float: " << t << endl;
    }
}

int main() {
    // Calling with 0 executes the string exception block
    display(0);

    // You can test other paths:
    // display(1); // Triggers float catch block
    // display(2); // Normal execution (Outputs Result: 1)

    return 0;
}
