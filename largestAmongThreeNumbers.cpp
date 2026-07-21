// Program to find the largest of three numbers using the conditional (?:) operator
#include <iostream>
using namespace std;

int main()
{
    // declare three input numbers and variable to hold the largest
    int a, b, c, largest;

    // prompt user for input
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    // use nested ternary operator to determine the largest value
    // if a > b then compare a and c, else compare b and c
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // output the result
    cout << "Largest number = " << largest << endl;

    return 0;
}
