#include <iostream>
using namespace std;
int main() {
    long long binary;
    int decimal = 0, base = 1, rem;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }
    cout << "Decimal = " << decimal;
    return 0;
}
