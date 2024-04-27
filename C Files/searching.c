#include<stdio.h>
#define size 12
void main()
{
	int min=0,max=size-1,mid,i,s;
	// printf("Enter Size Of Array =");
	// scanf("%d",&size);
	 int n[size];
	printf("Enter %d Values in ascending order :", size);
	for (i=0;i<size;i++)
		scanf("%d",&n[i]);

	for(i=0;i<size;i++)
	printf("%d\t\t",n[i]);
	

	printf("\nEnter Search Value =");
	scanf("%d",&s);
	while(min<=max)
	{
		mid=(min+max)/2;
		if(s==n[mid])
		{
			printf("%d Is Found",s);
			break;
		}
		else if(s<n[mid])
		max=mid-1;
		else if(s>n[mid])
		min=mid+1;
	}
	if(min>max)
	printf("\n%d Is Not Found.",s);
}