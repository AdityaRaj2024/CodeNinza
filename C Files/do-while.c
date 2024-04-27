#include<stdio.h>
void main()
{
//Count Of Digits
int n,c=0;
printf("Enter Any Number = ");
scanf("%d",&n);
do
{
    c++;
    n=n/10;
}
 while (n>0);
printf("Digits = %d",c);



}