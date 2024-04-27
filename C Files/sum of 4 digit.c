#include <stdio.h>
void main()
{
	int n,N,r,sum;
	printf("Enter any four digit Number:");
	scanf("%d",&n);
	N=n;
	r=n%10;
	sum=r;
	n=n/10;
	r=n%10;
	sum=sum+r;
	n=n/10;
	r=n%10;
	sum=sum+r;
	n=n/10;
	sum=sum+n;
	printf("Sum all digits of %d=%d",N,sum);
	
	
}
