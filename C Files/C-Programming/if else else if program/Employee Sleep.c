#include <stdio.h>
void main()
{
	float bs,gs,ns,hra,da,ta,ma,pf;
	printf("Enter Basic Salary of Employee:");
	scanf("%f",&bs);
	
	if(bs>=20000)
	{
		hra=bs*40/100;
		da=bs*90/100;
		ta=bs*30/100;
		ma=bs*10/100;
		pf=bs*10/100;
		
	}
	else if(bs>=10000)
	{
		hra=bs*30/100;
		da=bs*80/100;
		ta=bs*20/100;
		ma=bs*8/100;
		pf=bs*10/100;
		
		
	}
	else
	{
		hra=bs*20/100;
		da=bs*70/100;
		ta=bs*15/100;
		ma=bs*5/100;
		pf=bs*10/100;
				
	}
	gs=bs+hra+da+ta+ma+pf;
	ns=gs-pf;
	printf("Salary Sleep of September Month:\n");
	printf("Basic salary=%f\nHRA=%f\nDA=%f\nTA=%f\nMA=%f\nPF=%f\nGross Salary=%f\nNet Salary=%f\n",bs,hra,da,ta,ma,pf,gs,ns);
	
	
}
