// /*
// 15-09-2023
// Merge Sort :- two sorted lists, merge like resultant will be sorted.
// */

#include<stdio.h>
#define s1 4
#define s2 5
// void merge(int a[s1],int b[s2],int c[s1+s2])
// {
//     int i=0,j=0,k=0;
//     while(i<s1 && j<s2)
//     {
//         while(a[i]<=b[j])
//         {
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         while(a[i]>b[j])
//         {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//     if(i>=s1)
//     {
//         while(j<s2)
//         {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//     else
//     {
//         while(i<s1)
//         {
//             c[k]=a[i];
//             k++;
//             j++;
//         }
//     }
// }

void merge(int a[s1], int b[s2], int c[s1 + s2])
{
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < s1)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int a[s1],b[s2];//,i,c[s1+s2];
	int i;
	int c[s1+s2];
    printf("Enter Value in array a in ascending order :-\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Value in array b in ascending order :-\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    merge(a,b,c);
    printf("After Merging :-\n");
    for(i=0;i<s1+s2;i++)
    {
        printf("%d\t",c[i]);
    }
	return 0;
}

// #include<stdio.h>
// #define s1 4
// #define s2 4
// void merge(int a[s1],int b[s2],int c[s1+s2])
// {
//     int i=0,j=0,k=0;
//     while(i<s1 && j<s2)
//     {
//         while(a[i]<=b[j])
//         {
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         while(a[i]>b[j])
//         {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//     if(i>=s1)
//     {
//         while(a[i]>b[j])
//         {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }
//     else
//     {
//         while(a[i]<b[j])
//         {
//             c[k]=a[i];
//             k++;
//             j++;
//         }
//     }
// }

// void main()
// {
//     int a[s1],b[s2],i,c[s1+s2];
//     printf("Enter Value in array a in ascending order :- ");
//     for(i=0;i<s1;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter Value in array b in ascending order :- ");
//     for(i=0;i<s2;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     merge(a,b,c);
//     printf("After Merging :-\n");
//     for(i=0;i<s2;i++)
//     {
//         printf("%d\t",b[i]);
//     }

// }


