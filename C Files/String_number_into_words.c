#include<stdio.h>
void main()
{
 int n,n1,S,th,hn,t,u,h;
 printf("Enter Number = ");
 scanf("%d",&n);
 n1=n;
 th=n/1000;
 switch(th)
 {
	case 1:
		printf("One Thousand ");
		break;
	case 2:
		printf("Two Thousand ");
		break;
	case 3:
		printf("Three Thousand ");
		break;
	case 4:
		printf("Four Thousand ");
		break;
	case 5:
		printf("Five Thousand ");
		break;
	case 6:
		printf("Six Thousand ");
		break;
	case 7:
		printf("Seven Thousand ");
		break;
	case 8:
		printf("Eight Thousand ");
		break;
	case 9:
		printf("Nine Thousand ");
		break;
 }
 n=n%1000;
 h=n/100;
 switch(h)
 {
 	case 1:
 		printf("One Hundred ");
 		break;
 	case 2:
 		printf("Two Hundred ");
 		break;
 	case 3:
 		printf("Three Hundred ");
 		break;
 	case 4:
 		printf("Four Hundred ");
 		break;
 	case 5:
 		printf("Five Hundred ");
 		break;
 	case 6:
 		printf("Six Hundred ");
 		break;
 	case 7:
 		printf("Seven Hundred ");
 		break;
 	case 8:
 		printf("Eight Hundred ");
 		break;
 	case 9:
 		printf("Nine Hundred ");
 		break; 
 }
 if(n1>=100)
    printf("And ");
  n=n%100;
 if(n<20)
 {
 	switch(n)
 	{
 		case 1:
 			printf("One");
 			break;
 		case 2:
 			printf("Two");
 			break;
 		case 3:
 			printf("Three");
 			break;
 		case 4:
 			printf("Four");
 			break;
 		case 5:
 			printf("Five");
 			break;
 		case 6:
 			printf("Six");
 			break;
 		case 7:
 			printf("Seven");
 			break;
 		case 8:
 			printf("Eight");
 			break;
 		case 9:
 			printf("Nine");
 			break;
 		case 10:
 			printf("Ten");
 			break;
 		case 11:
 			printf("Eleven");
 			break;
 		case 12:
 			printf("Twelve");
 			break;
 		case 13:
 			printf("Thirteen");
 			break;
 		case 14:
 			printf("Fourteen");
 			break;
 		case 15:
 			printf("Fifteen");
 			break;
 		case 16:
 			printf("Sixteen");
 			break;
 		case 17:
 			printf("Seventeen");
 			break;
 		case 18:
 			printf("Eighteen");
 			break;
 		case 19:
 			printf("Nineteen");
 			break;
	 }
 }
 else
 {
 	t=n/10;
 	switch(t)
 	{
 	 case 2:
 	 	printf("Twenty ");
		break;
	case 3:
 	 	printf("Thirty ");
		break;
	case 4:
 	 	printf("Forty ");
		break;
	case 5:
 	 	printf("Fifty ");
		break;
	case 6:
 	 	printf("Sixty ");
		break;
	case 7:
 	 	printf("Seventy ");
		break;
	case 8:
 	 	printf("Eighty ");
		break;
	case 9:
 	 	printf("Ninety ");
		break;
 	}
 	u=n%10;
 	switch(u)
 	{
 		case 1:
 			printf("One");
 			break;
 		case 2:
 			printf("Two");
 			break;	
 		case 3:
 			printf("Three");
 			break;
 		case 4:
 			printf("Four");
 			break;
 		case 5:
 			printf("Five");
 			break;
 		case 6:
 			printf("Six");
 			break;
 		case 7:
 			printf("Seven");
 			break;
 		case 8:
 			printf("Eight");
 			break;
 		case 9:
 			printf("Nine");
 			break;
 	}
	 }
}