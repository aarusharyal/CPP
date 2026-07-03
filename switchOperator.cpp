#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char operator;
	cout<<"Enter the numbers"<<endl;
	cin>>num1>>num2;
	cout<<"Enter the operator"<<endl;
	cin>>operator;
	switch(operator)
	{
		case '+':
			int sum=num1+num2;
			cout<<"sum is"<<sum;
			break;
		case '-':
			int difference=num1-num2;
			cout<<"Difference is"<<difference;
			break;
		case '*':
			int multiple=num1*num2;
			cout<<"Multiplication is"<<multiple;
			break;
		case '/':
			if(num2!=0)
			{
				int division=num1/num2;
				cout<<"Division is"<<division;
			}
			else
			{
				cout<<"Division is not possible";
			}
			break;
		default:
			cout<<"Invalid choice";
	}
	return 0;
}
