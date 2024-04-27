#include<stdio.h>
#include<string.h>
void main()
{
    //1.1-right angled triangle
    /*char word[20];
    int i,j,l;
    printf("Enter Any String =");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=0;j<i+1;j++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //1.2-right angled triangle - increasing and decreasing
    /*char word[20];
    int i,j,l;
    printf("Enter Any String = ");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=0;j<i+1;j++)
            printf("%c",word[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=0;j<i+1;j++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //2.1-Mirrered right angled triangle
    /*char word[20];
    int i,j,k,l;
    printf("Enter Any String =");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<i+1;k++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //2.2-Mirrered right angled triangle - increasing and decresing
    /*char word[20];
    int i,j,k,l;
    printf("Enter Any String = ");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<i+1;k++)
            printf("%c",word[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<i+1;k++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //3.1-inverted
    /*char str[20];
    int i,j,l;
    printf("Enter Any String = ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=l-i;j>0;j--)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //3.2-inverted - increasing & decreasing
    /*char str[20];
    int i,j,l;
    printf("Enter Any String = ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=l-i;j>0;j--)
            printf("%c",str[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=l-i;j>0;j--)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //4.1 - mirrered inverted
    /*char str[25];
    int l,i,j,k;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l+i;j++)
            printf(" ");
        for(k=l-i;k>0;k--)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //4.2
    /*char str[25];
    int l,i,j,k;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l+i;j++)
            printf(" ");
        for(k=l-i;k>0;k--)
            printf("%c",str[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=0;j<l+i;j++)
            printf(" ");
        for(k=l-i;k>0;k--)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //5.1-mirrered inverted - reverse
    /*char str[20];
    int i,j,k,l;
    printf("Enter Any String = ");
    gets(str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //5.2
    /*char str[20];
    int i,j,k,l;
    printf("Enter Any String = ");
    gets(str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%c",str[i]);
        printf("\n");
    }
    for(i=1;i<l;i++)
    {
        for(j=0;j<l-i;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //6.1 - Pyramid
    /*char word[20];
    int i,j,k,l;
    printf("Enter Any String = ");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=1;j<l-i;j++)
            printf(" ");
        for(k=1;k<2*(i+1);k++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //6.2
    /*char word[20];
    int i,j,k,l;
    printf("Enter Any String = ");
    gets(word);
    l=strlen(word);
    for(i=0;i<l;i++)
    {
        for(j=1;j<l-i;j++)
            printf(" ");
        for(k=1;k<2*(i+1);k++)
            printf("%c",word[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=1;j<l-i;j++)
            printf(" ");
        for(k=1;k<2*(i+1);k++)
            printf("%c",word[i]);
        printf("\n");
    }*/

    //7.1 - inverted pyramid
    /*char str[25];
    int l,i,j,k;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=2*(l-i);k>1;k--)
            printf("%c",str[i]);
        printf("\n");
    }*/

    //7.2
    /*char str[25];
    int l,i,j,k;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=2*(l-i);k>1;k--)
            printf("%c",str[i]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=2*(l-i);k>1;k--)
            printf("%c",str[i]);
        printf("\n");
    }*/

}
