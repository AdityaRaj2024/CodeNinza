//WAP to implement Multiple Inheritance.
#include<iostream>
using namespace std;
class Academic
{
    protected:
        string qual;
        int mark;
    public:
        void input();
};
class Physical
{
    protected:
        int height,weight;
    public:
        void inpt();
};
void Academic::input()
{
    cout<<"Enter Qualification Details and marks = "<<endl;
    cin>>qual>>mark;
}
void Physical::inpt()
{
    cout<<"Enter Height and Weight = "<<endl;
    cin>>height>>weight;
}
class Detail : public Academic, public Physical
{
    private:
        string name;
    public:
        void inpt();
        //void inpt()
        // {
        //     cout<<"Enter Name = ";
        //     cin>>name;
        // }
        void show();
};
void Detail::inpt()
{
    cout<<"Enter Name = ";
    cin>>name;
}
void Detail::show()
{
    cout<<"Name :- "<<name<<"\nQualification Details :- "<<qual<<"\nMarks :- "<<mark<<endl<<"Height :- "<<height<<" cm"<<"\nWeight :- "<<weight<<" kg"<<endl;
}
int main()
{
    Detail dt;
    //dt.inpt();
    dt.Detail::inpt();
    dt.input();
    dt.Physical::inpt();
    dt.show();
    return 0;
}