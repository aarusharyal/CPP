#include <iostream>
using namespace std;

int main() {
    // 1. Allocate dynamic array on the heap
    int *b = new int[5];

    // 2. Read inputs
    cout << "Enter 5 array elements:\n";
    for (int i = 0; i < 5; i++) {
        cin >> b[i]; // Equivalent to *(b + i)
    }

    // 3. Display elements
    cout << "\nYou entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << b[i] << endl;
    }

    // 4. Free allocated memory to prevent memory leaks
    delete[] b;

    return 0;
}