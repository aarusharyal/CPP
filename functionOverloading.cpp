#include<iostream>
using namespace std;
float add(float,int);
float add(float,float);
int add(int ,int);
int main()
{
	cout<<"\nSum="<<add(2,3);
	cout<<"\nSum="<<add(2.4f,3.6f);
	cout<<"\nSum="<<add(2.1f,3);
	return 0;
}
	
int add(int x,int y)
{
	return x+y;
}

float add(float x,float y)
{
	return x+y;
}

float add(float x,int y)
{
	return x+y;
}