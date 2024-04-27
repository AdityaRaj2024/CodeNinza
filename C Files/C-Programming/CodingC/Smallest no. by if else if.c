#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter Three nos.:");    
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b & a<c)
    printf("%d is smallest",a);
    
    else if(b<c)
    printf("%d is smallest",b);
    else
    printf("%d is smallest",c);
    
    
    
}