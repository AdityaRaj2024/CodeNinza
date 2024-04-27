#include<stdio.h>
#include<math.h>
void main()
{
 int n,num,c=0,r,s=0;
 printf("Enter Number = ");
 scanf("%d",&n);
 num=n;
 //for counting digits
 do
 {
  c++;
  n=n/10;
  }
  while(n>0);
  n=num;
//for sum of digits
while(n>0)
{
    r=n%10;
    s=s+pow(r,c);
    n=n/10;
    printf("%d\n",s);
}
 if(s==num)
    printf("%d is an Armstrong Number.",num);
 else
    printf("%d is not an Armstrong Number.",num);
}
