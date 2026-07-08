#include<iostream>
using namespace std; 
int main()
{
	int *b=new int[5];
	int i;
	cout<<"Enter array elements";
	for(i=0;i<5;i++)
		cin>>*(b+i);
		cout<<"Array elemnts are";
		for(i=0;i<5;i++)
     	cout<<*(b+i)<<endl;
	delete []b;
	return 0;
}
