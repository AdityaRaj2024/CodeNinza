#include<iostream>
int main()
{
	return 0;
}
int factor()
{
	int a,i,c=0,s=0;
	std::cout<<"Enter Any Number"<<std::endl;
	std::cin>>a;
	for(i=0;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c++;
			s=s+i;
		}
	}
	return c;
}