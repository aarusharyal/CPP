#include <iostream> // Include I/O library
using namespace std;

// Program to check if a given integer is odd or even
int main()
{
	int num; // variable to store input number

	cout << "Enter the number : "; // prompt the user
	cin >> num; // read number from standard input

	// If remainder of division by 2 is zero, number is even
	if (num % 2 == 0)
		cout << num << " is even number" << endl;
	else // otherwise it's odd
		cout << num << " is odd number" << endl;

	return 0; // indicate successful termination
}
