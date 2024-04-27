// 08-09-2023
// bubble sort
#include<stdio.h>
#define s 5
void bubble(int n[s])
{
    int i,j,t;
    for(i=1;i<s;i++)
    {
        for(j=0;j<s-1;j++)
        {
            if(n[j]>n[j+1])
            {
                t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
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
    bubble(z);
    printf("Ascending Order :-\n");
    for(i=0;i<s;i++)
        printf("%d\t",z[i]);
}