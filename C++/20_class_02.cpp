//wap in c++ to find sum of 2 numbers using class
/*#include<iostream>
using namespace std;
class sum
{
    private:
        int x,y,s;
    public:
        void input();
        void show();
};
void sum::input()
{
    cout<<"Enter 2 Numbers :-"<<endl;
    cin>>x>>y;
}
void sum :: show()
{
    s=x+y;
    cout<<"Sum = "<<s;
}
int main()
{
    sum sm;
    sm.input();
    sm.show();
    return (0);
}*/

//wap in c++ to generate marksheet of a student using class
/*#include<iostream>
using namespace std;
class marksheet
{
    private:
        int roll,id,m1,m2,m3;
        float tm,pe;
    public:
        void input();
        void result();
        void grade();
};
void marksheet::input()
{
    cout<<"Enter Student ID and Roll Number :-"<<endl;
    cin>>id>>roll;
    cout<<"Enter Marks of Three Subject :- "<<endl;
    cin>>m1>>m2>>m3;
}
void marksheet::result()
{
    tm=m1+m2+m3;
    pe=tm/180*100;
    cout<<"\n**********Details of Student********"<<endl;
    cout<<"Student Id = "<<id<<"\nStudent Roll_no. "<<roll<<"\nMarks in Subject 1 = "<<m1<<"\nMarks in Subject 2 = "<<m2<<"\nMarks in Subject 3 = "<<m3<<"\nTotal Marks = "<<tm<<"\nPercentage = "<<pe<<endl;
}
void marksheet::grade()
{
    if(tm>=144&& tm<=180)
        cout<<"Excellent"<<endl;
    else if(tm>=126 && tm<144)
        cout<<"Nice"<<endl;
    else if(tm>=108 && tm<126)
        cout<<"Good"<<endl;
    else if(tm>=81 && tm<108)
        cout<<"Average"<<endl;
    else if(tm>0 && tm<81)
        cout<<"poor"<<endl;
    else
        cout<<"Invalid Entry"<<endl;
}
int main()
{
    marksheet marks;
    marks.input();
    marks.result();
    marks.grade();
    return 0;
}*/

//Define a class Employee. Display the personal and salary details of five employees u..
/*#include<iostream>
using namespace std;
class Employee
{
    private:
    int emp_id[5],emp_no[5],i;
    float emp_bs[5],bonus[5],emp_ts[5];
    string name[5];
    public:
        void input();
        void display();
};
void Employee ::input()
{
    for(i=1;i<=2;i++)
    {
        cout<<"\nEnter Name, ID , mobile  no. of Employee "<<i<<" :- "<<endl;
        cin>>name[i]>>emp_id[i]>>emp_no[i];
        cout<<"\nEnter Basic Salary, Bonus of the employee "<<i<<" :- "<<endl;
        cin>>emp_bs[i]>>bonus[i];
    }
}
void Employee :: display()
{
    for(i=1;i<=2;i++)
    {
        cout<<"\nDetails of Employee "<<i<<" :- "<<endl;
        cout<<"Name = "<<name[i]<<endl<<"Employee ID = "<<emp_id[i]<<"\nMobile Number = "<<emp_no[i]<<"\nBasic Salary = "<<emp_bs[i]<<"\nBonus = "<<bonus[i]<<"\nTotal Salary = "<<emp_bs[i]+bonus[i]<<endl;
    }
}
int main()
{
    Employee emp;
    emp.input();
    emp.display();
    return  0;
}*/