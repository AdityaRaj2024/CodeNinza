//Define a class Employee. Display the personal and salary details of five employees using single inheritance.
#include<iostream>
using namespace std;
class Employee
{
    public:
        int emp_id[5],emp_no[5],i;
        float emp_bs[5],bonus[5],emp_ts[5];
        string name[5];
        void input()
        {
            for(i=1;i<=2;i++)
            {
                cout<<"\nEnter Name, ID , mobile  no. of Employee "<<i<<" :- "<<endl;
                cin>>name[i]>>emp_id[i]>>emp_no[i];
                cout<<"\nEnter Basic Salary, Bonus of the employee "<<i<<" :- "<<endl;
                cin>>emp_bs[i]>>bonus[i];
            }
        }
        
};
class Details : public Employee
{
   // float emp_bs[5],bonus[5],emp_ts[5];
    public:
        void display();
};
// void Details :: input()
// {
//     for(i=1;i<=2;i++)
//     {
//         cout<<"\nEnter Name, ID , mobile  no. of Employee "<<i<<" :- "<<endl;
//         cin>>name[i]>>emp_id[i]>>emp_no[i];
//         cout<<"\nEnter Basic Salary, Bonus of the employee "<<i<<" :- "<<endl;
//         cin>>emp_bs[i]>>bonus[i];
//     }
// }
void Details :: display()
{
   // emp_ts[i]=emp_bs[i]+bonus[i];
    for(i=1;i<=2;i++)
    {
        cout<<"\nDetails of Employee "<<i<<" :- "<<endl;
        cout<<"Name = "<<name[i]<<endl<<"Employee ID = "<<emp_id[i]<<"\nMobile Number = "<<emp_no[i]<<"\nBasic Salary = "<<emp_bs[i]<<"\nBonus = "<<bonus[i]<<"\nTotal Salary = "<<emp_bs[i]+bonus[i]<<endl;
    }
}
int main()
{
    Details emp;
    emp.input();
    emp.display();
    return  0;
}