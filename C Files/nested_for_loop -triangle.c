#include<stdio.h>
void main()
{
//Right Triangle Pattern
  int a,i,j;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
 for (i=1;i<=a;i++)
 {
    for(j=1;j<=i;j++)
    {
     printf(" * ");
    }
    printf("\n");
 }

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
  /*int a,i,j,k;
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
  }*/

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
}
