// #include<stdio.h>
// void main()
// {
//     int r,c;
//     printf("Enter Size Of row & column =\n");
//     scanf("%d%d",&r,&c);
//     int *m,i,j;
//     int a[10][10];
//     m=&a[0][0];
//     printf("Enter the value of matrix :\n");
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             scanf("%d",m+i*c+j);
//         }
//     }
//     printf("Matrix Is :\n");
//     for(i=0;i<r;i++)
//     {
//         for(j=0;j<c;j++)
//                 printf("%d\t",(*m+i*c+j));
//         printf("\n");
//     }
// }
#include<stdio.h>
void main()
{
    int r,c;
    printf("Enter Size Of row & column =\n");
    scanf("%d%d",&r,&c);
    int *m,i,j;
    int a[10][10];
    m=&a[0][0];
    printf("Enter the value of matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",m+i*c+j);
        }
    }
    printf("Matrix Is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
                printf("%d\t",*(m+i*c+j));
                //printf("%d\t",*(*(m+i)+j));
        printf("\n");
    }
}