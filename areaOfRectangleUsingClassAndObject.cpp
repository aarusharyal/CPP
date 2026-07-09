#include<iostream>
using namespace std;
class rectangle
{
	public:
	float length;
	float breadth;
	float area;
	void input()
	{
		cout<<"Enter the length";
		cin>>length;
		cout<<"Enter the breadth";
		cin>>breadth;
		area=length*breadth;
	}
	void display()
	{
		cout<<"The area of rectangle is "<<area<<endl;
	}
};
int main()
{
	rectangle r;
	r.input();
	r.display();
	return 0;
}
