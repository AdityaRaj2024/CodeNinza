#include<stdio.h>

void main()
{
    int n;
    printf("Enter any Number:");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("Even Number \n");
    
    }
    
    else
    { printf("Odd Number \n");
      printf("%d is Odd Number",n);
    }
}