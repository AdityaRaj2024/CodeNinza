#include<stdio.h>
#define size 10
void main()
{
    //Input 10 numbers in an array and show
   /* int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=0;i<10;i++)
    printf("%5d",n[i]);*/

//Input 10 numbers in an array and show in reverse order
    /*int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=size-1;i>=0;i--)
    printf("%5d",n[i]);*/


//Input 10 numbers in an array and print value of only even index position
    /*int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=0;i<size;i++)
        if(i%2==0)
            printf("%5d",n[i]);*/

//Input 10 numbers in an array and print value of only odd index position
    /*int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=0;i<size;i++)
        if(i%2!=0)
            printf("%5d",n[i]);*/

 //Input 10 numbers in an array and print value of only even value in array
    /*int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=0;i<size;i++)
        if(n[i]%2==0)
            printf("%5d",n[i]); */

//Input 10 numbers in an array and print value of only odd value in array
    /*int n[size],i;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&n[i]);
    for(i=0;i<size;i++)
        if(n[i]%2!=0)
            printf("\t%d",n[i]);*/

//to store reverse in another array
   /* int a[size],b[size],i,j=0;
    printf("Enter %d number's= ",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=size-1;i>=0;i--)
        {
            b[j]=a[i];
            j++;
        }
        for(i=0;i<size;i++)
        printf("%5d",b[i]);*/

//    //to store reverse in another array
//  int a[size],b[size],i,j=0;
//  printf("Enter %d Value's = ",size);
//  for(i=0;i<size;i++)
//  scanf("%d",&a[i]);
//  for(i=size-1;i>=0;i--)
//  {
//     b[j]=a[i];
//     j++;
//  }
//  for(i=0;i<size;i++)
 //printf("%5d",b[i]);


   //to store reverse in same array - using for loop
/*int a[size],i,t,j;
 printf("Enter %d Value's = ",size);
 for(i=0;i<size;i++)
 	scanf("%d",&a[i]);
 for(i=0,j=size-1;i<j;i++,j--)
 {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
 }
 for(i=0;i<size;i++)
 printf("\t%d",a[i]);*/

//to store reverse in same array - using while loop
 /* int a[size],i,t,j;
 printf("Enter %d Value's = ",size);
 for(i=0;i<size;i++)
 	scanf("%d",&a[i]);
 i=0;
 j=size-1;
 while(i<j)
 {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
 }
 for(i=0;i<size;i++)
 printf("\t%d",a[i]);*/

//to find greatest number
/*int a[size],i,gt,sm;
//gt=0;
//sm=0;
printf("Enter %d Value's = ",size);
for(i=0;i<size;i++)
 	scanf("%d",&a[i]);
for(i=0;i<size;i++)
{
    if(a[i]>gt)
    gt=a[i];
    // if(a[i]<sm)
    // sm=a[i];
}
//for(i=1;i<10;i++)
//{
//    if(a[i]<sm)
//    sm=a[i];
//}
printf("Greatest Number = %d",gt);
//printf("\nsmallest Number = %d",sm);*/

//to find smallest number
/*int a[size],i,sm;
sm=0;
printf("Enter %d Value's = ",size);
for(i=0;i<size;i++)
 	scanf("%d",&a[i]);
for(i=0;i<size;i++)
{
    if(a[i]<sm)
    sm=a[i];
}
printf("smallest Number = %d",sm);*/

//WAP in C to input number's in array after that print prime numberrs only
/*int a[size],i,j,c;
printf("Enter %d Value's =\n",size);
for(i=0;i<size;i++)
 	scanf("%d",&a[i]);
printf("All Primes Number's Are \n");
for(i=0;i<size;i++)
{
    c=0;
    for(j=1;j<=a[i];j++)
    {
        if(a[i]%j==0)
        c++;
    }
    if(c==2)
    printf("%d\t",a[i]);
}*/


//Sorting - Selection Sort
/*int n[size],i,j,t;
 printf("Enter %d Value's = ",size);
 for(i=0;i<size;i++)
 	scanf("%d",&n[i]);
for (i=0;i<=size-2;i++)
{
    for(j=i+1;j<size;j++)
    {
        if(n[i]>n[j])
        {
            t=n[i];
            n[i]=n[j];
            n[j]=t;
        }
    }
}

//For Ascending
for(i=0;i<size;i++)
    printf("%5d",n[i]);
//For Descending
// for(i=size-1;i>0;i--)
//     printf("%5d",n[i]);*/

/*int s,i,j,t;
printf("Enter Size Of Array =");
scanf("%d",&s);
int n[s];
printf("Enter %d Value's = ",s);
for(i=0;i<s;i++)
 	scanf("%d",&n[i]);
for (i=0;i<=s-2;i++)
{
    for(j=i+1;j<s;j++)
    {
        if(n[i]>n[j])
        {
            t=n[i];
            n[i]=n[j];
            n[j]=t;
        }
    }
}
//For Ascending
printf("In Ascending Order = ");
for(i=0;i<s;i++)
    printf("%5d",n[i]);
//For Descending
printf("\nIn Descending Order = ");
for(i=s-1;i>=0;i--)
    printf("%5d",n[i]);*/

//Sorting - Bubble Sort
/*int s,i,j,t;
printf("Enter Size Of Array =");
scanf("%d",&s);
int n[s];
printf("Enter %d Value's = ",s);
for(i=0;i<s;i++)
 	scanf("%d",&n[i]);
for (i=1;i<=s-1;i++)
{
    for(j=0;j<s-i;j++)
    {
        if(n[j]>n[j+1])
        {
            t=n[j];
            n[j]=n[j+1];
            n[j+1]=t;
        }
    }
}
//For Ascending
printf("In Ascending Order = ");
for(i=0;i<s;i++)
    printf("%5d",n[i]);
//For Descending
printf("\nIn Descending Order = ");
for(i=s-1;i>=0;i--)
    printf("%5d",n[i]);*/


//Linear Searching
/*int s,v,i;
printf("Enter Size Of Array =");
scanf("%d",&s);
int n[s];
printf("Enter %d Values = ",s);
for(i=0;i<s;i++)
 	scanf("%d",&n[i]);
printf("Enter Search Value : ");
scanf("%d",&v);
for(i=0;i<s;i++)
{
    if(n[i]==v)
    {
    printf("Found");
    break;
    }
}
if(i==s)
printf("Not found.");*/

//No. Of Occurance
/*int s,v,i,c=0;
printf("Enter Size Of Array =");
scanf("%d",&s);
int n[s];
printf("Enter %d Values = ",s);
for(i=0;i<s;i++)
 	scanf("%d",&n[i]);
printf("Enter Search Value : ");
scanf("%d",&v);
for(i=0;i<s;i++)
{
    if(n[i]==v)
    c++;
}
printf("\n%d Found = %d times",v,c);*/

// int s,v,i,c=0;
// printf("Enter Size Of Array =");
// scanf("%d",&s);
// int n[s];
// printf("Enter %d Values = ",s);
// for(i=0;i<s;i++)
//  	scanf("%d",&n[i]);
// printf("Enter Search Value : ");
// scanf("%d",&v);
// for(i=0;i<s;i++)
// {
//     if(n[i]==v)
//     c++;
//     printf("%d",c);
//     printf("%d Found = %d times",v,c);
//     break;
// }
// if(i==s)
// printf("Not found.");

//Binary Searching
//for sorted array
/*int min=0,max=size-1,mid,i,v,c=0;
int n[size];
printf("Enter %d Values in ascending order= ",size);
for(i=0;i<size;i++)
 	scanf("%d",&n[i]);
printf("Enter Search Value : ");
scanf("%d",&v);

while (min<=max)
{
    mid=(min+max)/2;
    if(v==n[mid])
    {
        for(i=0;i<size;i++)
        {
            if(n[i]==v)
        c++;
        }
        printf("%d Is Found = %d times",v,c);
        break;
    }
    if(v<n[mid])
        max=mid-1;
    if(v>n[mid])
        min=mid+1;
}
if(min>max)
    printf("%d Is Not Found.",v);*/

    //Run Time Input - For Sorted Array
	/*int sz,min=0,max,mid,i,s;
	printf("Enter Size Of Array =");
	scanf("%d",&sz);
	int n[sz];
	max=size-1;
	printf("Enter %d Values in ascending order :", sz);
	for (i=0;i<sz;i++)
		scanf("%d",&n[i]);
	for(i=0;i<sz;i++)
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
	/*int sz,min=0,max,mid,i,s,j,t;
	printf("Enter Size Of Array =");
	scanf("%d",&sz);
	int n[sz];
	max=sz-1;
	printf("Enter %d Values :", sz);
	for (i=0;i<sz;i++)
		scanf("%d",&n[i]);
	//for sorting
	for(i=0;i<=sz-1;i++)
	{
		for(j=0;j<=sz-1;j++)
		{
		 if(n[j]>n[j+1])
        {
            t=n[j];
            n[j]=n[j+1];
            n[j+1]=t;
        }	
		}
	}
	printf("In Ascending Order = ");
	for(i=0;i<sz;i++)
    printf("%5d",n[i]);
	//For Searching
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

}
