#include<Stdio.h>
union employee
{
    int empid;
    char ename[30],post[15];
    float salary;  
};
void main()
{
    union employee e;
    printf("Enter Employee ID : ");
    scanf("%d",&e.empid);
    printf("Employee ID = %d\n",e.empid);
    printf("Memory Address Of Employee ID = %u\n",&e.empid);
    printf("Enter Employee Name : ");
    scanf("%s",e.ename);
    printf("Employee Name = %s\n",e.ename);
    printf("Memory Address Of Employee Name = %u\n",&e.ename);
    printf("Enter Employee Post : ");
    scanf("%s",e.post);
    printf("Employee Post = %s\n",e.post);
    printf("Memory Address Of Employee Post = %u\n",&e.post);
    printf("Enter Salary : ");
    scanf("%f",&e.salary);
    printf("Employee's Salary = %.1f\n",e.salary);
    printf("Memory Address Of salary = %u\n",&e.salary);
    printf("Size of union = %d\n",sizeof(e));
    // printf("Enter Employee Id , Name, Post & Salary :\n");
    // scanf("%d%s%s%f",&e.empid,e.ename,e.post,&e.salary);
    // printf("Employee ID = %d\n",e.empid);
    // printf("Employee's Salary = %.1f\n",e.salary);
    // printf("Employee Name = %s\n",e.ename);
    // printf("Employee Post = %s\n",e.post);
    // printf("Size of union = %d\n",sizeof(e));
}