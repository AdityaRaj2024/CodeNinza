#include<stdio.h>
#include<stdlib.h>
void main()
{
    //wap in c to input any string after that print each character using pointer
    /*char *str;
    int i;
    str=(char*)malloc(sizeof(char)*50);
    printf("Enter Any String = ");
    scanf("%s",str);
    // str=(char*)calloc(sizeof(char)*50);
    // puts(Enter String);
    printf("all characters are\n");
    for(i=0;*(str+i)!='\0';i++)
    {
        printf("%c\t",*(str+i));
    }
    free(str);*/

    //wap in c to input two string after that check both are equal or not without library function
    // char *str1,*str2;
    // int i,j,c=0;
    // str1=(char*)malloc(sizeof(char)*50);
    // str2=(char*)malloc(sizeof(char)*50);
    // printf("Enter Two String =\n");
    // scanf("%s%s",str1,str2);
    // for(i=0,j=0;*(str1+i)!='\0',*(str2+j)!='\0';i++,j++)
    // {
    //     //for(j=0;*(str2+j)!='\0';j++)
    //         if(*(str1+i)!=*(str2+i))
    //             c++;
    // }
    // {
    //         if(c>0)
    //             printf("Strings are not equal");
    //         else
    //             printf("Strings are equal");
    // }

    /*char *str1,*str2;
    int i,flag=0,l1=0,l2=0;
    str1=(char*)malloc(sizeof(char)*50);
    str2=(char*)malloc(sizeof(char)*50);
    printf("Enter Two String =\n");
    scanf("%s%s",str1,str2);
    for(l1=0;*(str1+l1)!='\0';l1++);
    for(l2=0;*(str2+l2)!='\0';l2++);
    if(l1!=l2)
        printf("Strings are not equal");
    else
    {
    for(i=0;*(str1+i)!='\0';i++)
    {
        if(*(str1+i)!=*(str2+i))
            flag=1;
            break;
    }
    if(flag==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    }*/

    // char *str1,*str2;
    // int i,flag=0,l1=0,l2=0;
    // str1=(char*)malloc(sizeof(char)*50);
    // str2=(char*)malloc(sizeof(char)*50);
    // printf("Enter Two String =\n");
    // scanf("%s%s",str1,str2);

    // for(l1=0;*(str1+l1)!='\0';l1++);
    // for(l2=0;*(str2+l2)!='\0';l2++);
    // if(l1!=l2)
    //     printf("Strings are not equal");
    // else
    // {
    // for(i=0;*(str1+i)!='\0';i++)
    // {
    //     if(*(str1+i)!=*(str2+i))
    //         flag=1;
    //         break;
    // }
    // if(flag==0)
    //     printf("Strings are equal");
    // else
    //     printf("Strings are not equal");
}