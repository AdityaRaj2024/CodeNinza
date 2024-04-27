#include<stdio.h>
#include<math.h>
void main()
{
	int r,n,p;
	printf("Enter Any Number :- ");
	scanf("%d",&n);
	printf("Enter Power :- ");
	scanf("%d",&p);
	n=pow(n,p);
	printf("Enter Number to Divide :- ");
	scanf("%d",&r);
	printf("\nRemainder :- %d",n%r);
}
