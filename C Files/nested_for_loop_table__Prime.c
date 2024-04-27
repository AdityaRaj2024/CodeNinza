#include<stdio.h>
void main()
{
 //Table From A To B.	
 int a,b,n,i;
 printf("Enter First Term= ");
 scanf("%d",&a);
 printf("Enter Last Term= ");
 scanf("%d",&b);
 if(b>a)
 {
 printf("Table Between %d And %d Are As Follows =\n",a,b);
 for(n=a;n<=b;n++)
	{
	 for(i=1;i<=10;i++)
		printf("\t%dX%d=%d",n,i,n*i);
	printf("\n");
	}
	}
  else
  printf("Invalid Entry."); 
 
 /*int a,b,n,i;
 printf("Enter First Term= ");
 scanf("%d",&a);
 printf("Enter Last Term= ");
 scanf("%d",&b);
 if(b>a)
 {
 printf("Table Between %d And %d Are As Follows =\n",a,b);
 for(i=1;i<=10;i++)
   {
      for(n=a;n<=b;n++)	 
		printf("\t%dX%d=%d\t",n,i,n*i);
	printf("\n"); 
	}
  }
  else
  printf("Invalid Entry.");*/
  
  
//Prime Number From A to B.
/* int a,b,n,i,c;
 printf("Enter First Term= ");
 scanf("%d",&a);
 printf("Enter Last Term= ");
 scanf("%d",&b);
 for (n=a;n<=b;n++)
  {
  	c=0;
  	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	 c++;	
	 } 
	 if(c==2)
	  printf("\t%d",n); 	
   } */
 
 //Perfect Number between A Range
 /*int n1,n2,f,i,j;
 printf("Enter Two Terms = ");
 scanf("%d%d",&n1,&n2);
 if(n2>n1)
 {
  printf("Perfect Number Between %d And %d Are =",n1,n2);
  	for(i=n1;i<=n2;i++)
 	{
 		f=0;
 		for(j=1;j<=i/2;j++)
 		{
 			if(i%j==0)
 			f+=j;
		}
		if(f==i)
		printf("\t%d",i);
   }
 }*/
 
 /*int n1,n2,f,i,j;
 printf("Enter Two Terms = ");
 scanf("%d%d",&n1,&n2);
 if(n2>n1)
 {
  printf("Prime Number Between %d And %d Are =",n1,n2);
  	for(i=n1;i<=n2;i++)
 	{
 		f=0;
 		for(j=1;j<=i/2;j++)
 		{
 			if(i%j==0)
 			f+=i;
		}
		if(f==i)
		printf("\t%d",i);
   }
 }*/
 }
