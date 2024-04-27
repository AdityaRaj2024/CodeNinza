#include<iostream>
using namespace std;
void Sum()
{
	int num,r,s=0;
	cout<<"Enter Any Number = ";
	cin>>num;
	while(num>0)
	{
		r=num%10;
		s=s+r;
		num/=10;
	}
	cout<<"Sum of Digit = "<<s<<endl;
}
int main()
{
	Sum();
	return 0;
}
