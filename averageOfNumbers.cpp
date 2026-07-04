#include<iostream>
using namespace std;
int main()
{
	float average,num,sum=0;
	int n;
	cout<<"Enter the numbers";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	average=sum/n;
	cout<<"The sum is"<<sum<<endl;
	cout<<"The average is"<<average;
	return 0;
	
}
