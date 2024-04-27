#include<math.h>
#include<stdio.h>
//#include<canio.h>
void main()
{
    int m,*n,**p,**q,***r,****s,*****t,******u,*******v,********w,*********x,**********y,***********z,************a;
    m=10;
    n=&m;
    p=&n;
    q=&p;
    r=&q;
    s=&r;
    t=&s;
   
    printf("m=%u\nn=%u\np=%u\nq=%u\nr=%u\ns=%u\nt=%u\n",&m,n,p,q,r,s,t);
     printf("\nm=%d\nn=%d\np=%d\nq=%d\nr=%d\ns=%d\nt=%d",m,*n,**p,***q,****r,*****s,******t);

    
	//Sum Of Two Numbers
    /*int a,b;
    printf("Enter Two Numbers =");
    scanf("%d%d",&a,&b);
    //c=a+b;
    printf("\nSum=%d",a+b); */

	//Division Of Two Numbers
    /*int a,b ;
    printf("Enter Two Numbers=");
    scanf("%d%d",&a,&b);
    printf("\nDiv=%d",a/b); */

    /*float a,b ;
    printf("Enter Two Numbers=");
    scanf("%f%f",&a,&b);
    printf("\nDiv=%0.2f",a/b); **/

    //Example Of Typecasting.
    /*int a,b ;
    printf("Enter Two Numbers=");
    scanf("%d%d",&a,&b);
    printf("\nDiv=%o.2f",(float)a/b);*/

	//Average Of 3 Numbers.
   /* float a,b,c,avg ;
    printf("Enter Three Numbers=");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    //printf("\nAverage=%1.2f",(a+b+c)/3);
    printf("\nAverage=%0.2f",avg); */

//Sales ,Purchase & Discount
/*int p,n,d;
printf("Purchase Amount Of Product = ");
scanf("%d",&p);
d=(p*25)/100 ;
n=p-d;
printf("Purchase Amount of product = %d \n Discount on purchase = %d \n Net Amount of product = %d",p,d,n); */

//check if even/odd & positive/negaative using conditional operator
/*int a;
printf("Enter Any Number = ");
scanf("%d",&a);
(a%2==0 ? printf("%d Is Even No.",a):printf("%d Is Odd No.",a));
(a>0 ? printf("\n%d Is Positive No.",a):printf("\n%d Is Negative No.",a)); */

//Check eliglbility criteria for voting for an indian citizen in india using conditional operator
/*int age;
printf("Enter Age =");
scanf("%d",&age);
(age>=18 ? printf("eligible for voting") : printf("Not Eligible For Voting")); */

//WAP in c to input 3 numbers after that find greatest among them using conditional operator and swap them.
/*int a,b,c,d;
printf("Enter 3 Number's = ");
scanf("%d%d%d",&a,&b,&c);
//(a>b ? (a>c ? printf ("%d is greatest.",a) : printf("%d is greatesst.",c)) : (b>c ? printf("%d is greatest.",b) : printf("%d is greatest.",c))); 
(a>b && a>c ? printf("%d is greatest.",a) : (b>c ? printf("%d is greatest.",b) :printf("%d is greatest.",c)));
//d=a;
//a=b;
//b=c;
//c=d;
a=a+b+c;
b=a-(b+c);
c=a-(b+c);
a=a-(b+c);
printf("\nValue of a= %d \nValue Of b = %d \nValue Of c =%d",a,b,c); */

//swapping among 3 numbers
/*int a,b,c;
printf("Enter Three Number's : ");
scanf("%d%d%d",&a,&b,&c);
a=a+b+c;
b=a-(b+c);
c=a-(b+c);
a=a-(b+c);
printf("\nAfter Swapping");
printf("\n1st Term = %d ",a);
printf("\n2nd Term = %d ",b);
printf("\n3rd Term = %d ",c); */

//WAP tp input 2 numbers after that swap it and find greatest.
/*int a,b,c;
printf("Enter 2 Number's =");
scanf("%d%d",&a,&b);
(a>b ? printf("%d is greatest.",a) : printf("%d is greatest.",b));
//c=a;
//a=b;
//b=c;
a=a+b;
b=a-b;
a=a-b;
printf("\nvalue of a= %d \nValue Of b = %d ",a,b); */

//Find Total salary of an employee after extra allowence like DA=12%,TA=16%,HRA=20%,MA=12% on basic salary
/*float s,h,t,d,m,ts;
printf("\nEnter Basic Salary = ");
scanf("%f",&s);
h=(s*20)/100;
t=(s*16)/100;
d=(s*12)/100;
m=(s*12)/100;
ts=s+h+t+d+m;
printf("\nTotal Salary = %.2f",ts); */


//Area Of Cicle
/*float r,ar,cr ;
printf("Enter Radius=");
scanf("%f",&r);
ar=3.1428*r*r	;
cr=2*3.1428*r	;
printf("\nCircumference Of Circle=%.2f",cr);
printf("\nArea Of Circle=%.2f",ar); */

//Circumference Of Cicle
/*float r,ar,cr ;
printf("Enter Radius=");
scanf("%f",&r);
cr=2*3.1428*r ;
ar=3.1428*r*r
printf("\nCircumference Of Circle=%.2f",cr); 
printf("\nArea Of Circle=%.2f",ar); */


//Area Of Triangle
/*float b,h,ar;
printf("Enter Values Of Base and Height=");
scanf("%f%f",&b,&h);
ar=0.5*b*h ;
printf("\nArea Of Triangle =%.2f",ar); */

//Perimeter Of Triangle
/*int a,b,c,pr;
printf("Enter Values Of Three Sides=");
scanf("%d%d%d",&a,&b,&c);
pr= a+b+c ;
printf("\nperimeter Of Triangle =%d",pr); */

//Area Of Triangle using Heron's Formula
/*float a,b,c,s,ar,pr ;
printf("Enter Values Of 3 Sides=");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2 ;
//printf("s=%.2f",s);
ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nPerimeter Of Triangle =%.2f",s*2);
printf("\nArea Of Triangle =%.2f",ar); */

/*//Area Of square
int s;
printf("Enter Side=");
scanf("%d",&s);
printf("\nArea Of Square=%d",s*s);

//Area Of rectangle
int l,b;
printf("\nEnter Length And Breadth=");
scanf("%d%d",&l,&b);
printf("\nArea Of rectangle=%d",(l*b)); */

/*//Area Of rhombus
int d1,d2;
printf("Enter Diagonals=");
scanf("%d%d",&d1,&d2);
printf("\nArea Of Rhombus=%0.1f",(float)(d1*d2)/2);

//Area Of parallelogram
int b,h;
printf("\nEnter Base And Height=");
scanf("%d%d",&b,&h);
printf("\nArea Of parallelogram=%d",(b*h)); */

//Cube
/*int a,v,p,sa;
printf("Enter Side Of Cube=");
scanf("%d",&a);
v=pow(a,3);
p=12*a;
sa=6*pow(a,2);
printf("\nVolume Of Cube=%d",v);
printf("\nPerimeter Of Cube=%d",p);
printf("\nSutface Area Of Cube=%d",sa); */

//Cuboid
/*int l,b,h;
printf("\nEnter 3 Sides=");
scanf("%d%d%d",&l,&b,&h);
//v=pow(a,3);
printf("\nVolume Of Cuboid=%d%",(l*b*h));
printf("\nPerimeter Of Cuboid=%d%",4*(l+b+h));
printf("\nSurface Area Of Cuboid=%d%",2*(l*b+l*h+b*h)); */

//Cone
/*int ra,ht,sht ;
printf("\nEnter Radius and Height= ");
scanf("%d%d",&ra,&ht);
sht=(float)sqrt(ra*ra+pow(ht,2));
printf("\nSlant Height Of Cone=%.2f",(float)sht);
printf("\nVolume Of Cone =%.2f",(float)3.1428*ra*ra*ht/3);
printf("\nSurface Area Of Cone=%.2f",(float)(3.1428*ra*(sht+ra))); */

//cylinder
/*float rad,hit ;
printf("\nEnter Radius And Height Of Cylinder=");
scanf("\n%f%f",&rad,&hit);
printf("\nVolume Of Cylinder =%.2f",3.1428*rad*rad*hit);
printf("\nSurface Area Of Cylinder=%.2f",(2*3.1428*rad*(hit+rad)));*/

//sphere
/*float rs ;
printf("\nEnter Radius Of sphere=") ;
scanf("\n%f",&rs) ;
printf("\nVolume Of Sphere =%.2f",4*3.1428*rs*rs*rs/3);
printf("\nSurface Area Of Sphere=%.2f",(4*3.1428*rs*rs)); */

//Quadratic Equations
/* float a,b,c,d,v1,v2;
printf("Enter 3 Co-efficient = ");
scanf("%f%f%f",&a,&b,&c);
d=pow(b,2)-(4*a*c);
if (d>0)
{
	v1=(-b+sqrt(d))/2*a ;
	v2=(-b-sqrt(d))/2*a ;
	printf("\nRoot 1 =%.2f \nRoot 2 =%.2f",v1,v2);
}
else
{
	printf("Values not possible");
} */

/*int x,y ;
printf("\nEnter 2 Values= ");
scanf("%d%d",&x,&y);
//printf("\n(X+y)^2=%d",pow(x,2)+pow(y,2)+2*x*y);
//printf("\n(X-y)^2=%d",pow(x,2)+pow(y,2)-2*x*y);
printf("\n(x+y)^2=%d",x*x+y*y+2*x*y);
printf("\n(x-y)^2=%d",x*x+y*y-2*x*y); */

}
