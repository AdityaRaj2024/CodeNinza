#include<stdio.h>
void main()
{
  int n,i,s=0 ;
  printf("Enter Any Number= ");
  scanf("%d",&n);
  for(;n>0;)
  {
  	i=n%10;
  	s=s+i;
  	n=n/10;
  }
  printf("Sum of its digits is %d",s);
}
