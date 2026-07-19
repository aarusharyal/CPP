// Simple demonstration of a class with two methods (function overloading not used here)
#include <iostream>
using namespace std;

// Class A contains two integer members and two member functions
class A {
	int a = 5, b = 10; // default member values
public:
	// add(): computes and prints the sum of the member variables a and b
	void add() {
		int sum = a + b;
		cout << "Sum = " << sum << endl;
	}

	// sub(int, int): computes and prints the difference of the two parameters
	// Note: this is not subtracting the member variables, but the arguments passed
	void sub(int a, int b) {
		int sub = a - b;
		cout << "Difference = " << sub << endl;
	}
};

// main(): creates an object of A and calls its methods
int main() {
	A obj;         // create instance of A
	obj.add();     // prints sum of member variables (5 + 10)
	obj.sub(100, 100); // prints difference of passed arguments (100 - 100)
	return 0;      // indicate successful execution
}
