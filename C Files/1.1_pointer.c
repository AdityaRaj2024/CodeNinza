#include <stdio.h>
int check_prime(int n)
{
    int p=0;
    int c=0;
    for(int i=2;i<=n/2;i++)
    if(n%i==0)
    c++;
    if(c==0)
    p++;
    return p;
}
void check_twinprime(int n1,int n2)
{
    if(check_prime(n1)==1 && check_prime(n2)==1)
    if(n1-n2==2 || n2-n1==2)
    puts("\nTwin prime");
    else
    puts("\nNot twin prime");
}
int hcf(int n1,int n2)
{
    int hcf=n1<n2?n1:n2;
    while(n1%hcf!=0 || n2%hcf!=0)
    hcf--;
    return hcf;
}
void c_prime(int n1,int n2)
{
    if(hcf(n1,n2)==1)
    puts("Co_prime");
    else
    puts("Not Co_prime");

}

void main()
{
    int *n1,*n2,num1,num2;
    puts("Enter two number:");
    scanf("%d%d",&num1,&num2);
    n1=&num1;
    n2=&num2;
    c_prime(*n1,*n2);
    check_twinprime(*n1,*n2);
}
