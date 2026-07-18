#include<iostream>
using namespace std;

int main()
{
	// Declare two integer operands
	int num1, num2;
	// Variable to hold the operator character (+, -, *, /)
	char operator;

	// Prompt the user for two numbers
	cout << "Enter the numbers" << endl;
	cin >> num1 >> num2;

	// Prompt the user for the operator to apply
	cout << "Enter the operator" << endl;
	cin >> operator;

	// Use switch to select the operation based on the operator char
	switch(operator)
	{
		case '+':
			// Addition
			int sum = num1 + num2;
			cout << "sum is " << sum;
			break;
		case '-':
			// Subtraction
			int difference = num1 - num2;
			cout << "Difference is " << difference;
			break;
		case '*':
			// Multiplication
			int multiple = num1 * num2;
			cout << "Multiplication is " << multiple;
			break;
		case '/':
			// Division with zero check
			if(num2 != 0)
			{
				int division = num1 / num2; // integer division
				cout << "Division is " << division;
			}
			else
			{
				cout << "Division is not possible";
			}
			break;
		default:
			// Operator not recognized
			cout << "Invalid choice";
	}

	return 0; // indicate successful execution
}
