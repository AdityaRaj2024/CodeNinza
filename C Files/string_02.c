#include<stdio.h>
// #include<string.h>
void main()
{
    //To Check alphabet is available or not
    /*char str[23],ch;
    int i,flag=0;
    printf("Enter Any String = ");
    gets(str);
    printf("Enter Any Character = ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Character is found.");
    else
    printf("Character is not found.");*/

    //To Print in reverse order
    /*char str[25];
    int i,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    printf("Reverse Order = ");
    for(i=l;i>=0;i--)
    {
        printf("%c",str[i]);
    }*/

    //To check wheather a string is palindrome or not
    /*char word[25];
    int i,j,k,lt,c=0,flag=0;
    printf("Enter String = ");
    gets(word);
    //lt=strlen(word);
   // printf("Reverse Order = ");
    // for(k=0;k<=lt-1;k++)
    // {
    //     for(j=lt-2;j>0;j--)
    //     {
    //         if(word[j]!=word[k])
    //         {
    //             flag=1;
    //             break;
    //         }
    //     }
    // }
    // for(j=0;j<lt;j++)
    // {
    //     if(word[j]!=word[lt-1])
    //     {
    //         flag=1;
    //         break;
    //     }
    // }
     for(i=0;word[i]!='\0';i++)
    {
        c++;
    }
    for(j=0,k=c-1;j<k;j++,k--)
    {
        if(word[j]!=word[k])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("%s is a palindrome.",word);
    else
    printf("%s is not a palindrome.",word);*/

    //WAP a program in c to compare two string
    char str[2][25];
    int i,j,c;
    printf("Enter Two String =\n");
    for(i=0;i<2;i++)
      gets(str[i]);
    printf("Inputted String Are =\n");
    for(i=0;i<2;i++)
        printf("%s\n",str[i]);
    for(i=0;i<2;i++)
    {
        for(i=0;str[i]!='\0';i++)
            c++;
    printf("Length Of String %d = %d\t",i,c);
    }
   


}
