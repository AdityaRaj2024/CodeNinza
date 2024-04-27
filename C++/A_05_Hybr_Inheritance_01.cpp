//WAP in C++ to implement the details as 
#include<iostream>
using namespace std;
class Person
{
    protected:
    string name,gender;
    int age;
    void in()
    {
        cout<<"Enter Name , Gender and age = "<<endl;
        cin>>name>>gender>>age;
    }
};
class Student : public Person
{
    int id;
    char course[10];
    public:
    void inp()
    {
        cout<<"Enter Student Details"<<endl;
        in(); //delegation
        cout<<"Enter ID and course of student = "<<endl;
        cin>>id>>course;

    }
    void out()
    {
        cout<<"\n*************Student Details************";
        cout<<"\nName = "<<name<<"\nGender :- "<<gender<<"\nAge :- "<<age<<"\nId :- "<<id<<"\nCourse :- "<<course;
    }
};
class Faculty : protected Person
{
    protected:
    char post[10],dept[10];
    void inpt()
    {
        cout<<"Enter Department and post ="<<endl;
        cin>>dept>>post;
    }
};
class Publication : public Faculty
{
    int nrp,nrj,nra;
    public:
    void input()
    {
        cout<<"\nEnter Faculty Details"<<endl;
        in(); //delegation
        inpt(); //delegation
        cout<<"\nEnter Number Of Research Paper,Journal,and Article = "<<endl;
        cin>>nrp>>nrj>>nra;
    }
    void disp()
    {
        cout<<"\n\n*************Faculty Details************";
        cout<<"\nName = "<<name<<"\nGender :- "<<gender<<"\nAge :- "<<age<<"\nDepartment :- "<<dept<<"\nPost :- "<<post<<"\nNumber of Research paper :- "<<nrp<<"\nNumber of Journal :- "<<nrj<<"\nNumber of Article :- "<<nra;
    }
};
int main()
{
    Student std;
    std.inp();
    Publication det;
    det.input();
    std.out();
    det.disp();
    return 0;
}