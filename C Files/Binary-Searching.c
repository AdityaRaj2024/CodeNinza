#include<stdio.h>
void main()
{
	//Run Time Input - For Sorted Array
	/*int size,min=0,max,mid,i,s;
	printf("Enter Size Of Array =");
	scanf("%d",&size);
	int n[size];
	max=size-1;
	printf("Enter %d Values in ascending order :", size);
	for (i=0;i<size;i++)
		scanf("%d",&n[i]);
	for(i=0;i<size;i++)
	printf("%d\t",n[i]);
	printf("\nEnter Search Value =");
	scanf("%d",&s);
	while (min<=max)
	{
    mid=(min+max)/2;
    if(s==n[mid])
    {
        printf("%d Is Found",s);
        break;
    }
    if(s<n[mid])
        max=mid-1;
    if(s>n[mid])
        min=mid+1;
	}
	if(min>max)
		printf("%d Is not  Found.",s);*/

	//Run Time Input - For Unsorted	 Array
	/*int size,min=0,max,mid,i,s,j,t,c=0;
	printf("Enter Size Of Array = ");
	scanf("%d",&size);
	int n[size];
	max=size-1;
	printf("Enter %d Values :\n", size);
	for (i=0;i<size;i++)
		scanf("%d",&n[i]);
	//for sorting
	for(i=0;i<=size-1;i++)
	{
		for(j=0;j<=size-1;j++)
		{
		 if(n[j]>n[j+1])
        {
            t=n[j];
            n[j]=n[j+1];
            n[j+1]=t;
        }	
		}
	}
	printf("In Ascending Order =\n");
	for(i=0;i<size;i++)
    printf("%5d",n[i]);
	//For Searching
	printf("\nEnter Search Value =");
	scanf("%d",&s);
	while (min<=max)
	{
    mid=(min+max)/2;
    if(s==n[mid])
    {
		for(i=0;i<size;i++)
        {
            if(n[i]==s)
        c++;
        }
        printf("%d Is Found = %d times.",s,c);
        break;
    }
    if(s<n[mid])
        max=mid-1;
    if(s>n[mid])
        min=mid+1;
	
	if(min>max)
		printf("%d Is not  Found.",s);
	}*/
}