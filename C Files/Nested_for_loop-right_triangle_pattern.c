#include<stdio.h>
void main()
{
//Right Triangle Pattern
 /* int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
 for (i=1;i<=a;i++)
 {
    for(j=1;j<=i;j++)
    {
     printf(" * ");
    }
    printf("\n");
 }*/

 //Inverted Right Triangle
 /*int a,i,j;
 printf("Enter Number Of Terms = ");
 scanf("%d",&a);
 for (i=a;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  printf(" * ");
  printf("\n");
 }*/

  //column based
  /*int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
 for (i=1;i<=a;i++)
 {
    for(j=1;j<=i;j++)
    {
     printf(" %d ",j);
    }
    printf("\n");
 } */

 //row based
  /*int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
 for (i=1;i<=a;i++)
 {
    for(j=1;j<=i;j++)
         printf("%d ",i);
    printf("\n");
 }*/

 //starts with 0
 /* int a,i,j,k;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	  printf("%3d",k);
  	  k++;
	  }
	printf("\n");
  } */

  /*int a,i,j,k=1;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	  printf("\t%d",k);
  	  k++;
	}
	printf("\n");
  }*/

//Descending Numbered
  /*int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
  for(i=a;i>=1;i--)
  {
  	for(j=i;j<=a;j++)
  	  printf("%d",j);
		printf("\n");
  }*/

/*  int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
  for(i=a;i>=1;i--)
  {
  	for(j=a;j>=i;j--)
  	  printf("%d",j);
		printf("\n");
  }*/

//numbered 0 and 1
  /*int n,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(i%2==0)
      printf("0");
      else
      printf("1");
    }
   printf ("\n");
  }*/

  /*int n,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(i%2==0)
      printf("1");
      else
      printf("0");
    }
   printf ("\n");
  }*/

  /*int n,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if((i+j)%2==0)
      printf("1");
      else
      printf("0");
    }
    printf("\n");
  }*/

  /*int n,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if((i+j)%2==0)
      printf("0");
      else
      printf("1");
    }
    printf("\n");
  }*/

}
