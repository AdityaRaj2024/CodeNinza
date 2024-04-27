//4. Write a program that has a class Student to store the details of students in a class. Derive another Class Toppers from the Student that stores records of only top three students of the class.
#include<iostream>
using namespace std;
class Student
{
    protected:
    int id[6],roll[6],mark[6],i,gt[3];
    public:
    void input();
    //void show();
};
void Student:: input()
{
    for(i=1;i<=6;i++)
    {
        cout<<"Enter ID, Roll & mark of student "<<i<<endl;
        cin>>id[i]>>roll[i]>>mark[i];
    }
}
class Toppers: public Student
{
    public:
        void show()
        {
            gt[i]=mark[1];
            for(i=1;i<=6;i++)
            {
                if(mark[i]>gt[i])
            }
        }
};

int main()
{
    
    return 0;
}