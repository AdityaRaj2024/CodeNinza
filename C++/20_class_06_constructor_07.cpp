//WAP in C++ to create a class named Employee to input employee id , name, post and salary using parameterized constructor after that print it.
#include<iostream>
#include<String.h>
using namespace std;
class Employee
{
    private:
        int id;
        char name[15],post[15];
        float salary;
    public:
        Employee(int eid, char ename[15],char job[15],float wage)
        {
            id=eid;
            strcpy(name,ename);
            strcpy(post,job);
            salary=wage;
        }
        ~Employee()
        {
            cout<<"\nEmployee Details:-"<<endl;
            cout<<"Employee id :- "<<id<<endl<<"Employee Name :- "<<name<<endl<<"Employee Post :- "<<post<<endl<<"Employee Salary :- "<<salary<<endl;
        }
};

int main()
{
    Employee emp1(101,"ABC","Clerk",35000.25);
    Employee emp2(103,"xyz","manager",85000.25);
    // emp1.show();
    // emp2.show();
    return 0;
}