//Single Inheritance program -for printing total salary of an employee
#include<iostream>
using namespace std;
class Account
{
    protected:
        float salary;
};
class Deposit : public Account
{
    protected:
        float bonus;
    public:
        void total()
        {
            cout<<"Enter Salary and Bonus :-"<<endl;
            cin>>salary>>bonus;
            cout<<"Total Salary = "<<salary+bonus;
        }
};
int main()
{
    Deposit emp;
    emp.total();
    return 0;
}