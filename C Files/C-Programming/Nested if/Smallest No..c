#include <stdio.h>
void main()
{
	int a,b,c,d,sm;
	printf("Enter any four number:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			sm=a;
			else
			sm=d;
			
		}
		
	}
	else
	{
		if(b<c)
	    {
		    if(b<d)
		    sm=b;
		    else
		    {
		    	if(c<d)
		    	sm=c;
		    	else
		    	sm=d;
		    	
			}
		    
		    
	    }
		
		
		
	    
	
    }  
	
 printf("Smallest Number=%d",sm);   
	
	
}
