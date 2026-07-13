#include<iostream>
using namespace std;
// Program to Print Floyd's Triangle
int main()
{
	int i,j,num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}
