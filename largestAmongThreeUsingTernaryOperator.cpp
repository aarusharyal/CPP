#include<iostream>
using namespace std;

int main()
{
    int a,b,c,largest;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    // Usage of ternary operator
    largest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    cout<<"Largest number = "<<largest;
    return 0;
}
