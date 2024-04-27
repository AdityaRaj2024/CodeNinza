//Define a class Student with data members as rollno and name. Derive a class Fees from Student that has a data member fees and functions to submit fees and generate receipt. Derive another class Result from student that displays the marks and grade obtained by the student.
#include<iostream>
using namespace std;
class Student
{
    protected:
    int rollno;
    char name[15],id[6];
};
class Fees : public Student
{
    private:
    float subfees,depfees,remfee;
    public:
    void submit_fees();
    void genreate_receipt();
};
class Result : public Student
{
    private:
    int marks;
    char grade;
    public:
    void marksheet();
    void genrate_marksheet();
};
void Fees::submit_fees()
{
    cout<<"Enter Name of Student :- ";
    cin>>name;
    cout<<"Enter ID of Student :- ";
    cin>>id;
    cout<<"Enter Roll Number of Student :- ";
    cin>>rollno;
    cout<<"Enter Due Fees :- ";
    cin>>subfees;
    cout<<"Enter Deposit Fees :- ";
    cin>>depfees;
}
void Result::marksheet()
{
    cout<<"Enter Marks Obtained :- ";
    cin>>marks;
    cout<<"Enter Grade :- ";
    cin>>grade;
}
void Fees ::genreate_receipt()
{
    remfee=subfees-depfees;
    cout<<"\n************Details Of Student***********";
    cout<<"\nName = "<<name<<"\nID = "<<id<<"\nRoll No. = "<<rollno<<"\nDue Amount :- "<<subfees<<"\nPaid Amount :- "<<depfees<<"\nRemaining Amount :- "<<remfee;
}
void Result::genrate_marksheet()
{
    cout<<"\nMarks Obtained :- "<<marks<<"\nGrade :- "<<grade;
}
int main()
{
    Fees fs;
    Result rs;
    fs.submit_fees();
    rs.marksheet();
    fs.genreate_receipt();
    rs.genrate_marksheet();
}