/*#include<stdio.h>
struct Employee
{
    int emp_id;
    char emp_name[20],post[20]; 
    float salary;
};
void main()
{
    struct Employee e;
    printf("Enter Emoloyee Id , Name, Post & Salary =\n");
    scanf("%d%s%s%f",&e.emp_id,e.emp_name,e.post,&e.salary);
    printf("Employee Id = %d\nName = %s\npost = %s\nSalary = %.2f",e.emp_id,e.emp_name,e.post,e.salary);
}*/

/*#include<stdio.h>
struct rectangle
{
    int l,b;
};
void main()
{
    struct rectangle r;
    printf("Enter Length & Breadth =\n");
    scanf("%d%d",&r.l,&r.b);
    printf("Area Of Rectangle = %d\nPerimeter Of Rectangle = %d",(r.l*r.b),2*(r.l+r.b));
}*/
/*#include<stdio.h>
struct rectangle
{
    int l,b,area,peri;
};
void main()
{
    struct rectangle r;
    printf("Enter Length & Breadth =\n");
    scanf("%d%d",&r.l,&r.b);
    r.area=r.l*r.b;
    r.peri=2*(r.l+r.b);
    printf("Area Of Rectangle = %d\nPerimeter Of Rectangle = %d",r.area,r.peri);
}*/

// wap in c to input three numbers after that find greatest using structure
/*#include<stdio.h>
struct greatest
{
    int gt,a,b,c;
};
void main()
{
    struct greatest g;
    printf("Enter Three Number's :\n");
    scanf("%d%d%d",&g.a,&g.b,&g.c);
    g.gt=(g.a>g.b && g.a>g.c?g.a:(g.b>g.c?g.b:g.c));
    printf("Greatest Number = %d\n",g.gt);
}*/