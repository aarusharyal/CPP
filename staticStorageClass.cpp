#include<iostream>
using namespace std;
void count()
{
	static int x=5;
	x++;
	cout<<x<<endl;
}
int main()
{
	count();
	count();
	count();
	return 0;
}
