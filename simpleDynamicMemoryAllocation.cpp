#include<iostream>
using namespace std;
int main()
{
	// Dynamic memory allocation
	int *ptr=new int(5);
	cout<<"Address "<<ptr<<endl;
	cout<<"Value "<<*ptr<<endl;
	return 0;
}
