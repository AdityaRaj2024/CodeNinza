#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,c,i,j,*p;
    printf("Enter Size Of Row And Column =\n");
    scanf("%d%d",&r,&c);
    p=(int*)malloc(sizeof(int)*r*c);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Values Of Matrix\n",r*c);
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
    free(p);
    printf("Allocated Size = %d\n",_msize(p));
}