/*#include<stdio.h>
void lcm(int a,int b,int c)
{
    int lcm,hcf;
    lcm=a>b &&  a>c?a:(b>c?b:c);
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
        lcm++;
    hcf=a<b && a<c ? a:(b<c ? b: c);
    while(a % hcf != 0 || b % hcf !=0 || c % hcf != 0)
        hcf--;
    printf("H.C.F = %d\n",hcf);
    printf("L.C.M. = %d\n",lcm);
}
void main()
{
    //lcm(10,15,12);
    int a,b,c;
    printf("Enter Three Number's =\n");
    scanf("%d%d%d",&a,&b,&c);
    lcm(a,b,c);
}*/

//to check prime & perfect numbers
/*#include<stdio.h>
void factor(int n)
{
    int i,c=0,f=0,ft=1;
    for(i=1;i<=n/2;i++)
    {
       if(n%i==0)
       {
            c++;
            f+=i;
       }
    }
    printf("total number of factors = %d\n",c+1);
    if(c==1)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
    if(n==f)
    printf("%d is a perfect number.",n);
    else
    printf("%d is not a perfect number.",n);
}
void main()
{
    //factor(25);
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    factor(n);
}*/

//to find factorial
/*#include<stdio.h>
void factor(int n)
{
    int i,c=0,f=0,ft=1;
    for(i=1;i<=n;i++)
    {
       ft=ft*i;
    }
    printf("factorial of %d is %d\n",n,ft);
}
void main()
{
    //factor(25);
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    factor(n);
}*/

// sum of its digits
/*#include<stdio.h>
void sum(int n)
{
    int d,s=0;
    while(n>0)
    {
        d=n%10;
        s+=d;
        n=n/10;
    }
    printf("sum of its digits = %d",s);
}
void main()
{
    //sum(86539);
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);
    sum(n);
}*/

// to check amicable
/*#include<stdio.h>
void amicable(int a,int b)
{
    int i,s1=0,s2=0;
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
            s1+=i;
    }
    for(i=1;i<=b/2;i++)
    {
        if(b%i==0)
            s2+=i;
    }
    if(s2==a && s1==b)
        printf("%d and %d are amicable numbers.",a,b);
    else
        printf("%d and %d are not amicable number's.",a,b);
}
void main()
{
    amicable(1184,1210);
    // int a,b;
    // printf("Enter two number's =\n");
    // scanf("%d%d",&a,&b);
    // amicable(a,b);
}*/

// convert binary to decimal
/*#include <stdio.h>
void convertdec(int n)
{
    int d, dec = 0, i = 1;
    while (n > 0)
    {
        d = n % 10;
        dec = dec + d * i;
        i = i * 2;
        n = n / 10;
    }
    printf("Decimal Number = %d", dec);
}
void main()
{
    // convertdec(1101);
    int n;
    printf("Enter Binary Digit = ");
    scanf("%d", &n);
    convertdec(n);
}*/

//convert decimal to binary
/*#include<stdio.h>
void convertbin(int n)
{
    int d,i=1;
    long bin=0;
    int a=n;
    while(n>0)
    {
        d=n%2;
        n/=2;
        bin=bin+d*i;
        i*=10;
    }
    printf("Binary Digit of %d is %d\n",a,bin);
}
void main()
{
    //convertbin(47);
    int n;
    printf("Enter Any Decimal Digit = ");
    scanf("%d", &n);
    convertbin(n);
}*/

//convert decimal to octal
/*#include<stdio.h>
void convertoct(int n)
{
    int d,oct=0,i=1;
    int a=n;
    while(n>0)
    {
        d=n%8;
        n/=8;
        oct=oct+d*i;
        i*=10;
    }
    printf("Octal Digit of %d is %d",a,oct);
}
void main()
{
    //convertoct(947);
    int n;
    printf("Enter Any Decimal Digit = ");
    scanf("%d", &n);
    convertoct(n);
}*/

// convert oct to decimal
/*#include <stdio.h>
void convertdec(int n)
{
    int d, dec = 0, i = 1;
    while (n > 0)
    {
        d = n % 10;
        dec = dec + d * i;
        i = i * 8;
        n = n / 10;
    }
    printf("Decimal Number = %d", dec);
}
void main()
{
    // convertdec(1101);
    int n;
    printf("Enter octal Digit = ");
    scanf("%d", &n);
    convertdec(n);
}*/

//wap to perform arithmatic operation
/*#include<stdio.h>
void add(int a,int b)
{
    printf("Addition = %d\n",(a+b));
}
void sub(int a,int b)
{
    printf("Substraction = %d\n",(a-b));
}
void multi(int a,int b)
{
    printf("Multiplication = %d\n",(a*b));
}
void div(int a,int b)
{
    printf("Division = %d\n",(a/b));
}
void main()
{
    // add(10,4);
    // sub(10,4);
    // multi(10,4);
    // div(10,4);
    int a,b;
    printf("Enter Two Number's = ");
    scanf("%d%d",a,b);
    // add(a,b);
    // sub(a,b);
    // multi(a,b);
    // div(a,b);
}*/

//for printing matrix
// #include<stdio.h>
// #define r 3
// #define c 3

// void matrix(int a[r][c])
// {
//     int i,j,a[r][c];
//     // printf("Enter Sizeof Row & Column =\n");
//     // scanf("%d%d",&r,&c);
//     printf("Enter values in %d X %d matrix =\n",r,c);
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             scanf("%d",&a[i][j]);
//     }
//     printf("Matrix:\n");
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//             printf("%d\t",a[i][j]);
//         printf("\n");
//     }
// }
// void main()
// {
//     int a[r][c];
//     matrix(a[r][c]);
// }