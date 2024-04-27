#include<iostream>
using namespace std;
//using iterative function
void Sum1(int n)
{
    int r,s=0;
    while(n>0)
	{
		r=n%10;
		s=s+r;
		n/=10;
	}
    cout<<"Sum of Digit = "<<s<<endl;
}
//using recursive function
void Sum2(int n)
{
    int r,s=0;
    if(n>0)
	{
		r=n%10;
		s=s+r;
		sum2(n/10);
	}
    cout<<"Sum of Digit = "<<s<<endl;
}
void main()
{
    int d;
    cout<<"Enter Any Digit = ";
    cin>>d;
    sum1(d);
    sum2(d);
}