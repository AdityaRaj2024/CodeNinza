/*#include<iostream>
using namespace std;
void great();	//function prototype
void sum()
{
	int a,b,c;
	cout<<"Enter 2 numbers :"<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"Sum of 2 numbers = "<<c<<endl;
}
int main()
{
	sum();
	great();
	return 0;
}
void great()
{
	int a,b,c,gt;
	cout<<"Enter 3 numbers :"<<endl;
	cin>>a>>b>>c;
	gt=a>b&&a>c?a:b>c?b:c;
	cout<<"GReatest Number = "<<gt<<endl;
}*/

//Sum of any digit
/*#include<iostream>
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
}*/