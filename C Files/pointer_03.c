//to check amicable using functions without pointer
/*#include<stdio.h>
int add_of_fact(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    if(n%i==0)
    sum=sum+i;
    return sum;
}
void main()
{
    int sum1,num1,sum2,num2;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);
    sum1=add_of_fact(num1);
    sum2=add_of_fact(num2);
    if(sum1==num2 && sum2==num1)
    printf("Amicable");
    else
    printf("Not An Amicable");
}*/

//to check amicable using functions with pointer
/*#include<stdio.h>
int add_of_fact(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    if(n%i==0)
    sum=sum+i;
    return sum;
}
void main()
{
    int *sum1,num1,*sum2,num2,*p,*q,s1,s2;
    sum1=&s1;
    sum2=&s2;
    p=&num1;
    q=&num2;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);
    *sum1=add_of_fact(*p);
    *sum2=add_of_fact(*q);
    if(*sum1==*q && *sum2==*p)
    printf("Amicable");
    else
    printf("Not An Amicable");
}*/

/*#include <stdio.h>
int check_prime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)
    if(n%i==0)
    c++;
    return c;
}
void check_twinprime(int n1,int n2)
{
    if(check_prime(n1)==0 && check_prime(n2)==0)
    if(n1-n2==2 || n2-n1==2)
    printf("\nTwin prime");
    else
    printf("\nNot twin prime");
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
    printf("Co_prime");
    else
    printf("Not Co_prime");
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
}*/