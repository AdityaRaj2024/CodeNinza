//Array of object
//WAP in C++ to create a class as named Student to input id,roll number, name , course and fee of several students according to requirement, after that print records of student
#include<iostream>
// #include<String.h>
using namespace std;
class Student
{
    int id,roll;
    char name[10],course[7];
    float fee;
    public:
        void input()
        {
            cout<<"Enter Id :- ";
            cin>>id;
            cout<<"Enter Roll :- ";
            cin>>roll;
            cout<<"Enter Name :- ";
            cin>>name;
            cout<<"Enter Course :- ";
            cin>>course;
            cout<<"Enter Fee :- ";
            cin>>fee;
        }
        void show()
        {
            cout<<"ID :- "<<id<<endl<<"Roll No.:-  "<<roll<<"\nName :- "<<name<<"\nCourse :- "<<course<<"\nFee :- "<<fee<<endl;
        }
};
int main()
{
    int n,i;
    cout<<"Enter Number of Students :- ";
    cin>>n;
    Student std[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Records of Student "<<i+1<<endl;
        std[i].input();
    }
    cout<<"Record of All Student :- "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Record of Student "<<i+1<<endl;
        std[i].show();
    }
    return 0;
}