#include <stdio.h>
void main()

{
	int a,b,c,gt;
	printf("Enter Three Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		gt=a;
		else
		gt=c;		
	}
	else
	{
		if(b>c)
		gt=b;
		else
		gt=c;				
	}
	
	printf("Greatest Number=%d",gt);
	
	
}
