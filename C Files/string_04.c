#include<string.h>
#include<stdio.h>
#define size 4
void main()
{
    //string sorting
    /*char str[size][30];
    char temp[30];
    int i,j;
    printf("Enter %d Strings =\n",size);
    for(i=0;i<size;i++)
        gets(str[i]);
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            
        }
    }
    printf("Sorted Strings Are \n");
    for(i=0;i<size;i++)
        printf("%s\n",str[i]);*/

    /*int n;
    printf("Enter Number of String's = ");
    scanf("%d",&n);
    char str[n][30];
    char temp[30];
    int i,j;
    printf("Enter %d Strings =\n",n);
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
        //gets(str[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            
        }
    }
    printf("Sorted Strings Are \n");
    for(i=0;i<n;i++)
        printf("%s\n",str[i]);*/

    //string searching = linear searching
    /*char str[size][30];
    char src[30];
    int i;
    printf("Enter %d Strings =\n",size);
    for(i=0;i<size;i++)
        {
            gets(str[i]);
            strlwr(str[i]);
        }
    printf("Enter Search String = ");
        gets(src);
    strlwr(src);
    for(i=0;i<size;i++)
    {
        if(strcmp(str[i],src)==0)
        {
            printf("%s is Found.",src);
            break;
        }
    }
    if(i==size)
    printf("%s Is Not Found.",src);*/

    //Binary Searching = for sorted string in ascending order
    /*char str[size][30];
    char src[30];
    int min=0,max=size-1,mid,i;
    printf("Enter %d Strings In Ascending Order =\n",size);
    for(i=0;i<size;i++)
        gets(str[i]);
    for(i=0;i<size;i++)
        strupr(str[i]);
    printf("Enter Search String = ");
    gets(src);
    strupr(src);
    while(min<=max)
    {
        mid=(min+max)/2;
        if(strcmp(str[mid],src)==0)
        {
            printf("%s is Found.",src);
            break;
        }
        if(strcmp(src,str[mid])>0)
            min=mid+1;
        if(strcmp(src,str[mid])<0)
            max=mid-1;
    }
    if(min>max)
        printf("%s Is Not Found.",src);*/

    //Binary Searching = for unsorted string
    /*char str[size][30];
    char src[30],temp[30];
    int min=0,max=size-1,mid,i,j;
    printf("Enter %d Strings =\n",size);
    for(i=0;i<size;i++)
        gets(str[i]);
    for(i=0;i<size;i++)
        strupr(str[i]);
    printf("Enter Search String = ");
    gets(src);
    strupr(src);
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    while(min<=max)
    {
        mid=(min+max)/2;
        if(strcmp(str[mid],src)==0)
        {
            printf("%s is Found.",src);
            break;
        }
        if(strcmp(src,str[mid])>0)
            min=mid+1;
        if(strcmp(src,str[mid])<0)
            max=mid-1;
    }
    if(min>max)
        printf("%s Is Not Found.",src);*/
}