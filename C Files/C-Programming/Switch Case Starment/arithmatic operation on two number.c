#include <stdio.h>
void main()
{
	int a,b;
	char opt;
	printf("Enter two Number:");
	scanf("%d%d",&a,&b);
	
	fflush(stdin);
	
	printf("Enter any atithmetic operator:");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case '+':
			printf("Addituon=%d",a+b);
			break;
		case '-':
			printf("Subtraction=%d",a-b);
			break;
		case '*':
			printf("Multiplication=%d",a*b);
			break;
		case '/':
			printf("Division=%d",a/b);
			break;
		case '%':
			printf("Remainder=%d",a%b);
			break;
		default:
			printf("Invalid Arithmatic Operator");
			break;
			
		
		
		
	}
	
	
	
}
