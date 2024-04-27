//WAP in C++ to create a class as named Teacher. Input teacher id, teacher name , and department using parameterized method after that print all details.
#include<iostream>
#include<cstring>
using namespace std;
class Teacher
{
    private:
        // string name,id,dept;
        char id[7],name[15],dept[12];
    public:
        Teacher(char id[], char name[], char dept[])
        // Teacher(string id, string name, string dept)
        {
            strcpy(this->id,id);
            strcpy(this->name,name);
            strcpy(this->dept,dept);
        }
        void show()
        {
            cout<<"Teacher ID :- "<<id<<endl<<"Teacher Name :- "<<name<<endl<<"Teacheer Department :- "<<dept<<endl;
        }
};
int main()
{
    Teacher tch("1452","abc","c");
    tch.show();
    return 0;
}