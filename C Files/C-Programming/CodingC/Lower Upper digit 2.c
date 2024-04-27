#include<stdio.h>

void main()
{
    char ch;
   
    printf("Enter a any Character:"); 
    scanf("%c",&ch);
    

    if(ch>='A' && ch<='Z')
    printf("%c is Upper Character",ch);
    
    else if(ch>='a' && ch<='z')
    printf("%c is Lower Character",ch);
    
    else if(ch>='0'&& ch<='9')
    printf("digit");
    else
    printf("not alphabet");


}