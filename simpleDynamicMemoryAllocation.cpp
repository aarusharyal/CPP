#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int(5);
	cout<<"Address "<<ptr<<endl;
	cout<<"Value "<<*ptr<<endl;
	return 0;
}
