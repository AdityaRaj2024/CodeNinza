/*
    20-05-2023
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    //ofstream fout("File1.txt");
    // ofstream fout("File",ios::app);
    ofstream fout;
    fout.open("File1.txt", ios ::app);
    int roll;
    string name;
    char ch;
    // cout<<"Roll\tName"<<endl;
    do
    {
        cout<<"Enter Roll number and name = "<<endl;
        cin>>roll>>name;
        fout<<roll<<"\t"<<name<<endl;
        cout<<"More(y/n)";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    fout.close();
    return 0;
}