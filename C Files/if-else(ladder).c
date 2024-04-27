#include<stdio.h>
void main()
{
/*int x,y,z ;
printf("\nEnter 3 Numbers= ");
scanf("%d%d%d",&x,&y,&z);
if ((x>y) && (x>z))
	printf("%d is greatest.",x);
else if (y>z)
	printf("%d is greatest.",y);
else
	printf("%d is greatest.",z); */

//bigger among 5 numbers
int p,q,r,s,t ;
printf("Enter 5 Number's = ");
scanf("%d%d%d%d%d",&p,&q,&r,&s,&t);
if ((p>q) && (p>r) && (p>s) && (p>t))
	printf("%d is greatest.",p);  
else if ((q>r) && (q>s) && (q>t))
	printf("%d is greatest.",q);  
else if((r>s) && (r>t))
    printf("%d is greatest.",r);  
else if(s>t)
	printf("%d is greatest.",s);  
else
	printf("%d is greatest.",t);  
	
//Division
/*int marks ;
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

//Wap to find grade.
/*int s1,s2,s3,s4,s5,marks,per ;
printf("Enter Mark's of 5 subject's = ");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
marks=s1+s2+s3+s4+s5;
per=marks/5;
printf("Total Marks = %d",marks);
printf("\npercentage mark's = %d ",per);
if(per>=85 && per<100)
printf("\nRemarks = A");
else if(per>=70 && per<85)
printf("\nRemarks = B");
else if(per>=60 && per<70)
printf("\nRemarks = c");
else if(per>=50 && per<60)
printf("\nRemarks = D");
else if(per>=40 && per<50)
printf("\nRemarks = E");
else if(per>=00 && per<40)
printf("\nRemarks = F");
else
printf("\nInvalid Entry") ; */

//Electricity Billing
/*int cr,pr,tu,amt ;
printf("Enter Previous Reading= ");
scanf("%d",&pr);
printf("Enter Current Reading= ");
scanf("%d",&cr);
tu=cr-pr;
printf("Total Readings = %d",tu);
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
printf("Amount Discounted = %.1f",dis);
printf("\nNet Payable Amount= %d",(int)(pamt-dis)); */

}
