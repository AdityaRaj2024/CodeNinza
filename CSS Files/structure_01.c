#include<stdio.h>
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
}