#include <stdio.h>
#include <string.h>

void main()
{
    int size;
    printf("Enter Size Of String = ");
    scanf("%d",&size);
    char str[size];
    
    puts("Enter String ");
    //gets(str);
    scanf("%s",str[size]);
    for(int i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    puts(str);
    printf("%s",str);
}