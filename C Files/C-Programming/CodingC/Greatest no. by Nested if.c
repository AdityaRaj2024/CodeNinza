#include<stdio.h>

void main()
{
    int a,b,c,gt;
    printf("Enter Three Nos.:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is greatest",a);
    else
    {
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is greatest",c);
    
    }
   
    
    

}