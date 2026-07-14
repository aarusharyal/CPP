#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,original,rem;
	cout<<"Enter the number : ";
	// Asking the user for the number
	cin>>num;
	original= num;
	while(num!=0)
	{
		// Reversing the number
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev)
	// Checking if the number is palnindrome or not
	cout<<"It is a Palindrome Number";
	
	else
	cout<<"It is not a palindrome number.";
	
	return 0;
}
