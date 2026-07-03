#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,n;
	cout<<"Enter the limit of number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	cout<<"The sum of square of numbers is "<<sum<<endl;
	return 0;
}
