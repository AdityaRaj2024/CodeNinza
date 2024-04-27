#include<stdio.h>
void main()
{
	int n,c=0,r;
	printf("\nEnter Number = ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=c*10+r;
		n=n/10;
	}
	printf("\nReverse Of Digits =%d",c);
}
