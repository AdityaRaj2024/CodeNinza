#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    // wap in c to inpt any string after that print greatest character using pointer
    /*char *str,gt;
    int i;
    str=(char*)malloc(sizeof(char)*100);
    printf("Enter Any String = ");
    scanf("%s",str);
    gt=*str;
    for(i=0;*(str+i)!='\0';i++)
    {
        if(*(str+i)>gt)
            gt=*(str+i);
    }
    printf("greatest character  = %c",gt);*/

    // sorting
    /*char *str,n;
    int i, j, l;
    str = (char *)malloc(sizeof(char) * 100);
    printf("Enter Any String = ");
    scanf("%s", str);
    l = strlen(str);
    printf("Length of string = %d\n", l);
    for (i = 0; i < l - 1; i++)
    {
        for (j = i; j < l; j++)
        {
            if (*(str + i) > *(str + j))
            {
                n = *(str + i);
                *(str + i) = *(str + j);
                *(str + j) = n;
            }
        }
    }
    printf("In Ascending Order\n");
    for (i = 0; i <= l; i++)
        printf("%c\t", *(str + i));
    printf("\nIn Descending Order\n");
    for (i = l - 1; i >= 0; i--)
        printf("%c\t", *(str + i));*/

    //searching
    char *str,ch;
    int i,c=0;
    str = (char *)malloc(sizeof(char) * 100);
    printf("Enter Any String = ");
    //gets(str);
    scanf("%s",str);
    fflush(stdin);
    printf("Enter Any character = ");
    scanf("%c",&ch);
    for(i=0;*(str+i)!='\0';i++)
    {
        if(*(str+i)==ch)
            c++;
    } 
    if(c>0)  
        printf("%c is found %d times.",ch,c);
    else
         printf("%c is not found.",ch);
}
