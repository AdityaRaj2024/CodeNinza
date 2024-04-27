#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any Upper Character:");
    scanf("%c",&ch);
    printf("%c=Upper Character \n",ch);
    ch=ch+32;
    printf("Corresponding Lower Character=%c",ch);


}