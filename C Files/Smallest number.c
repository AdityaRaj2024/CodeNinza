#include <stdio.h>
void main()
{
	int a,b,c,d,sm;
	printf("Enter any four number:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b&&a<c&&a<d)
	sm=a;
	else if(b<c&&b<d)
	sm=b;
	else
	{
		if(c<d)
		sm=c;
		else
		sm=d;
		
		
	}
	
	printf("Smallest Number=%d",sm);
	
	
	
}
