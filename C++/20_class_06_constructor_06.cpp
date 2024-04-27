//WAP in C++ to create a class named department to input department id, depatrment name and department location during compile time using default constructor.
#include<iostream>
using namespace std;
class Department
{
    int id;
    string name, location;
    public:
    Department()
    {
        id=12;
        name="Income Tax";
        location="Delhi";
    }
    void show();
};
void Department :: show()
{
    cout<<"Department Id :- "<<id<<endl<<"Department Name :- "<<name<<endl<<"Location :- "<<location<<endl;
}
int main()
{
    Department dpt;
    dpt.show();
    return 0;
}