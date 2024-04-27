#include<stdio.h>
#define size 5
void main()
{
 //input 10 numbers in array & show in reverse order.
 /*int n[size],i;
 printf("Enter %d Number's = ",size);
 for(i=0;i<size;i++)
 scanf("%d",&n[i]);
 for(i=size-1;i>=0;i--)
 printf("\t%d",n[i]);*/

 /*int n[size],i;
 printf("Enter 10 Number's = ");
 for(i=0;i<size;i++)
 scanf("%d",&n[i]);
 for(i=size;i>0;i--)
 printf("\t%d",n[i]); */

 //To Store reverse into another array
 /*int a[size],b[size],i,j=0;
 printf("Enter %d values = ",size);
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 for(i=size-1;i>=0;i--)
 {
 	b[j]=a[i];
 	j++;
 }
 for(i=0;i<size;i++)
 printf("\t%d",b[i]);*/

 //To Store Reverse In Same Array
 //using for loop
/* int n[size],i,j,t;
 printf("Enter %d values = ",size);
 for(i=0;i<size;i++)
 scanf("%d",&n[i]);
 for(i=0,j=size-1;i<j;i++,j--)
 {
   t=n[i];
   n[i]=n[j];
   n[j]=t;
 }
 for(i=0;i<size;i++)
    printf("\t%d",n[i]);*/


}