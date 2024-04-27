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
}
