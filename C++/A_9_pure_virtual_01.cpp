//01-05-2023
//WAP IN C++ to implement pure virtual function.
// #include<iostream>
// using namespace std;
// class Person
// {
//     protected:
//     string name;
//     public:
//     virtual void getdata()
//     {
//         cout<<"Enter Name = ";
//         cin>>name;
//     }
//     virtual void display()=0;
// };
// void Person :: display()
// {

// }
// class Student : public Person
// {
//     protected:
//     int id;
//     public:
//     void getdata()
//     {
//         cout<<"Enter ID = ";
//         cin>>id;
//     }
//     void display()
//     {
//         cout<<"Name = "<<name;
//         cout<<"ID :- "<<id;
//     }
// };
// int main()
// {
//     Student std;
//     std.getdata();
//     std.getdata();
//     std.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    void setdata()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        // getline(cin,name);
    }
    virtual void display()=0;
};
// void person::display(){}
class faculty:public person
{
    protected:
    string id;
    public:
    void in()
    {
        setdata();
        cout<<"Enter id: "<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl;
    }
};
class student:public person
{
    protected:
    string id;
    public:
    void get()
    {
        setdata();
        cout<<"Enter id: "<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl;
    }
};
int main()
{   
    person *ptr[2];
    faculty f;
    student s;
    ptr[0]=&f; 
    ptr[1]=&s; 
    ptr[0]->setdata();
    ptr[0]->display();
    ptr[1]->setdata();
    ptr[1]->display();
    // faculty f;
    // f.setdata();
    // f.getdata();
    // f.display();
    // student s;
    // // s.setdata();
    // s.getdata();
    // s.display();
    return 0;
}