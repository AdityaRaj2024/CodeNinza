#include<stdio.h>
#include<string.h>
void main()
{
    //String Into Lower Case
    /*char str[25];
    int i;
    puts("Enter String ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    puts(str);*/
    
    //String Into Upper Case
    /*char str[25];
    int i;
    puts("Enter String ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    puts(str);*/

    //char str;
    // int i;
    // // printf("Enter Size Of String = ");
    // // scanf("%d",&size);
    // char str[90];
    // // puts("Enter String ");
    // // gets(str);
    // printf("Enter String = ");
    // scanf("%[^\n]",str);
    // for(i=0;str[i]!='\0';i++)
    //     if(str[i]>='a' && str[i]<='z')
    //         str[i]=str[i]-32;
    // //puts(str);
    // printf("%s",str);
    
    //Convert Into Sentence Case
    /*char str[25];
    int i,l;
    printf("Enter String = ");
    gets(str);
    l=strlen(str);
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;
    for(i=1;i<l;i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    printf("%s",str);*/

    //Convert Into Title Case
    /*char str[54];
    int i,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    strlwr(str);
    l=strlen(str);
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;
    for(i=1;i<l;i++)
    {
        if(str[i]==' ')
        {
            str[i+1]=str[i+1]-32;
            i++;
        }
    }
    printf("%s",str);*/

    //converts string into toggle case
    /*char str[54];
    int i,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    printf("%s",str);*/

    //converts string into abbreviation case
    /*char str[54];
    int i,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    strupr(str);
    printf("%c.",str[0]);
    for(i=1;i<l;i++)
        if(str[i]==' ')
            printf("%c.",str[i+1]);*/

    /*char str[54];
    int i,j,l;
    printf("Enter String = ");
    gets(str);
    l=strlen(str);
    strupr(str);
    for(j=l-1;j>0;j--)
        if(str[j]==' ')
        break;
    printf("%c.",str[0]);
    for(i=1;i<j;i++)
        if(str[i]==' ')
            printf("%c.",str[i+1]);
    for(i=j+1;i<j+2;i++)
        printf("%c",str[i]);
    for(i=j+2;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            {
            str[i]=str[i]+32; 
            printf("%c",str[i]);
            }
    }*/


}