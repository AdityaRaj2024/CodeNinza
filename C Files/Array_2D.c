#include<stdio.h>
#define row 3
#define col 3
void main()
{
    int n[row][col];
    int r,c;
    printf("Enter Values in %d X %d matrix =\n",row,col);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&n[r][c]);
    printf("Matrix\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%d\t",n[r][c]);
            printf("\n");
        }
    //Transpose Matrix
    printf("\nTranspose Matrix\n");
     for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%d\t",n[c][r]);
            printf("\n");
        }
    //Diagonal Matrix
    printf("\nDiagonal Matrix =\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
            {
                if(r==c)
                    printf("%d\t",n[r][c]);
                else
                    printf("0\t");
            }
            printf("\n");
        }

    //Addition Of Matrix
    /*int a[row][col];
    int b[row][col];
    int z[row][col];
    int r,c;
    printf("Enter Values in first %d X %d matrix = ",row,col);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&a[r][c]);
    printf("Enter Values in second %d X %d matrix = ",row,col);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&b[r][c]);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            z[r][c]=a[r][c]+b[r][c];
    printf("Addition Of Matrix =\n");
    for (r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
            printf("%5d",z[r][c]);
        printf("\n");
    }*/

    //Multiplication Of Matrix
    /*int a[row][col];
    int b[row][col];
    int z[row][col];
    int r,c,s,k;
    printf("Enter Values in first %d X %d matrix = ",row,col);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&a[r][c]);
    printf("Enter Values in second %d X %d matrix = ",row,col);
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&b[r][c]);
    printf("\nFirst Matrix\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%5d",a[r][c]);
            printf("\n");
        }
     printf("\nSecond Matrix\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%5d",b[r][c]);
            printf("\n");
        }
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
    {
        s=0;
        for(k=0;k<row;k++)
        s=s+a[r][k]*b[k][c];
        z[r][c]=s;
    }   
    printf("Multplication Of Matrix =\n"); 
    for (r=0;r<row;r++)
    {
        for(c=0;c<col;c++)
            printf("%5d",z[r][c]);
        printf("\n");
    }  */

    }

    //Run Time Input Of Row And Column
    /*#include<stdio.h>
    void main()
    {
    int row,col;
    printf("Enter row size =");
    scanf("%d",&row);
    printf("Enter column size =");
    scanf("%d",&col);
    int t = row*col;
    printf("Enter %d values = ",t);
    int n[row][col],r,c;
    for (r=0;r<row;r++)
        for(c=0;c<col;c++)
            scanf("%d",&n[r][c]);
    printf("Matrix\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%5d",n[r][c]);
            printf("\n");
        }
    //Transpose Matrix
    printf("\nTranspose Matrix\n");
     for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
                printf("%5d",n[c][r]);
            printf("\n");
        }
    //Diagonal Matrix
    printf("\nDiagonal Matrix =\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
            {
                if(r==c)
                    printf("%5d",n[r][c]);
                else
                    printf(" ");
            }
            printf("\n");
        }
}*/