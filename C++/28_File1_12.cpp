// 05-06-2023
/*WAP in C++ to create a class named employee to enter basic salary after that add allowece as:-
    HRA-basic*15%;
    TA-basic*22%;
    DA-basic*150%;
    Deduction :->
    Medical - rs 200
    insurence = rs 1000
    pf=12%
*/
#include<iostream>
#include<fstream>
using namespace std;
class File
{
    public:
        ifstream fin;
        ofstream fout;
        File()
        {
            fout.open("Employee.txt",ios::app);
        }
        ~File()
        {
            fout.close();
        }
};
class Employee :public  File
{
    private:
        string e_id;
        float bs,hra,ta,da,md,ins,ts,pf;
    public:
        Employee()
        {
            cout<<"Enter Employee ID :-  ";
            cin>>e_id;
            cout<<"Enter Basic Salary :- ";
            cin>>bs;
        }
        void getSalary();
        void addSalary();
        void fileEntry();
};
void Employee :: getSalary()
{
    hra=(bs/100)*15;
    ta=(bs/100)*22;
    da=(bs/100)*150;
    pf=(bs/100)*12;
    md=200;
    ins=1000;
}
void Employee :: addSalary()
{
    ts=(bs+hra+da+ta)-(md+ins+pf);
    cout<<"\nEmployee Salary Slip"<<endl;
    cout<<"Employee id :-  "<<e_id<<endl;
    cout<<"Basic Salary :- "<<bs<<endl;
    cout<<"HRA :- "<<hra<<endl;
    cout<<"TA :- "<<ta<<endl;
    cout<<"DA :- "<<da<<endl;
    cout<<"PF :- "<<pf<<endl;
    cout<<"Total Salary :- "<<ts<<endl;
}
void Employee :: fileEntry()
{
    fout<<"\nEmployee Id :- "<<e_id<<"\nBasic Salary :-  "<<bs<<"\nTotal Salary :-  "<<ts<<endl;
}
int main()
{
    Employee emp;
    emp.getSalary();
    emp.addSalary();
    emp.fileEntry();
    return 0;
}