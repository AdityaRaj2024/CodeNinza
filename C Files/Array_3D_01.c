#include<stdio.h>
void main()
{
    //WAP to input n matrix after print them
    /*int n,r,c;
    printf("Enter No. Of Matrix = ");
    scanf("%d",&n);
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);
    int a [n][r][c];
    int i,j,k;
    printf("Enter %d Matrix =\n",n);
    {
    for(i=0;i<n;i++) //for number of matrix
    {
        printf("Enter Value Of Matrix %d \n",i+1);
        for (j=0;j<r;j++)
        for(k=0;k<c;k++)
            scanf("%d",&a[i][j][k]);
        
    }
    }
    printf("All Matrix Are =\n");
    for(i=0;i<n;i++)
    {
        printf("Matrix %d is\n",i+1);        
        for (j=0;j<r;j++)
    {
        for(k=0;k<c;k++)
            printf("%d\t",a[i][j][k]);
        printf("\n");
    }
    }*/

    //WAP to input n matrix after print sum of element of each matrix
    /*int n,r,c;
    printf("Enter No. Of Matrix = ");
    scanf("%d",&n);
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);
    int a[n][r][c],i,j,k,s=0;
    //int i,j,k,s=0;
    printf("Enter %d Matrix =\n",n);
    {
    for(i=0;i<n;i++) //for number of matrix
    {
        printf("Enter Value Of Matrix %d \n",i+1);
        for (j=0;j<r;j++)
        for(k=0;k<c;k++)
            scanf("%d",&a[i][j][k]);
        
    }
    }
    printf("All Matrix Are =\n");
    for(i=0;i<n;i++)
    {
        printf("Matrix %d is\n",i+1);        
        for (j=0;j<r;j++)
    {
        for(k=0;k<c;k++)
        {
            printf("%d\t",a[i][j][k]);
            s = s+a[i][j][k];
        }
        //printf("Sum Of All Elements = %d ",s);
        //s=0;
        printf("\n");
    }
    printf("Sum Of All Elements = %d\n",s);
    s=0;
    }*/

    //WAP to input n matrix after print multipllication of element of each matrix
    /*int n,r,c;
    printf("Enter No. Of Matrix = ");
    scanf("%d",&n);
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);
    int a[n][r][c],i,j,k,s=1;
    //int i,j,k,s=0;
    printf("Enter %d Matrix =\n",n);
    {
    for(i=0;i<n;i++) //for number of matrix
    {
        printf("Enter Value Of Matrix %d \n",i+1);
        for (j=0;j<r;j++)
        for(k=0;k<c;k++)
            scanf("%d",&a[i][j][k]);
        
    }
    }
    printf("All Matrix Are =\n");
    for(i=0;i<n;i++)
    {
        printf("Matrix %d is\n",i+1);        
        for (j=0;j<r;j++)
    {
        for(k=0;k<c;k++)
        {
            printf("%d\t",a[i][j][k]);
            s = s*a[i][j][k];
        }
        //printf("Sum Of All Elements = %d ",s);
        //s=0;
        printf("\n");
    }
    printf("Sum Of All Elements = %d\n",s);
    s=1;
    }*/
}