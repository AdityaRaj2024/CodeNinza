#include <stdio.h>
void main()
{
	int y,m,d;
	printf("Enter age in days:");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	m=d/30;
	d=d%30;
	printf("Year=%d\nMonth=%d\nDays=%d",y,m,d);
	
	
	
}
