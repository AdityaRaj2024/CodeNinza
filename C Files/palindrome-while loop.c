#include<stdio.h>
void main()
{
  int n,r,s=0,num;
  printf("\nEnter Number = ");
  scanf("%d",&n);
  num=n;
  while(n>0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if(s==num)
  printf("\n%d is a Palindrome Number.",num);
  else
      printf("\n%d is not a Palindrome Number.",num);
}
