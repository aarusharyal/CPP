#include<iostream>
using namespace std;
int main()
{
    int a,b,c,largest;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    largest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    cout<<"Largest number = "<<largest<<endl;
    return 0;
}
