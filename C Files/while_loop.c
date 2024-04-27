#include<stdio.h>
#include<math.h>
void main()
{
//Sum Of Digits
/*int n,c=0,r;
printf("Enter Number = ");
scanf("%d",&n);
while(n>0)
{
	r=n%10;
	c=c+r;
	n=n/10;
}
printf("\nSum Of Digits =%d",c); */

//Count Of Digits
//while
/*int n,c=0;
printf("Enter Number = ");
scanf("%d",&n);
if(n==0)
printf("\nDigits = 1");
else
{
while(n>0)
{
	c++;
	n=n/10;
}
printf("Digits=%d",c);
}*/

//do-while
/*int n,c=0;
printf("\nEnter Number = ");
scanf("%d",&n);
do
{
	c++;
	n=n/10;
}
while(n>0);
printf("\nDigits=%d",c);*/

//reverse of digits
/*int n,c=0,r;
printf("Enter Number = ");
scanf("%d",&n);
while(n>0)
{
	r=n%10;
	c=c*10+r;
	n=n/10;
}
printf("Reverse Of Digits =%d",c);*/

//Twin Prime
/*int n1,n2,i,c1=0,c2=0;
printf("Enter Two Number's = ");
scanf("%d%d",&n1,&n2);
if(n1-n2==2 || n2-n1==2)
{
i=1;
while(i<=n1)
{
    if(n1%i==0)
        c1++;
        i++;
}
i=1;
while(i<=n2)
{
    if(n2%i==0)
        c2++;
        i++;
}
if(c1==2 && c2==2)
printf("%d and %d are twin prime.",n1,n2);
else
printf("%d and %d are not twin prime.",n1,n2);
}
else
printf("%d and %d are not twin prime.",n1,n2);*/

//co-prime
/*int a,b,c,h;
printf("Enter 3 Number's =");
scanf("%d%d%d",&a,&b,&c);
h=a<b && a<c ? a:(b<c ? b: c);
while(a % h != 0 || b % h !=0 || c % h != 0)
  h--;
printf("H.C.F = %d \n",h);  
if(h==1)
printf("Co-Prime Numbers");
else
printf("Not Co-Prime Numbers");*/


//Palindrome Number
 /*int n,r,s=0,num;
 printf("Enter Number = ");
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
    printf("\n%d is not a Palindrome Number.",num);*/


// Armstrong Number
//  int n,num,c=0,r,s=0;
//  printf("Enter Number = ");
//  scanf("%d",&n);
//  num=n;
//  //for counting digits
//   for(;n>0;)
//  {
//   	n=n/10;
//   	c++;
//  }
//    printf("\nCount of its digits is %d",c);
// /*while(n>0)
// {
// 	c++;
// 	n=n/10;
// }*/
//  /*do
//  {
//   c++;
//   n/10;
//   }
//   while(n>0);*/
//   n=num;
// //for sum of digits
// while(n>0)
// {
//     r=n%10;
//     printf("\nr=%d",r);
//    // s=s+(r**c);
//     s=s+pow(r,c);
//     n=n/10;
// }
// printf("\nsum = %d",s);
//  if(s==num)
//     printf("\n %d is an Armstrong Number.",num);
//  else
//     printf("\n %d is not an Armstrong Number.",num);

//Strong Number
/*int n,d,sum=0,i,fact=1,num;
printf("Enter Any Number =");
scanf("%d",&n);
num=n;
while(n>0)
{
    d=n%10;
    for(i=1;i<=d;i++)
        fact=fact*i;
    sum=sum+fact;
    fact=1;
    n=n/10;
}
if(num==sum)
printf("%d is a strong number.",num);
else
printf("%d is not a strong number.",num);*/

//H.C.F.
/* int a,b,c,hcf;
printf("Enter 3 Number's =");
scanf("%d%d%d",&a,&b,&c);
hcf=a<b && a<c ? a:(b<c ? b: c);
while(a % hcf != 0 || b % hcf !=0 || c % hcf != 0)
  hcf--;
printf("H.C.F = %d",hcf); */

//L.C.M.
/*int a,b,c,lcm;
printf("Enter 3 Number's =");
scanf("%d%d%d",&a,&b,&c);
lcm=a>b &&  a>c?a:(b>c?b:c);
while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
{
lcm++;
}
printf("L.C.M. = %d",lcm); */


}