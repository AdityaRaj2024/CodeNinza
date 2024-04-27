#include<stdio.h>
#include<string.h>
void main()
{
    //1.1 - right angled triangle
    /*char str[25];
    int i,j,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }*/

    //1.2 -increasing and decreasing
    /*char str[25];
    int i,j,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    for(i=l-2;i>=0;i--)
    {
         for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }*/

    //2.1 - Mirrered Right Traingle
    /*char str[20];
    int r,c ,s,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(r=0;r<l;r++)
        {
            for(s=0;s<l-r;s++)
                printf(" ");
            for(c=0;c<=r;c++)
                printf("%c",str[c]);
            printf("\n");
        }*/
    
    //2.2
    /*char str[20];
    int r,c ,s,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(r=0;r<l;r++)
        {
            for(s=0;s<l-r;s++)
                printf(" ");
            for(c=0;c<=r;c++)
                printf("%c",str[c]);
            printf("\n");
        }
    for(r=l-2;r>=0;r--)
        {
            for(s=0;s<l-r;s++)
                printf(" ");
            for(c=0;c<=r;c++)
                printf("%c",str[c]);
            printf("\n");
        }*/
    
    //3.1 - Inverted 
    /*char str[25];
    int i,j,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    // for(i=0;i<l;i++)
    // {
    //     for(j=l;j>=i;j--)
    //     {
    //         if(j>1)
    //             printf("%c",str[i]);
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    for(i=l-1;i>=0;i--)
    {
         for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }*/

    //3.2
    /*char str[25];
    int i,j,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    for(i=1;i<l;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);
        printf("\n");
    }*/

    //4.1 -Inverted with mirrered
    /*char str[25];
    int l,s,c,r;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(r=l-1;r>=0;r--)
    {
        for(s=0;s<l-r;s++)
            printf(" ");
        for(c=0;c<=r;c++)
            printf("%c",str[c]);
        printf("\n");
    }*/

    //4.2
    /*char str[25];
    int l,s,c,r;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(r=l-1;r>=0;r--)
        {
            for(s=0;s<l-r;s++)
                printf(" ");
            for(c=0;c<=r;c++)
                printf("%c",str[c]);
            printf("\n");
        }
    for(r=1;r<l;r++)
        {
            for(s=0;s<l-r;s++)
                printf(" ");
            for(c=0;c<=r;c++)
                printf("%c",str[c]);
            printf("\n");
        }*/

    
    //5.1 - string pyramid
    /*char str[10];
    int l,s,t,r;
    printf("Enter String = ");
    gets(str);
    l=strlen(str);
    for(r=0;r<l;r++)
    {
        for(s=0;s<=l-r;s++)
        {
            printf(" ");
        }
        for(t=0;t<=r-s+7;t++)
        {
            printf("%c",str[r]);
        }
        printf("\n");
    }*/

    // char str[10];
    // int l,i,j,k;
    // printf("Enter String = ");
    // gets(str);
    // l=strlen(str);
    // // printf("%d",l);
    // for(i=0;i<l;i++)
    // {
    //     for(j=0;j<(l-i);j++)
    //     printf(" ");
    //     for(k=0;k<2*(i-1);k++)
    //     printf("%c",str[k]);
    //     printf("\n");
    // }

    /*char str[20];
    int r,c ,s,l;
    printf("Enter String = ");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(r=0;r<l;r++)
    {
        for(s=0;s<(l-r)/2;s++)
            printf(" ");
        for(c=0;c<=r;c++)
            printf("%c",str[c]);
        printf("\n");
    }*/
}