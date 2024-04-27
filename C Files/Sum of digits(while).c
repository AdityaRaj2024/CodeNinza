#include<stdio.h>
void main()
{
	int n,c=0,r;
	printf("Enter Number = ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=c+r;
		n=n/10;
	}
	printf("\nSum Of Digits =%d",c);
}
