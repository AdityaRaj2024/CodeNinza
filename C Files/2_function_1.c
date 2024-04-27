//for finding greatest number
/*#include<stdio.h>
int a,b,c; //global variable
void input()
{
    printf("Enter 3 Number's = ");
    scanf("%d%d%d",&a,&b,&c);
}
int findgreatest()
{
    int gt;//Local Variable
    gt=(a>b && a>c ? a:(b>c ? b:c));
    return(gt);
}
void main()
{
    input();
    printf("Greatest Number = %d",findgreatest());
}*/


//for finding lcm
/*#include<stdio.h>
int a,b,c; //global variable
void input()
{
    printf("Enter 3 Number's = ");
    scanf("%d%d%d",&a,&b,&c);
}
int findlcm()
{
    int lcm;
    lcm=a>b &&  a>c?a:(b>c?b:c);
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
    {
        lcm++;
    }
    return(lcm);
}
void main()
{
    input();
    printf("L.C.M. = %d",findlcm());
}*/

//for finding hcf
/*#include<stdio.h>
int a,b,c; //global variable
void input()
{
    printf("Enter 3 Number's = ");
    scanf("%d%d%d",&a,&b,&c);
}
int findhcf()
{
    int hcf ;
    hcf=a<b && a<c ? a:(b<c ? b: c);
    while(a % hcf != 0 || b % hcf !=0 || c % hcf != 0)
        hcf--;
    return(hcf);
}
void main()
{
    input();
    printf("H.C.F = %d",findhcf());
}*/

//for finding lcm & hcf
/*#include<stdio.h>
int a,b,c; //global variable
void input()
{
    printf("Enter 3 Number's =\n");
    scanf("%d%d%d",&a,&b,&c);
}
int findlcm()
{
    int lcm;
    lcm=a>b &&  a>c?a:(b>c?b:c);
    while(lcm%a!=0 || lcm%b!=0 || lcm%c!=0)
        lcm++;
    return(lcm);
}
int findhcf()
{
    int hcf ;
    hcf=a<b && a<c ? a:(b<c ? b: c);
    while(a % hcf != 0 || b % hcf !=0 || c % hcf != 0)
        hcf--;
    return(hcf);
}
void main()
{
    input();
    printf("H.C.F = %d\n",findhcf());
    printf("L.C.M. = %d\n",findlcm());
}*/

//for checking strong number
#include<stdio.h>
int a; //global variable
void input()
{
    printf("Enter Any Number = ");
    scanf("%d",&a);
}
int strong()
{
    input();
	int i,d,n,f=1;
    int s=0;
    n=a;
    while(n>0)
    {
        d=n%10;
        for(i=1;i<=d;i++)
            f=f*i;
        s=s+f;
        f=1;
        n=n/10;
    }
    return (s);
}
void main()
{
    if(a==strong())
    printf("%d is a strong number.",a);
    else
    printf("%d is not a strong number.",a);
}

//for amicable no.
// int a,b;
// void input()
// {
//     printf("Enter Two Number = ");
//     scanf("%d%d",&a,&b);
// }
// int amicable()
// {
//     input();
//     int s1,s2,i;
//     for(i=1;i<=a/2;i++)
//     {
//         if(a%i==0)
//             s1+=i;
//     }
//     for(i=1;i<=b/2;i++)
//     {
//         if(b%i==0)
//             s2+=i;
//     }
//     return (s1,s2);
// }
// void main()
// {
//     if(s1)
// }