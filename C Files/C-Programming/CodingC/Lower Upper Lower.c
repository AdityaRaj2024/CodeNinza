#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any Alphabet Character:");
    scanf("%c",&ch);
    if(ch>="65" && ch>="90")
    {
     if(ch=65+32)
     printf("%c is lower chat.",ch);  
    
    
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
         ch=ch-31;
         printf("%c is opposite chars.",ch);
        
        }
    
    }


}