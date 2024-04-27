#include<stdio.h>
void main()
{
//For Voting
 /*int age;
 //char country[25];
 printf("\nEnter Age=");
 scanf("\n%d",&age);
 //printf("\nEnter Country Name =");
 //scanf("\n%s",country);
 if (age>=18) //&& (country = "india" || country = "INDIA" || country="India"))
    printf("Eligible");
 else
    printf("Not Eligible"); */
//for leap year
/*int year;
printf("\nEnter Year= ");
scanf("%d",&year);
if((year%4==0 && year%100!=0) || (year%400==0))
    printf("%d is a Leap Year",year);
else
	printf("%d is Not a Leap Year",year); */

//bigger among 2 numbers
/*int a,b ;
printf("\nEnter 2 Numbers= ");
scanf("%d%d",&a,&b);
if (a>b)
	printf("%d is greater.",a);
else
	printf("%d is greater.",b); */

//bigger among 3 numbers
/*int a,b,c,max;
printf("\nEnter 3 Numbers= ");
scanf("%d%d%d",&a,&b,&c) ;
max=a ;
if(max<b)
max=b ;
if(max<c)
max=c ;
printf("\nMaximum is %d",max); */

/*int x,y,z ;
printf("\nEnter 3 Numbers= ");
scanf("%d%d%d",&x,&y,&z);
if ((x>y) && (x>z))
	printf("%d is greatest.",x);
else if (y>z)
	printf("%d is greatest.",y);
else
	printf("%d is greatest.",z); */
	
/*int x,y,z ;
printf("\nEnter 3 Numbers= ");
scanf("%d%d%d",&x,&y,&z);
if (x>y)
{
	if(x>z)
	printf("%d is greatest.",x);
	else
	printf("%d is greatest.",z);
}
else
{
	if(y>z)
	printf("%d is greatest.",y);
	else
	printf("%d is greatest.",z);
}*/

/*//bigger among 5 numbers
int p,q,r,s,t ;
printf("\nEnter 5 Numbers= ");
scanf("%d%d%d%d%d",&p,&q,&r,&s,&t);
if ((p>q) && (p>r) && (p>s) && (p>t))
	printf("%d%s",p ," is greatest.");
else if ((q>r) && (q>s) && (q>t))
	printf("%d%s",q, " is greatest.");
else if((r>s) && (r>t))
        printf("%d%s",r," is greatest");
else
	printf("%d%s",t," is greatest.");  */

/*//Eligibility Criteria = Nested If
int marks,phy,che,math ;
printf("\nEnter Total Marks= ");
scanf("%d",&marks);
if(marks>=300)
{
 printf("\nEnter Physics, Chemistry and Math Marks= ");
 scanf("%d%d%d",&phy,&che,&math) ;
 if((phy+che+math)>=181)
 printf("Eligible") ;
 else
 printf("Not Eligible") ;
}
else
{
 printf("Not Eligible") ;
} */

//Ladder If
/*//Division
int marks ;
printf("\nEnter Marks= ") ;
scanf("%d",&marks) ;
if(marks>=300 && marks<=500)
printf("First Division");
else if(marks>=225 && marks<300)
printf("Second Division");
else if(marks>=165 && marks<225)
printf("Third Division");
else if(marks>=0 && marks<165)
printf("Fail");
else
printf("Invalid Entry") ; */

/*//Electricity Billing
int cr,pr,tu,amt ;
printf("\nEnter Previous Reading= ");
scanf("%d",&pr);
printf("\nEnter Current Reading= ");
scanf("%d",&cr);
tu=cr-pr;
if(tu>0 && tu<=100)
amt=tu*5;
else if(tu>100 && tu<=200)
amt=(100*5)+(tu-100)*6;
else if(tu>200 && tu<=400)
amt=(100*5)+(100*6)+(tu-200)*7;
else if(tu>400)
amt=(100*5)+(100*6)+(200*7)+(tu-400)*8;
printf("\nPayable Amount= %d",amt); */

//Discount
/*float pamt,dis,net;
printf("\nEnter Purchasing Amount= ");
scanf("%f",&pamt);
if(pamt>=1000 && pamt<3000)
dis=(pamt/100)*10;
else if(pamt>=3000 && pamt<5000)
dis=(pamt/100)*15;
else if(pamt>=5000 && pamt<7500)
dis=(pamt/100)*20;
else if(pamt>=7500 && pamt<10000)
dis=(pamt/100)*25;
else if(pamt>=10000)
dis=(pamt/100)*30;
else
dis=0;
printf("\nAmount Deducted= %.1f",dis);
printf("\nNet Payable Amount= %d",(int)(pamt-dis));*/
}
