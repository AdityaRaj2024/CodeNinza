#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("Greatest Number=%d",a);
			break;
		case 0:
		printf("Greatest Number=%d",b);
		break;		
		
	}
	
	
}
