// // WAP in C++ to create a database of the following items of derived class. Name of the patient, sex, age,ward number, bed number, nature of illness, date of admission. Design a base class consisiting of data members :  Name of the patient, sex and age : another base class consisting of the data members , bed number and nature of the illness. The derived class consists of the data member, data of admission.
#include<iostream>
// #include<string>
using namespace std;
class Hospital
{
    protected:
        string name,gender,age;
    public:
        void input();
};
class Patient
{
    protected:
        string w_num,b_num,nat_ill,date;
    public:
        void input1();
};
class PatientDetails : public Hospital,public Patient
{
    public:
        void output();
};
void  Hospital :: input()
{
    cout<<"Enter Name :- ";
    cin>>name;
    cout<<"Enter Gender :- ";
    cin>>gender;
    cout<<"Enter Age :- ";
    cin>>age;
}
void Patient :: input1()
{
    cout<<"Enter Ward Number :- ";
    cin>>w_num;
    cout<<"Enter Bed Number :- ";
    cin>>b_num;
    cout<<"Enter Nature of Illness :- ";
    cin>>nat_ill;
    cout<<"Enter Admission Date :- ";
    cin>>date;
}
void PatientDetails ::output()
{

    cout<<"\nPatient Details"<<endl;
    cout<<"Name of The Patient :- "<<name<<"\nGender :- "<<gender<<"\nAge :- "<<age<<"\nWard Number :- "<<w_num<<"\nBed Number :- "<<b_num<<"\nNature of Illnesss :- "<<nat_ill<<"\nAdmission Date :- "<<date;
}
int main()
{
    PatientDetails sd;
    Patient p;
    sd.input();
    sd.input1();
    sd.output();
    return 0;
}