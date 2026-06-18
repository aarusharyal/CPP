#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter the numbers";
	cin>>num1>>num2>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<"Num1 is largest";
	}
	else if(num2>num1 && num2>num3)
	{
		cout<<"Num2 is largest";
	}
	else if(num3>num1 && num3>num2)
	{
		cout<<"Num3 is largest";
	}
	return 0;
}
