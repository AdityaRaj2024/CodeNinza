#include<stdio.h>
#include<stdlib.h>
void main()
{
    //wap to input any square matrix after that find sum of top,bottom,left and right line,and both diagonal elements.
    int r,c,i,j,*p,s=0,m=1,ct=0;
    printf("Enter Size Of Row And Column =\n");
    scanf("%d%d",&r,&c);
    p=(int*)malloc(sizeof(int)*r*c);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter Value Of Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",p+i*c+j);
    }
    printf("Matrix Is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",*(p+i*c+j));
        printf("\n");
    }
    
    //sum of 1st row
    for(i=0;i<1;i++)
      {
	    for(j=0;j<c;j++)
            s=s+*(p+i*c+j);        
      }
    printf("Sum Of Top Row Elements Are %d\n",s);
    s=0;
    for(i=r-1;i<r;i++)
      {
	    for(j=0;j<c;j++)
            s=s+*(p+i*c+j);        
      }
    printf("Sum Of Bottom Row Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=0;j<1;j++)
            s=s+*(p+i*c+j);        
      }
    printf("Sum Of Left Line Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=c-1;j<c;j++)
            s=s+*(p+i*c+j);        
      }
    printf("Sum Of Right Line Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=0;j<c;j++)
        {
            if(i==j)
                s=s+*(p+i*c+j);
        }        
      }
    printf("Sum Of Right Diagonal Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=0;j<c;j++)
        {
            if(i+j==c-1)
                s=s+*(p+i*c+j);
        }        
      }
    printf("Sum Of Left Diagonal Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=0;j<c;j++)
        {
            if(i<=j)
                s=s+*(p+i*c+j);
        }        
      }
    printf("Sum Of Upper Triangular Elements Are %d\n",s);
    s=0;
    for(i=0;i<r;i++)
      {
	    for(j=0;j<c;j++)
        {
            if(i>=j)
                s=s+*(p+i*c+j);
        }        
      }
    printf("Sum Of Lower Triangular Elements Are %d\n",s);
    //multiplication of top row elements
    for(i=0;i<1;i++)
      {
	    for(j=0;j<c;j++)
            m=m * *(p+i*c+j);        
      }
    printf("Multiplication Of Top Row Elements Are %d\n",m);
    m=1;
    for(i=r-1;i<r;i++)
      {
	    for(j=0;j<c;j++)
            m=m**(p+i*c+j);        
      }
    printf("Multiplication Of Bottom Row Elements Are %d\n",m);
    //to check if matrix is symmetric or not.
    printf("Transpose Matrix Is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            printf("%d\t",*(p+j*c+i));
            if(*(p+i*c+j)==*(p+j*c+i))
                ct++;
        }
        printf("\n");
    }
   
    if(ct==r*c)
        printf("Matrix Is Symmetric.");
    else
        printf("Matrix Is Not Symmetric.");
}