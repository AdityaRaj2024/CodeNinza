 #include<stdio.h>
 void main()
 {
  //Half-Pyramid Star Pattern
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
     printf("* ");
    }
    printf("\n");
 }*/

 //pyramid Star Pattern
 /*int a,i,j,k;
 printf("Enter Number Of Terms = ");
 scanf("%d",&a);
  for (i=1;i<=a;i++)
 {
    for(k=1;k<=a-i;k++)
    {
     printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
     printf("*");
    }
    printf("\n");
 }*/

 //Half pyramid
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
     printf(" %d ",j);
    }
    printf("\n");
 }*/

 //Ascending
 /*int a,i,c,d,n;
 printf("Enter Number Of Terms = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(c=a;c>i;c--)
 	printf(" ");
 	for(d=1;d<=i;d++)
 	printf("%d",d);
 	for(n=d-2;n>=1;n--)
 	printf("%d",n);
 	printf("\n");
 }*/

 //Descending
  /*int a,r,s,c,d;
  printf("Enter Number Of Terms = ");
 scanf("%d",&a);
 for(r=a;r>=1;r--)
 {
 	for(s=1;s<=r-1;s++)
 	printf(" ");
 	for(c=r;c<=a;c++)
 	printf("%d",c);
 	for(d=a-1;d>r-1;d--)
 	printf("%d",d);
 	printf("\n");
 }*/

//Hollow Square
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
  for(i=1;i<=a;i++)
 {
 	for(j=1;j<=a;j++)
   {
      if(i==1 || i==a || j==1 || j==a)
      printf("*");
      else
      printf(" ");
   }
 	
	 printf("\n");
 }*/

//Square
 /*int i,j,a;
 printf("Enter Number Of Lines = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 	for(j=1;j<=a;j++)
      printf("*");
  
printf("\n");
 }*/

 //hollow pyramid
   /*int a,i,j,k;
   printf("Enter Number Of Terms = ");
   scanf("%d",&a);
   for (i=1;i<=a;i++)
   {
      for(k=1;k<=a-i;k++)
      {
         printf(" ");
      }
      for(j=1;j<=2*i-1;j++)
      {
         if(j==1 || j==2*i-1 || i==a)
            printf("*");
         else
            printf(" ");
      }
   printf("\n");
   }*/

//x star pattern
/*int n,m,i,j;
printf("Enter Number Of Terms = ");
scanf("%d",&n);
m=2*n-1;
for(i=1;i<=m;i++)
{
   for(j=1;j<=m;j++)
   {
      if(i==j || j==(m-i+1))
      {
         printf("*");
      }
      else
         printf(" ");
   }
   printf("\n");
}*/

 
 //Opposite Pyramid
//   int a,r,s,c,d;
//   printf("Enter Number Of Terms = ");
//  scanf("%d",&a);
//  for(r=0;r<=a;r++)
//  {
//  	for(s=1;s<=r-1;s++)
//  	printf(" ");
//  	for(c=r;c<=a;c++)
//  	printf("%d",c);
//  	for(d=a-1;d>r-1;d--)
//  	printf("%d",d);
//  	printf("\n");
//  }

//  int a,r,s,c,d;
//  printf("Enter Number Of Terms = ");
//  scanf("%d",&a);
//  for(r=0;r<=a;r++)
//  {
//  	for(s=1;s<=r-1;s++)
//  	printf(" ");
//  	for(c=a;c<=r;c++)
//  	printf("%d",c);
//  	for(d=a-1;d>r-1;d--)
//  	printf("%d",d);
//  	printf("\n");
//  } 

 }