#include<stdio.h>

void main()
{
    int n;
    printf("Enter any Number:");
    scanf("%d",&n);
    
    
    
    if(n%2==0)
    {
        if(n>0)
        {
        printf("Even +ve");
        }
        else
        printf("Even-ve");   
    
    }

    else
    {
        if(n>0)
        printf("Odd +ve");
        else
        printf("Odd -ve");
    
    
    }
   
}