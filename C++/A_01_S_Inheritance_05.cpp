//WAP in C++ to input details of students after that print it using multilevel inheritance. 
#include<iostream>
using namespace std;
class Student
{
    protected:
        int st_id,roll,m1,m2,m3,tm;
};
class Details : protected Student
{
    public :
        void input()
        {
            cout<<"Enter Student ID and Roll Number :-"<<endl;
            cin>>st_id>>roll;
            cout<<"Marks of Three Subject :- "<<endl;
            cin>>m1>>m2>>m3;
            tm=m1+m2+m3;
        }
        void result()
        {
            //tm=m1+m2+m3;
            cout<<"\n**********Details of Student********"<<endl;
            cout<<"Student Id = "<<st_id<<"\nStudent Roll_no. "<<roll<<"\nMarks in Subject 1 "<<m1<<"\nMarks in Subject 2 "<<m2<<"\nMarks in Subject 3 "<<m3<<"\nTotal Marks = "<<tm;
        }
};
int main()
{
    Details dt;
    dt.input();
    dt.result();
    return 0;
}