#include<stdio.h>
struct employee
{
    int empid;
    char ename[20],post[15];
    float salary;
};//e1={1,"abc","manager",60000.00},e2={2,"xyz","hr head",45000},*p,*q;//initialiation during decleration time
void main()
{
    struct employee e1={1,"abc","manager",60000.2},e2={2,"xyz","hr head",45000},*p,*q;
    //struct employee *p,*q;
    p=&e1; //p holds memory address of e1
    q=&e2; //p holds memory address of e2
    printf("Employee id = %d\nName = %s\nPost = %s\nsalary = %.2f\n",p->empid,p->ename,p->post,p->salary);
    printf("Employee id = %d\nName = %s\nPost = %s\nsalary = %.2f\n",q->empid,q->ename,q->post,q->salary);
    printf("Size of structure = %d\n",sizeof(e1));
    printf("Memory Address of empid. = %u\n",&e1.empid);
    printf("Memory Address of empname = %u\n",&e1.ename);
    //printf("size of array type sttructure type variable = ",sizeof(p));
}