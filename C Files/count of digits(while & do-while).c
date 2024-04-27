#include<stdio.h>
void main()
{
//while
	int n,c=0;
	printf("\nEnter Number = ");
	scanf("%d",&n);
	if(n==0)
	printf("\nDigits = 1");
	else
	{
	while(n>0)
	{
		c++;
		n=n/10;
	}
	printf("\nDigits=%d",c);
}
//do-while	
/*int n,c=0;
printf("\nEnter Number = ");
scanf("%d",&n);
do
{
	c++;
	n=n/10;
}
while(n>0);
printf("\nDigits=%d",c);*/
}
