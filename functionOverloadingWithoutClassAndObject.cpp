#include <iostream>
using namespace std;

int add(int, int);
int add(int, int, int);
float add(int, float);
float add(float, int);

int main() {
    cout << "\nsum = " << add(1.5f, 2);
    cout << "\nsum = " << add(1, 2.5f);
    cout << "\nsum = " << add(1, 2);
    cout << "\nsum = " << add(3, 2, 1) << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}

float add(int x, float y) {
    return x + y;
}

float add(float x, int y) {
    return x + y;
}
