#include<stdio.h>
void main()
{
    int row,col,r,c;
    printf("Enter Row And Column Size =");
    scanf("%d%d",&row,&col);
    int n[row][col];
     printf("Enter Values in %d X %d matrix = ",row,col);
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
  
    //Upper Diagonal Matrix
    printf("\nUpper Triangular Matrix =\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
            {
                if(r<=c)
                    printf("%d\t",n[r][c]);
                else
                    printf("0\t");
            }
            printf("\n");
        }  
    //Lower Diagonal Matrix
    printf("\nLower Triangular Matrix =\n");
    for (r=0;r<row;r++)
        {
            for(c=0;c<col;c++)
            {
                if(r>=c)
                    printf("%d\t",n[r][c]);
                else
                    printf("0\t");
            }
            printf("\n");
        }

      //Identity Matrix
    // printf("\nIdentity Matrix =\n");
    // for (r=0;r<row;r++)
    //     {
    //         for(c=0;c<col;c++)
    //         {
    //             if(r==c)
    //             {
    //                 n[r]=n[r]/n[r];
    //                 n[c]=n[c]/n[c];
    //                 printf("%d\t",n[r][c]);
    //             }
    //             else
    //                 printf("0\t");
    //         }
    //         printf("\n");
    //     }


//marksheet
// int stud,sub,r,c;
// printf("Enter number of Student's =");
// scanf("%d",&stud);
// printf("Enter Number Of Subject =");    
// scanf("%d",&sub);
// int marks[r][c];
// printf("%d",stud*sub);
//  for (r=0;r<stud;r++)
//         for(c=0;c<sub;c++)
//             scanf("%d",&marks[r][c]);

}