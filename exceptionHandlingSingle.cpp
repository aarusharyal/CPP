#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        // Check for division by zero condition
        if (b == 0) {
            throw b; // Throw integer exception
        }

        // Executes only if b != 0
        cout << "Result = " << a / b << endl;
    }
    catch (int x) {
        // Catches thrown integer exception
        cout << "Error: cannot divide by zero" << endl;
    }

    return 0;
}
