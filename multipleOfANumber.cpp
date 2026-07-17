#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"Enter the number : ";
	cin>>num;
	// Logic for Printing the multiple of numbers
	for(i=1;i<=10;i++)
	{
	cout<<"The multiple of"<<num<<"x"<<i<<"is"<<num*i<<endl;
	}
	return 0;
}
