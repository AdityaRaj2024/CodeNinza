#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size1,size2,*p,i;
    printf("Enter How Many Number's ? ");
    scanf("%d",&size1);
    p=(int *)calloc(sizeof(int),size1);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's\n",size1);
    for(i=0;i<size1;i++)
    {
        scanf("%d",p+i);
    }
    printf("Enter How Many Number's Again? ");
    scanf("%d",&size2);
    p=(int *)realloc(p,sizeof(int)*(size1+size2));
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Number's Again\n",size2);
    for(i=size1;i<size1+size2;i++)
    {
        scanf("%d",p+i);
    }
    printf("All Elements Are = \n");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
    printf("\nAllocated Size = %d\n",_msize(p));
}