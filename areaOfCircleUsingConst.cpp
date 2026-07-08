#include<iostream>
using namespace std;
int main()
{
	const float pi=3.14;//define constant value
	float radius;
	float area;
	cout<<"Enter the radius";
	cin>>radius;
	area=pi*radius*radius;
	cout<<"The area of circle is "<<area<<endl;
}
