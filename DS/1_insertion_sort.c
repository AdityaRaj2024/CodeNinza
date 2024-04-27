// insertion sort
#include<stdio.h>
#define s 5
void insertion(int n[s])
{
    int i,j,t,k;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(n[i]>n[j])
            {
                t=n[j];
                for(k=j;k>i;k--)
                {
                    n[k]=n[k-1];
                }
                n[k]=t;
            }
        }
    }
}
void main()
{
    int z[s],i;
    printf("Enter %d values :-\n",s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&z[i]);
    }
    insertion(z);
    printf("Ascending Order :-\n");
    for(i=0;i<s;i++)
        printf("%d\t",z[i]);
}