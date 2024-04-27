/*#include<iostream>
using namespace std;
class A
{
    protected:
    int id;
    string name;
    public:
    void input()
    {
        cout<<"Enter Name and ID = "<<endl;
        cin>>name>>id;
    }
};
class B : public virtual A
{
    protected:
    int t1;
    public:
    void in()
    {
        cout<<"Enter Total Marks = ";
        cin>>t1;
    }
};
class C : public virtual A
{
    protected:
    int t2;
    public:
    void inp()
    {
        cout<<"Enter Total Marks = ";
        cin>>t2;
    }
};
class F : public C ,public B
{
    protected:
    float per;
    char g;
    public:
    void show();
};
void F :: show()
{
    cout<<"********Semester 1 Marksheet*******"<<endl;
    cout<<"Name :- "<<name<<"\nID :- "<<id<<"Total Marks :- "<<t1;
}
int main()
{
    F obj;
    obj.input();
    obj.in();
    obj.inp();
    obj.show();
    return 0;
}*/


// WAP in c++ to implement multipath inheritance for the class diagram 
#include <iostream>
#include<cstring>
using namespace std;
class A
{
    public:
    string id,name;
    A()
    {
        cout<<"Enter Id and Name:\n";
        getline(cin,id);
        getline(cin,name);
    }
};
class B:public virtual A
{
    public:
    int sub1,sub2,sub3,sub4,sub5,t1_marks;
    B()
    {
        cout<<"Enter marks of 5 subject in 1st sem:\n";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
        t1_marks = sub1+sub2+sub3+sub4+sub5;
    }
};
class C:public virtual A
{
    public:
    int sub1,sub2,sub3,sub4,sub5,t2_marks;
    C()
    {
        cout<<"Enter marks of 5 subject in 2nd sem:\n";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
        t2_marks = sub1+sub2+sub3+sub4+sub5;
    }
};
class D:public B,public C
{
    public:
    double avg;
    char grade;
    D()
    {
        avg = (t1_marks+t2_marks)/2;
    }
    ~D()
    {
        cout<<"ID :- "<<id<<endl<<"Name :- "<<name<<endl<<"1st Sem Marks :- "<<t1_marks<<endl<<"2nd Sem Marks :- "<<t2_marks<<endl<<"Average Marks :- "<<avg<<endl;
    }
};
int main()
{
    D d;
    return 0;
}