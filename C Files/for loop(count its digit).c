#include<stdio.h>
void main()
{
 int n,c=0 ;
 printf("Enter Any Number= ");
 scanf("%d",&n);
 for(;n>0;)
 {
  	n=n/10;
  	c++;
 }
  printf("Count of its digits is %d",c);
}
