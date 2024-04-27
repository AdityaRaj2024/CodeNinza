//embedded method
/*#include<stdio.h>
struct employee //outer structure
{
    int empid;
    char ename[20],post[20];
    float salary;
    struct dob //inner structure
    {
        int mm,dd,yyyy;
    }dob;//inner structure variable
}emp;//outer structure variable

void main()
{
    printf("Enter Employee ID,Name,Post & Salary:\n");
    scanf("%d%s%s%f",&emp.empid,emp.ename,emp.post,&emp.salary);
    printf("Enter date Of Birth\nEnter Day\nEnter Month\nEnter Year:\n");
    scanf("%d%d%d",&emp.dob.dd,&emp.dob.mm,&emp.dob.yyyy);
    printf("Employee Id = %d\nName = %s\nPost = %s\nSalary = %.2f\nD.O.B = %d-%d-%d\n",emp.empid,emp.ename,emp.post,emp.salary,emp.dob.dd,emp.dob.mm,emp.dob.yyyy);
}*/

//creating inner structure / nested structure using separate method
/*#include<stdio.h>
struct DOB
{
    int mm,dd,yyyy;
};
struct employee //outer structure
{
    int empid;
    char ename[20],post[20];
    float salary;
    struct DOB dob; //inner structure
}emp;
void main()
{
    printf("Enter Employee ID,Name,Post & Salary:\n");
    scanf("%d%s%s%f",&emp.empid,emp.ename,emp.post,&emp.salary);
    printf("Enter date Of Birth\nEnter Day\nEnter Month\nEnter Year:\n");
    scanf("%d%d%d",&emp.dob.dd,&emp.dob.mm,&emp.dob.yyyy);
    printf("Employee Id = %d\nName = %s\nPost = %s\nSalary = %.2f\nD.O.B = %d-%d-%d\n",emp.empid,emp.ename,emp.post,emp.salary,emp.dob.dd,emp.dob.mm,emp.dob.yyyy);
}*/