#include<iostream>
using namespace std;
class A
{
	int a=5,b=10;
	public:
	void add()
	{
		int sum=a+b;
		cout<<"Sum = "<<sum<<endl;
	}
	void sub(int a,int b)
	{
		int sub=a-b;
		cout<<"Difference = "<<sub<<endl;
	}
};
int main()
{
	A obj;
	obj.add();
	obj.sub(100,100);
	return 0;
}
