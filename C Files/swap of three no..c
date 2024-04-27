#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Enter any three number:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Value before Swapping:\na=%d\nb=%d\nc=%d\n",a,b,c);
	d=b;;
	e=c;
	b=a;
	c=d;
	a=e;
	printf("Value After Swapping:\na=%d\nb=%d\nc=%d",a,b,c);
	
	
	
	
}
