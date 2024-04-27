#include<stdio.h>
void main()
{
 //table of a number
 /*int n,i;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 printf("\n%d",n*i); */
 
 /*int n,i;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 printf("\n%d X %d = %d",n,i,n*i); */
 
 //factorial 
/* int i,n,f;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    f=f*i;
 printf("Factorial Of %d is %d",n,f); */
 
 //prime Number
 /*int n,i,c=0;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 if(n%i==0)
 c++ ;
 if(c==0)
 printf("%d is a Prime Number",n);
 else
 printf("%d is a Composite Number",n); */
 
 /*int n,i,c=0;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 if(n%i==0)
 c++ ;
 if(c==2)
 printf("%d is a Prime Number",n);
 else
 printf("%d is a Composite Number",n); */
 
/* int m,n,i,j,c;
 printf("Enter Starting Number= ");
 scanf("%d",&m);
 printf("Enter Ending Number= ");
 scanf("%d",&n);
 if(n>m)
 {
 printf("Prime Number Between %d And %d are =",m,n);
 for(i=m;i<=n;i++)
 {
 	c=0;
 	for(j=1;j<=i;j++)
 	{
 		if(i%j==0)
 		c++;
	 }
	 if(c==2)
	 printf("\t%d",i);
 }
}
 else
 printf("Invalid Entry."); */

 
//find factor
/*int n,i;
printf("Enter Any Number = ");
scanf("%d",&n);
printf("Factor of %d is",n);
for (i=1;i<=n;i++)
	if(n%i==0)
	printf("\t%d",i);*/
	
/*int n,i,s=0;
printf("Enter Any Number = ") ;
scanf("%d",&n);
printf("Factor Of %d is ",n);
for(i=1;i<=n;i++)
{
	if(n%i == 0)
	{
		printf("\t%d",i);
		s=s+i;
	}
}
printf("\nSum Of All Factors = %d",s); */

//Sum Of Even And Odd Factors
/*int n,i,esum,osum;
printf("Enter Any Number = ") ;
scanf("%d",&n);
printf("Even Factor Of %d is ",n);
for(i=1;i<=n;i++)
{
	if(n%i == 0)
	{
		if(i%2==0)
		{
		printf("\t%d",i);
		esum=esum+i;
		}
		else
		osum=osum+i;
	}
}
printf("\nSum Of All Even Factor's is %d \nSum Of All Odd Factors is %d \nSum Of All Factors is %d",esum-1,osum,(esum+osum-1));*/
}
