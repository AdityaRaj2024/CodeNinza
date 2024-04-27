//3) Define a class Employee with data members as empno, name, and designation. Derive a class Qualification fom Employee that has data members UG, PG, and experience. Create another class Salary which is derived from both these classes to display the details of the employee and computer their increments based on their experience and educational qualification.
#include<iostream>
using namespace std;
class Employee
{
    protected:
    int empno;
    char name[10];
    string post;
    public:
    void input()
    {
        cout<<"Enter Employee Id = ";
        cin>>empno;
        cout<<"Enter Employee Name = ";
        cin>>name;
        cout<<"Enter Employee's Designation = ";
        cin>>post;
    }
};
class  Qualification : virtual public Employee
{
    public:
    int exp;
    string deg;
    void qual();
};
// void Qualification::qual()
// {
//     cout<<"Enter Qualification details = ";
//     cin>>deg;
//     cout<<"Enter experiance = ";
//     cin>>exp;
// }
class Salary: virtual public Employee, public Qualification
{
    public:
    void details()
    {
        // input();
        cout<<"\n************Employee Details************";
        cout<<"\nEmployee Id :- "<<empno;
        cout<<"\nEmployee Name :- "<<name;
        cout<<"\nEmployee Name :- "<<name;
        cout<<"\nEmployee Qualification :- "<<deg;
        cout<<"\nEmployee Post :- "<<post;
        cout<<"\nEmployee Experiance :- "<<exp<<" years";

    }
};
void Qualification::qual()
{
    cout<<"Enter Qualification details = ";
    cin>>deg;
    cout<<"Enter experiance(in years) = ";
    cin>>exp;
}
int main()
{
    Salary obj;
    obj.input();
    obj.qual();
    obj.details();
    return 0;
}