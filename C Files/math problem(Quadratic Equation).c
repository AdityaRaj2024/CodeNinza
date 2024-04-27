#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,v1,v2;
printf("Enter 3 Co-efficient = ");
scanf("%f%f%f",&a,&b,&c);
d=pow(b,2)-(4*a*c);
if (d>0)
{
	v1=(-b+sqrt(d))/2*a ;
	v2=(-b-sqrt(d))/2*a ;
	printf("\nvalue1 =%.2f, value2 =%.2f",v1,v2);
}
else
{
	printf("Values not possible");
}

/*int x,y ;
printf("\nEnter 2 Values= ");
scanf("%d%d",&x,&y);
//printf("\n(X+y)^2=%d",pow(x,2)+pow(y,2)+2*x*y);
//printf("\n(X-y)^2=%d",pow(x,2)+pow(y,2)-2*x*y);
printf("\n(X+y)^2=%d",x*x+y*y+2*x*y);
printf("\n(X-y)^2=%d",x*x+y*y-2*x*y); */



return 0;
}
