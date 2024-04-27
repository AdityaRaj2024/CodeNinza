/*#include<iostream>
using namespace std;
struct student
{
    int id;
    string name;
    float fee;
};
int main()
{
    struct student st;
    st.id=1302;    
    st.name="abcdef";
    st.fee=4521;
    cout<<"Student Id = "<<st.id<<endl;
    cout<<"Student Name = "<<st.name<<endl;
    cout<<"Student Fee = "<<st.fee<<endl;
    return 0;
}*/

//structure with typedef
#include<iostream>
using namespace std;
typedef struct employee
{
    int e_id;
    string e_name,e_post;
    float e_salary;
}em;
int main()
{
    em emp;
    cout<<"Enter Employee Name, Id, Post & Salary =\n";
    cin>>emp.e_name>>emp.e_id>>emp.e_post>>emp.e_salary;
    cout<<"Employee Name = "<<emp.e_name<<endl<<"Employee Id = "<<emp.e_id<<endl<<"Employee post = "<<emp.e_post<<endl<<"Employee Salary = "<<emp.e_salary<<endl;
    return 0;
}