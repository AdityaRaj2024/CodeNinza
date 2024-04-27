#include<stdio.h>
void main()
{
    int a,b,*p,*q,i,j,c1=0,c2=0;
    printf("Enter Two Number's =\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p-*q==2 || *q-*p== 2)
    {
        for(i=1;i<=*p/2;i++)
        {
            if(*p%i==0)
                c1++;
        }
        for(j=1;j<=*q/2;j++)
        {
            if(*q%j==0)
                c2++;
        }    
        if(c1==1 && c2==1)
            printf("Twin Prime.");
        else
            printf("Not Twin Prime");
    }
     else
        printf("Not Twin Prime");

}