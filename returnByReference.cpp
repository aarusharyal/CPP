// Simple demonstration of return by reference in C++
#include <iostream>
using namespace std;

int& getElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        cerr << "Index out of range: " << index << "\n";
        exit(1);
    }
    return arr[index];
}

int main() {
    int values[3] = {10, 20, 30};
    const int n = 3;

    cout << "Before: " << values[0] << ", " << values[1] << ", " << values[2] << '\n';

    getElement(values, n, 1) = 99;

    cout << "After:  " << values[0] << ", " << values[1] << ", " << values[2] << '\n';

    int& firstRef = getElement(values, n, 0);
    firstRef += 5;

    cout << "Final:  " << values[0] << ", " << values[1] << ", " << values[2] << '\n';
    return 0;
}
