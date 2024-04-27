//WAP to implement multipath inheritance.
#include<iostream>
using namespace std;
class A
{
    protected:
        string id,name;
        int total;
    public:
        void in();
};
class B:public virtual A
{
    protected:
        float mark1;
    public:
        void inpt();
};
class C :public virtual A
{
    protected:
        float mark2;
    public:
        void input();
};
class D : public B,public C
{
    private:
        float pcg;
        char grade;
    public:
        void get();
        void set();
};
void A::in()
{
    cout<<"Enter Id and Name = "<<endl;
    cin>>id>>name;
}
void B::inpt()
{
    cout<<"Enter Mark 1 = ";
    cin>>mark1;
}
void C::input()
{
    cout<<"Enter Mark 2 = ";
    cin>>mark2;
}
void D::get()
{
    total=mark1+mark2;
    pcg=(total*100)/200;
}
void D::set()
{
    cout<<"\n***********Student Details*****************"<<endl;
    cout<<"Name :-"<<name<<"\nID :- "<<id<<"\nTotal Marks = "<<total<<"\nPercentage :- "<<pcg<<" %"<<endl;
}
int main()
{
    D ob;
    ob.in();
    ob.inpt();
    ob.input();
    ob.get();
    ob.set();
    return 0;
}