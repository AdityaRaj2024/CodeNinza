#include <stdio.h>
void main()
{
	int h,m,s;
	printf("Enter Time in Second:");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("Hour=%d\nMinute=%d\nSecond=%d",h,m,s);
	
	
	
}
