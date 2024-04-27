#include<Stdio.h>
#include<stdlib.h>
void main()
{
    //wap in c to input multiple numbers after that count positive and negative values usng calloc() fucntion.
    int *p,pcount=0,ncount=0,zcount=0,n,i;
    printf("Enter Length Of array = ");
    scanf("%d",&n);
    p=(int*)calloc(sizeof(int),n);
    printf("Allocated Size = %d\n",_msize(p));
    printf("Enter %d Values =\n",n);
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        if(*(p+i)>0)
            pcount++;
        else if(*(p+i)<0)
            ncount++;
        //else if(*(p+i)==0)
        else
            zcount++;
    }
    printf("All values are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    printf("Total Positive Values Are = %d\n",pcount);
    printf("Total Negative Values Are = %d\n",ncount);
    printf("Total Zeros Are = %d\n",zcount);
    free(p);
    printf("Allocated Size = %d\n",_msize(p));
}