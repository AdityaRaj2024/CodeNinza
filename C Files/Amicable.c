#include <stdio.h>
void main()
{
    int a,b,*p,*q,*s1=0,*s2=0,*i;
    printf("Enter Two Number's = ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    for((*i)=1;(*i)<=(*p)/2;(*i)++)
    {
        if((*p)% (*i)==0)
            (*s1) = (*s1) + (*i);
    }
     for((*i)=1;(*i)<=(*q)/2;(*i)++)
    {
        if((*q) % (*i)==0)
            (*s2)= (*s2) + (*i);
    }
    if((*s1)==(*q) && (*s2)==(*p))
        printf("Amicable");
    else
        printf("Not Amicable");
}