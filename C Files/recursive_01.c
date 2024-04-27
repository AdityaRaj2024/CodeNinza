//factorial of a number
/*#include<stdio.h>
int findfact(int n)
{
    static int fact=1;
    if(n>=1)
    {
        fact=fact*n;
        n=findfact(n-1);
    }
    return (fact);
}
void main()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    printf("Factorial Value of %d = %d\n",n,findfact(n));
}*/

//to find reverse using iterative function
/*#include<stdio.h>
int findreverse(int n)
{
    int d,r=0;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return r;
}
void main()
{
    printf("Reverse = %d\n",findreverse(4875));
}*/

//to find reverse and sum of its digits using recursive function
/*#include<stdio.h>
int findreverse(int n)
{
    int d;
    static int r=0;
    if(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=findreverse(n/10);
    }
    return r;
}
int sum1(int n)
{
    static int sum=0;
    if(n>0)
    {
        int d=n%10;
        sum +=d;
        n=sum1(n/10);
    }
    return(sum);
}
void main()
{
    int n;
    printf("Enter Any Value = ");
    scanf("%d",&n);
    printf("Reverse = %d\n",findreverse(n));
    printf("Sum of its digits = %d\n",sum1(n));
}*/

//factorial of a number with base condition
/*#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}
void main()
{
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    printf("Factorial Value of %d = %d\n",n,factorial(n));
}*/

//to print power of any number
/*#include<stdio.h>
int power(int n,int p)
{
    if(p==0)
        return 1;
    else
        return n*power(n,p-1);
}
void main()
{
    int n,p;
    printf("Enter Any Number & Power :\n");
    scanf("%d%d",&n,&p);
    printf("Power of %d on %d : %d\n",p,n,power(n,p));
}*/

//to print fibanocci series
/*#include<Stdio.h>
int fibonocci (int n)
{
    //int s,n;
    if(n==0)
        return 0; 
    if(n==1)
        return 1;
    return fibonocci(n-1)+fibonocci(n-2);
}
void main()
{
    int n,t;
    printf("Enter Number Of Terms : ");
    scanf("%d",&t);
    for(n=0;n<t;n++)
        printf("%d\t",fibonocci(n));
}*/

// #include<Stdio.h>
// int fibonocci (int n,int f,int s)
// {
//     //int s,n;
//     if(n==0)
//         return f; 
//     if(n==1)
//         return s;
//     return fibonocci(n-1)+fibonocci(n-2);
// }
// void main()
// {
//     int n,t,f,s;
//     printf("Enter First two terms :\n");
//     scanf("%d%d",&f,&s);
//     printf("Enter Number Of Terms :");
//     scanf("%d",&t);
//     for(n=0;n<t;n++)
//         printf("%d\t",fibonocci(n,f,s));
// }

//sum of n natural numbers
/*#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
void main()
{
    int n;
    printf("Enter Number of terms = ");
    scanf("%d",&n);
    printf("Sum of %d terms = %d",n,sum(n));
}*/

//to find sum of digits and reverse using recursive function with base condition
// #include<stdio.h>
// int findreverse(int n)
// {
//     int r=0,d;
//     if(n<0)
//         return findreverse(n);
//     else
//     {
//         d=n%10;
//         r=r*10+d;
//         n=n/10;
//     }   
// }
// void main()
// {
//     int n,r;
//     printf("Enter Any Value = ");
//     scanf("%d",&n);
//     printf("Reverse = %d\n",findreverse(n));
//}