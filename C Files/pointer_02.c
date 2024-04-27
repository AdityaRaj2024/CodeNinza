#include<stdio.h>
void main()
{
    /*int a,b,*p,*q,add,sub,multi,div;
    printf("Enter Two Number's =\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    add=*p+*q;
    sub=*p-*q;
    multi=*p**q;
    div=*p / *q;
    printf("Addition = %d\nSubtraction= %d\nMultiplication=%d\nDivision =%d",add,sub,multi,div);*/

    //sum of digits
    /*int a ,s=0,r,*p;
    printf("Enter Any Number = ");
    scanf("%d",&a);
    p=&a;
    while(*p>0)
    {
        r=*p%10;
        s=s+r;
        *p=*p/10;
    }
    printf("Sum Of Digits =%d",s);*/

    //  int a,*s=0,*r,*p;
    // printf("Enter Any Number = ");
    // scanf("%d",&a);
    // p = &a;
    // while(*p>0)
    // {
    //     *r=*p % 10;
    //     *s=*s + *r;
    //     *p=*p/10;
    // }
    // printf("Sum Of Digits =%d",*s);

    //to check amicable
    /*int a,b,*p,*q,s1=0,s2=0,i;
    printf("Enter Two Number's = ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    for(i=1;i<=*p/2;i++)
    {
        if(*p%i==0)
            s1=s1+i;
    }
     for(i=1;i<=*q/2;i++)
    {
        if(*q%i==0)
            s2=s2+i;
    }
    if(s1==*q && s2==*p)
        printf("%d & %d are Amicable",*p,*q);
    else
        printf("%d & %d are not Amicable",*p,*q);*/

    // int a,b,*p,*q,*s1=0,*s2=0,*i;
    // printf("Enter Two Number's = ");
    // scanf("%d%d",&a,&b);
    // p=&a;
    // q=&b;
    // for(*i=1;*i<=(*p)/2;(*i)++)
    // {
    //     if(*p% *i==0)
    //         *s1 = *s1 + *i;
    // }
    //  for(*i=1;*i<=(*q)/2;(*i)++)
    // {
    //     if(*q % *i==0)
    //         *s2= *s2 + *i;
    // }
    // if(*s1==*q && *s2==*p)
    //     printf("Amicable");
    // else
    //     printf("Not Amicable");

}