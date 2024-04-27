#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int a,b,c,gt;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	gt=a>b && a>c ?a:(b>c?b:c);
	printf("Greatest Number = %d",gt);
	printf("\nNo of arguments = %d\n",argc);
	printf("File Name = %s",argv[0]);
}
//#include<stdio.h>
//#include<stdlib.h>
////#define size 5
//void main(int argc,char *argv[])
//{
//	int i,sum=0,avg,gt;
////	for(i=1;i<argc;i++)
////		if(i<)
//	for(i=1;i<argc;i++)
//		sum=sum+atoi(argv[i]);
//	avg=sum/(argc-1);
//	printf("sum of All Characters = %d\nAverage = %d",sum,avg);	
//	printf("\nNo of arguments = %d\n",argc);
//	
//}
