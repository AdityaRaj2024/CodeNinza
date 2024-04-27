#include<stdio.h>
void main()
{
//Mirrered Right Triangle Pattern
  /*int a,i,j,k;
  printf("Enter Number Of Terms = ");
  scanf("%d",&a);
 for (i=1;i<=a;i++)
 {
    for(k=1;k<=a-i;k++)
    {
     printf(" ");
    }
    for(j=1;j<=i;j++)
    {
     printf("*");
    }
    printf("\n");
 }*/

 //Mirrered Right Triangle Pattern
 /*int i,j,lines;
 printf("Enter Number Of Lines = ");
 scanf("%d",&lines);
 for(i=1;i<=lines;i++)
 {
 	for(j=i;j<lines;j++)
 	{
 		printf(" ");
	 }
	 for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	 printf("\n");
 }*/

 //Mirrered Right Triangle Pattern
 /*int i,j,lines;
 printf("Enter Number Of Lines = ");
 scanf("%d",&lines);
 for(i=lines;i>=1;i--)
 {
 	for(j=i;j<lines;j++)
 	{
 		printf(" ");
	 }
	 for(j=1;j<=i;j++)
	 {
	 	printf("*");
	 }
	 printf("\n");
 }*/

 //Numbered - columned
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(j=a;j>=1;j--)
 	{
 	    if(j<=i)
            printf("%d",j);
        else
            printf(" ");
 	}
	 printf("\n");
 }*/

 //Numbered - Row Based
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(j=a;j>=1;j--)
 	{
 	    if(j<=i)
            printf("%d",i);
        else
            printf(" ");
 	}
	 printf("\n"); 
 }*/

 //Numbered - Ascending Row Based
 /*int a,i,c,d;
 printf("Enter Number Of Terms = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(c=a;c>i;c--)
 	printf(" ");
 	for(d=1;d<=i;d++)
 	printf("%d",d);
 	printf("\n");
 }*/

//Numbered Row Based - Descending
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(j=a;j>=1;j--)
 	{
 	    if(j>=i)
            printf("%d",i);
        else
            printf(" ");
 	}
	 printf("\n"); 
 }*/


//Numbered Descending & Ascending
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
 for(i=a;i>=1;i--)
 {
 	for(j=1;j<=a;j++)
 	{
 	    if(j>=i)
            printf("%d",i);
        else
            printf(" ");
 	}
	 printf("\n"); 
 }*/


 }